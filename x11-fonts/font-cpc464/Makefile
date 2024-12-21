PORTNAME=		font-cpc464
PORTVERSION=		1.4
PORTREVISION=		1
LICENSE=		CC0-1.0
CATEGORIES=		x11-fonts
DISTVERSIONPREFIX=	v
WRKSRC=			${WRKDIR}/${PORTNAME}-${DISTVERSION}

MAINTAINER=		pierre.gnaedig@mailoo.org
COMMENT=		An 8x8 pixel font based on the Amstrad CPC 464 font.
WWW=			https://github.com/damianvila/font-cpc464

USES=			fonts

USE_GITHUB=		nodefault
GH_ACCOUNT=		damianvila

NO_ARCH=		yes
NO_BUILD=		yes

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in README.md
	cd ${WRKSRC} && \
		${INSTALL_DATA} ${docfile} ${STAGEDIR}${DOCSDIR}
.endfor
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/fonts && \
		${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
