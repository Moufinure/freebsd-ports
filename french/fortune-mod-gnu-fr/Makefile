PORTNAME=	fortune-mod-gnu-fr
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	misc

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	Le guide du Neuneu sur Usenet maintenant en fortunes.
WWW=		http://gnu.free.fr/

SRCF=		gcu gmp npc gge glp
EXTRACT_SUFX=	.tgz
DISTFILES=	gcu.tgz gmp.tgz npc.tgz gge.tgz glp.tgz
MASTER_SITES=	http://gnu.free.fr/chapitres/unix/
NO_WRKSUBDIR=	yes

USES=		iconv

OPTIONS_DEFINE=	UTF8
OPTIONS_DEFAULT=UTF8

UTF8_DESC=	Convert to UTF-8

.if exists(/usr/games/strfile)
STRFILE=	/usr/games/strfile
.elif exists(/usr/bin/strfile)
STRFILE=	/usr/bin/strfile
.else
IGNORE=		needs strfile command. Please install games distribution of base system
.endif

PLIST_FILES=	${SRCF:S|^|share/games/fortune/|} ${SRCF:S|^|share/games/fortune/|:S|$|.dat|}

do-build:
.for f in ${SRCF}
.if ${PORT_OPTIONS:UTF8}
	@${ICONV_CMD} -f iso-8859-1 -t utf-8 ${WRKSRC}/$f
.endif
	@${STRFILE} ${WRKSRC}/$f
.endfor

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/games/fortune
.for f in ${SRCF}
	${INSTALL_DATA} ${WRKSRC}/$f ${STAGEDIR}${PREFIX}/share/games/fortune
	${INSTALL_DATA} ${WRKSRC}/${f}.dat ${STAGEDIR}${PREFIX}/share/games/fortune
.endfor

.include <bsd.port.mk>
