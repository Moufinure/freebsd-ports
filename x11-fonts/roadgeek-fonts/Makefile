PORTNAME=		roadgeek-fonts
PORTVERSION=		3.1
PORTREVISION=		1
LICENSE=		MIT
CATEGORIES=		x11-fonts
WRKSRC=			${WRKDIR}/${PORTNAME}-${DISTVERSION}

MAINTAINER=		pierre.gnaedig@mailoo.org
COMMENT=		A set of fonts replicating various road sign typefaces
WWW=			https://github.com/sammdot/roadgeek-fonts

DEPENDS=		fontforge:x11-fonts/fontforge

USES=			fonts

USE_GITHUB=		yes
GH_ACCOUNT=		sammdot

NO_ARCH=		yes

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in README.md
	cd ${WRKSRC} && \
		${INSTALL_DATA} ${docfile} ${STAGEDIR}${DOCSDIR}
.endfor
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && \
		${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
