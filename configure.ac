#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.




AC_PREREQ([2.68])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([src/parser.y])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([-Wall])
# Checks for programs.
AC_PROG_INSTALL
AC_PROG_CC
AC_PROG_YACC # Bison detect, ^_^

## Default font settings
songti="Adobe Song Std"
songtibold="song-bold"
monohei="WenQuanYi Zen Hei Mono"
heiti="Adobe Heiti Std"
TimesFont="Nimbus Roman No9 L"

LATEX=xelatex
AC_SUBST(LATEX)


AC_ARG_WITH(fontsong,[AC_HELP_STRING([--with-fontsong],[font used to set CJK song, default is Adobe Song Std])],[],[])
AC_ARG_WITH(fontsongbold,[AC_HELP_STRING([--with-fontsongbold],[font used to set CJK bold song, default is song-bold])],[],[])
AC_ARG_WITH(fontmonohei,[AC_HELP_STRING([--with-fontmonohei],[font used to set CJK mono font, default is WenQuanYi Zen Hei Mono])],[],[])
AC_ARG_WITH(heiti,[AC_HELP_STRING([--with-heiti],[font used to set CJK heiti font, default is Adobe Heiti Std])],[],[])
AC_ARG_WITH(TimesFont,[AC_HELP_STRING([--with-TimesFont],[font used to set English Times font.default is Nimbus Roman No9 L(type1)])],[],[])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_SUBST(songti)
AC_SUBST(songtibold)
AC_SUBST(monohei)
AC_SUBST(heiti)
AC_SUBST(TimesFont)
AC_CONFIG_FILES([doc/common/setup_font.tex Makefile src/Makefile doc/Makefile])

AC_OUTPUT
