PORTNAME		= font-eb-garamond
PORTVERSION		= 0.016
PORTREVISION		= 1
CATEGORIES		= x11-fonts
DISTNAME		= EBGaramond-${PORTVERSION}
MASTER_SITES		= https://bitbucket.org/georgd/eb-garamond/downloads/

COMMENT			= The famous Garamond font
MAINTAINER		= pierre.gnaedig@mailoo.org

LICENSE			= OFL11

USES			= fonts zip
NO_ARCH			= yes
NO_BUILD		= yes

FONTNAME		= EB-Garamond

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/ttf && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
