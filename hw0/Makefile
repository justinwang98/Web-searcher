# Copyright ©2019 Hal Perkins.  All rights reserved.  Permission is
# hereby granted to students registered for University of Washington
# CSE 333 for use solely during Winter Quarter 2019 for purposes of
# the course.  No other use, copying, distribution, or modification
# is permitted without prior written consent. Copyrights for
# third-party components of this work must be honored.  Instructors
# interested in reusing these course materials should contact the
# author.

CC = gcc
CFLAGS += -g -Wall -O0
OBJS = hello_world.o

# compile everything; this is the default rule that fires if a user
# just types "make" in the same directory as this Makefile.
all: hello_world FORCE

hello_world: $(OBJS) FORCE
	$(CC) $(CFLAGS) -o hello_world $(OBJS)

%.o: %.c FORCE
	$(CC) $(CFLAGS) -c -std=c11 $<

clean: FORCE
	/bin/rm -f *.o *~ hello_world

FORCE:
