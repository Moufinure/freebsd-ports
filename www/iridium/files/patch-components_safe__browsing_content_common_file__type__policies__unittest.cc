--- components/safe_browsing/content/common/file_type_policies_unittest.cc.orig	2024-11-04 08:56:03 UTC
+++ components/safe_browsing/content/common/file_type_policies_unittest.cc
@@ -148,7 +148,7 @@ TEST_F(FileTypePoliciesTest, UnpackResourceBundle) {
   EXPECT_EQ(DownloadFileType::FULL_PING, file_type.ping_setting());
 // TODO(crbug.com/40118868): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   EXPECT_EQ(DownloadFileType::ALLOW_ON_USER_GESTURE,
             file_type.platform_settings(0).danger_level());
   EXPECT_EQ(DownloadFileType::DISALLOW_AUTO_OPEN,
