PORTNAME=		mpdevil
PORTVERSION=		1.10.2
PORTREVISION=		1
CATEGORIES=		audio python
MAINTAINER=		pierre.gnaedig@mailoo.org
GH_ACCOUNT=		SoongNoonien
DISTVERSIONPREFIX=	v
LICENSE=		GPLv3
WWW=			https://github.com/SoongNoonien/mpdevil

USE_GITHUB=		yes
USES=			python meson gettext gnome shebangfix
SHEBANG_FILES=		src/mpdevil.py
#PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}python-mpd2>=0.4.6:audio/py-python-mpd2@${PY_FLAVOR}

.include <bsd.port.mk>
