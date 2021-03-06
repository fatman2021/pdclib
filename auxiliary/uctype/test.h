/* test

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef TEST_H
#define TEST_H TEST_H

#include <stdio.h>

#define NO_TESTDRIVER 0

static int TEST_RESULTS = 0;

#define TESTCASE( x ) if ( x ) {} \
                      else { TEST_RESULTS += 1; printf( "FAILED: " __FILE__ ", line %d - %s\n", __LINE__, #x ); }

#endif
