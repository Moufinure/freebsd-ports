PORTNAME=	sql-workbench
PORTVERSION=	141
PORTEPOCH=	1
CATEGORIES=	databases java
MASTER_SITES=	http://www.sql-workbench.net/ \
	http://www.sql-workbench.net/archive/
DISTNAME=	Workbench-Build${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DBMS-independent, cross-platform SQL query tool
WWW=		https://www.sql-workbench.eu/

LICENSE=	APACHE20

USES=		java zip
JAVA_VERSION=	11+

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

OPTIONS_DEFINE=	DOCS MYSQL_JDBC PGSQL_JDBC
MYSQL_JDBC_RUN_DEPENDS=	${JAVALIBDIR}/mysql-connector-j.jar:databases/mysql-connector-j
PGSQL_JDBC_RUN_DEPENDS=	${JAVALIBDIR}/postgresql.jar:databases/postgresql-jdbc

pre-install:
	@${ECHO} "#!/bin/sh" > ${WRKSRC}/new_sqlworkbench.sh
	@${ECHO} "${PREFIX}/bin/java -Dvisualvm.display.name=SQLWorkbench -Xmx512m -jar ${JAVAJARDIR}/sqlworkbench.jar" >> ${WRKSRC}/new_sqlworkbench.sh

do-install:
	(cd ${WRKSRC}/xslt && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/xslt)
	${INSTALL_DATA} ${WRKSRC}/manual/SQLWorkbench-Manual.pdf ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/sqlworkbench.jar ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/workbench32.png ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_SCRIPT} ${WRKSRC}/new_sqlworkbench.sh ${STAGEDIR}${PREFIX}/bin/sqlworkbench

.include <bsd.port.mk>
