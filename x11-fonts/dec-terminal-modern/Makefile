PORTNAME=	dec-terminal-modern
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	x11-fonts
DISTNAME=	dec_terminal_modern
MASTER_SITE_OVERRIDE=	https://dl.dafont.com/dl/?f=${DISTNAME}

LICENSE=	NONE

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	The famous font from DEC VT terminals
WWW=		https://www.dafont.com/dec-terminal-modern.font

NO_WRKSUBDIR=	yes
USES=		fonts zip
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES+=		${FONTSDIR}/decterm.ttf

post-patch:
	@cd ${WRKSRC} && for i in `ls *.ttf`; do ${MV} $$i `echo $$i | \
		${SED} -e 's/_v1.0//;s/_//'`; done

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
