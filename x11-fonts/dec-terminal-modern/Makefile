PORTNAME=	dec-terminal-modern
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	x11-fonts
DISTNAME=	dec-terminal-modern
MASTER_SITE_OVERRIDE=	https://www.wfonts.com/download/data/2015/05/12/${DISTNAME}/

#LICENSE=	NONE

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	The famous font from DEC VT terminals
WWW=		https://www.dafont.com/dec-terminal-modern.font

NO_WRKSUBDIR=	yes
USES=		fonts zip
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES+=		${FONTSDIR}/DECTERM.ttf

post-patch:
	@cd ${WRKSRC} && for i in `ls *.ttf`; do ${MV} $$i `echo $$i | \
		${SED} -e 's/_v1.0//;s/_//'`; done

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
