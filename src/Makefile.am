bin_PROGRAMS = sayhello
sayhello_SOURCES = main.cpp libtest.cpp
sayhello_CPPFLAGS = $(AM_CFLAGS) -I$(top_srcdir)/include

lib_LTLIBRARIES = libtest.la
libtest_la_SOURCES = libtest.cpp

libtest_la_CPPFLAGS = -I$(top_srcdir)/include
