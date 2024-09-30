AC_INIT([ConfigReader], [1.0], [reri0702@gmail.com])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([src/readconfC.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([subdir-objects foreign])

AC_PROG_CC
AC_PROG_INSTALL
LT_INIT

# Output the configuration files
AC_CONFIG_FILES([
                    Makefile
                    src/Makefile
                    test/Makefile
                ])
AC_OUTPUT