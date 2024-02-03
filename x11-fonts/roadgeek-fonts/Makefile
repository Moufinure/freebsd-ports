PORTNAME	= roadgeek-fonts
PORTVERSION	= 3.1
PORTREVISION	= 1
CATEGORIES	= x11-fonts
GH_ACCOUNT	= sammdot
MAINTAINER	= pierre.gnaedig@mailoo.org
COMMENT		= A modern recreation of the Highway Gothic font

BUILD_DEPENDS	= fontforge:print/fontforge

USES		= fonts
USE_GITHUB	= yes
NO_ARCH		= yes

FONTNAME	= roadgeek

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
