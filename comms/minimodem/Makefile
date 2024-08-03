PORTNAME		= minimodem
PORTVERSION		= 0.24
CATEGORIES		= comms
MASTER_SITES		= http://www.whence.com/minimodem/

MAINTAINER		= pierre.gnaedig@mailoo.org
COMMENT			= General-purpose software audio FSK modem
WWW			= http://www.whence.com/minimodem/
LICENSE			= GPLv3

GNU_CONFIGURE		= yes
LIB_DEPENDS		= libfftw3.so:math/fftw3

OPTIONS_DEFINE		= PULSEAUDIO ALSA SNDFILE
OPTIONS_DEFAULT		= SNDFILE

PULSEAUDIO_LIB_DEPENDS	= libpulse.so:audio/pulseaudio
PULSEAUDIO_CONFIGURE_WITH	= pulseaudio

ALSA_LIB_DEPENDS	= libasound.so:audio/alsa-lib
ALSA_CONFIGURE_WITH	= alsa

SNDFILE_LIB_DEPENDS	= libsndfile.so:audio/libsndfile
SNDFILE_CONFIGURE_WITHOUT	= sndfile

.include <bsd.port.mk>
