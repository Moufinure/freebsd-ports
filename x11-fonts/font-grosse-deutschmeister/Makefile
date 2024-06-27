PORTNAME	= font-grosse-deutschmeister
PORTVERSION	= 0.99
PORTREVISION	= 1
CATEGORIES	= x11-fonts
MASTER_SITES	= http://www.peter-wiegel.de/Fonts/
DISTFILES	= GrobeDeutschmeister${EXTRACT_SUFX}
NO_WRKSUBDIR	= yes

MAINTAINER	= pierre.gnaedig@mailoo.org
COMMENT		= The Grotesk font from Germany

USES		= fonts zip
NO_ARCH		= yes
NO_BUILD	= yes

FONTNAME	= grossedeutschmeister

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
