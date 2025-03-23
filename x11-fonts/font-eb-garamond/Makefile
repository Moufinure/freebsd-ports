PORTNAME=	font-eb-garamond
PORTVERSION=	0.016
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	https://bitbucket.org/georgd/eb-garamond/downloads/
DISTNAME=	EBGaramond-${DISTVERSION}

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	EB Garamond font
WWW=		http://www.georgduffner.at/ebgaramond/
LICENSE=	OFL11

USES=		zip fonts

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in README.markdown
	cd ${WRKSRC} && \
		${INSTALL_DATA} ${docfile} ${STAGEDIR}${DOCSDIR}
.endfor
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/ttf && \
		${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/otf && \
		${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
