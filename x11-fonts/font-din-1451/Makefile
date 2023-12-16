PORTNAME	= font-din-1451
PORTVERSION	= 0.99
PORTREVISION	= 1
#DISTNAME	= din_1451
CATEGORIES	= x11-fonts
MASTER_SITES	= https://dl.dafont.com/dl/?f=

MAINTAINER	= pierre.gnaedig@mailoo.org
COMMENT		= The DIN 1451 font from Germany

USES		= fonts
NO_ARCH		= yes
NO_BUILD	= yes

FONTNAME	= din1451

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKDIR}/${PORTNAME} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
