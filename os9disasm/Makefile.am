# Makefile for os9disasm

#include ../Makefile.rules
SUBDIRS=

if BUILD_DOCS
SUBDIRS += doc
endif

##EXTRA_DIST = doc/html/*.html doc/README doc/*.xml doc/Makefile doc/html/images/*

AM_LDFLAGS	=-L../lib

AM_CFLAGS	= -g -Wall

bin_PROGRAMS = os9disasm
os9disasm_SOURCES = os9disasm.c cmdfile.c dprint.c lbltree.c progdis.c\
		rof.c util_dis.c amodes.h odis.h structures.h dtble.h proto.h
