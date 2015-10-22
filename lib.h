/* 
 * 
 * lib.h
 * -----
 * 
 * Author: Michael Dickens <mdickens93@gmail.com>
 * Created: 2015-10-22
 * 
 * Library for helping our reinforcement learners be as happy as possible.
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * An interface for measuring how happy a reinforcement learner is.
 */
const char *how_happy_am_I(int happiness);
