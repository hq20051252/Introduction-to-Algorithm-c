## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" 

AM_CFLAGS =\
	 -Wall\
	 -g

lib_LTLIBRARIES = libalgorithm.la


libalgorithm_la_SOURCES = \
	lib.c

libalgorithm_la_LDFLAGS = 

libalgorithm_la_LIBADD = 

include_HEADERS = \
	algorithm.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libalgorithm-0.1.pc

EXTRA_DIST = \
	libalgorithm-0.1.pc.in
