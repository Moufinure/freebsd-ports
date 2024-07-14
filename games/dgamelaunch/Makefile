PORTNAME=	dgamelaunch
PORTVERSION=	1.5.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://alt.org/nethack/${PORTNAME}/

MAINTAINER=	pierre.gnaedig@mailoo.org
COMMENT=	Network-based game shell

MAKE_JOBS_UNSAFE=	yes

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	yes
USES=		bison gmake ncurses sqlite

LICENSE=	GPLv2

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && \
	${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR} "! -name Makefile")

.include <bsd.port.mk>
