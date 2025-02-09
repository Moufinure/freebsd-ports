--- dgamelaunch.c.orig	2024-07-08 18:18:05.028872000 +0200
+++ dgamelaunch.c	2024-07-08 18:18:33.676015000 +0200
@@ -101,7 +101,7 @@
 
 /* global variables */
 
-char * __progname;
+char *progname;
 int  g_idle_alarm_enabled = 0;
 
 #ifndef USE_SQLITE3
@@ -2273,7 +2273,7 @@
     auth = strdup(p);
   /* else auth is still NULL */
 
-  __progname = basename(strdup(argv[0]));
+  progname = basename(strdup(argv[0]));
 
   while ((c = getopt(argc, argv, "qh:pf:aeW:S")) != -1)
   {
