## Process this file with automake to produce Makefile.in
##
## Copyright (C) 2002 Carnegie Mellon University
## Written by H�kan L. S. Younes.
##
## Permission is hereby granted to distribute this software for
## non-commercial research purposes, provided that this copyright
## notice is included with any such distribution.

## THIS SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
## EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE
## IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
## PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE
## SOFTWARE IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU
## ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.
##
## $Id: Makefile.am,v 1.3 2002-07-18 22:45:20 lorens Exp $

bin_PROGRAMS = vhpop
vhpop_SOURCES = vhpop.cc bindings.cc domains.cc flaws.cc formulas.cc heuristics.cc orderings.cc parameters.cc plans.cc problems.cc reasons.cc requirements.cc support.cc types.cc pddl.yy tokens.ll bindings.h chain.h debug.h domains.h flaws.h formulas.h heuristics.h mathport.h orderings.h parameters.h plans.h problems.h reasons.h requirements.h support.h types.h
vhpop_LDADD = @LIBOBJS@
MAINTAINERCLEANFILES = pddl.cc tokens.cc
EXTRA_DIST = getopt.c getopt1.c getopt.h ipc3-vhpop examples

YFLAGS = -d