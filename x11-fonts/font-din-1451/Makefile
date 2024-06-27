PORTNAME	= font-din-1451
PORTVERSION	= 0.99
PORTREVISION	= 1
CATEGORIES	= x11-fonts
MASTER_SITES	= http://www.peter-wiegel.de/Fonts/
DISTFILES	= Din1451altTT${EXTRACT_SUFX} DIN1451breit${EXTRACT_SUFX} DIN1451_4H_08.87${EXTRACT_SUFX}
NO_WRKSUBDIR	= yes

MAINTAINER	= pierre.gnaedig@mailoo.org
COMMENT		= The DIN 1451 font from Germany

USES		= fonts zip
NO_ARCH		= yes
NO_BUILD	= yes

FONTNAME	= din1451

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
