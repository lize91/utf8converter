# Makefile.am (test)
#
# Project: utf8converter
# Author: Andrew Heebum Kwak (kh-1143@hanmail.net)
# Date:	2015.07.01
#

bin_PROGRAMS = test
test_SOURCES = LogTrace.h main.cpp
test_CXXFLAGS = -I$(top_srcdir)/include
test_LDADD = $(builddir)/../commonlib/libcommon.la


clean :
	rm -rf *.o test 
