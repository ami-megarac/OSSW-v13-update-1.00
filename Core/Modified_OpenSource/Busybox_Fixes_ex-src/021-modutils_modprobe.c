--- busybox.org/modutils/modprobe.c	2019-01-15 14:20:48.016532381 +0800
+++ busybox/modutils/modprobe.c	2019-01-15 14:22:43.838336457 +0800
@@ -238,6 +238,17 @@
 {
 	struct module_entry *m;
 
+	/*
+	 * get_or_add_modentry() strips path from name and works
+	 * on remaining basename.
+	 * This would make "rmmod dir/name" and "modprobe dir/name"
+	 * to work like "rmmod name" and "modprobe name",
+	 * which is wrong, and can be abused via implicit modprobing:
+	 * "ifconfig /usbserial up" tries to modprobe netdev-/usbserial.
+	 */
+	if (strchr(name, '/'))
+		bb_error_msg_and_die("malformed module name '%s'", name);
+
 	m = get_or_add_modentry(name);
 	if (!(option_mask32 & (OPT_REMOVE | OPT_SHOW_DEPS))
 	 && (m->flags & MODULE_FLAG_LOADED)
