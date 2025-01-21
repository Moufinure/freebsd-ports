PORTNAME=	fortune-mod-wisdom-fr
PORTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	misc

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	Une Liste de Citations en Français pour Fortune-Mod

GH_ACCOUNT=	Bundy01

#WRKSRC=		${WRKDIR}/bofh-fortune-mod2.0

SUB_FILES=	pkg-message
USE_GITHUB=	yes

.if exists(/usr/games/strfile)
STRFILE=	/usr/games/strfile
.elif exists(/usr/bin/strfile)
STRFILE=	/usr/bin/strfile
.else
IGNORE=		needs strfile command. Please install games distribution of base system
.endif

SRCF=		Asie Occident RastAfrica
PLIST_FILES=	${SRCF:S|^|share/games/fortune/|} ${SRCF:S|^|share/games/fortune/|:S|$|.dat|}

do-build:
.for f in ${SRCF}
	@${STRFILE} ${WRKSRC}/$f
.endfor

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/games/fortune
.for f in ${SRCF}
	${INSTALL_DATA} ${WRKSRC}/$f ${STAGEDIR}${PREFIX}/share/games/fortune
	${INSTALL_DATA} ${WRKSRC}/${f}.dat ${STAGEDIR}${PREFIX}/share/games/fortune
.endfor

.include <bsd.port.mk>
