PORTNAME=	gettext_i18n_rails_js
PORTVERSION=	2.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Make gettext_i18n_rails .po files as JSON
WWW=		https://github.com/webhippie/gettext_i18n_rails_js

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-gettext>=3.0.2:devel/rubygem-gettext \
		rubygem-gettext_i18n_rails>=0.7.1:devel/rubygem-gettext_i18n_rails \
		rubygem-po_to_json>=2.0.0:converters/rubygem-po_to_json \
		rubygem-rails71>=3.2.0:www/rubygem-rails71

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
