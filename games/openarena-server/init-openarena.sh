#!/bin/sh

# PROVIDE: openarena

. /etc/rc.subr

name="openarena"
rcvar=`set_rcvar`
command="/usr/local/bin/oa_ded"
command_args="+set fs_homepath /srv/games/openarena/"

load_rc_config ${name}
: ${openarena_enable:="NO"}
: ${openarena_config:="server.cfg"}

start_cmd="start_openarena"
stop_cmd="stop_openarena"

start_openarena()
{
        info "Starting OpenArena servers..."

        p=27960
        for m in $openarena_config; do
                daemon -f -p "/var/run/${name}_${p}.pid" -u games ${command} ${command_args} +exec $m +set net_port $p
                p=$(($p + 1))
        done
}

stop_openarena()
{
        info "Stopping OpenArena servers..."

        for pf in $(ls /var/run/${name}_*.pid); do
                kill $(cat ${pf})
        done
}

run_rc_command "$1"

