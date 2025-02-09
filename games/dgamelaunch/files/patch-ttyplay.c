--- ttyplay.c.orig	2024-07-08 18:09:47.134923000 +0200
+++ ttyplay.c	2024-07-08 18:09:57.485952000 +0200
@@ -520,7 +520,7 @@
   WaitFunc wait_func = ttywait;
   FILE *input = stdin;
   struct termios old, new;
-  sighandler_t old_sigwinch;
+  sig_t old_sigwinch;
 
   populate_gfx_array (stripped);
 
