/*
 * Copyright ©2019 Hal Perkins.  All rights reserved.  Permission is
 * hereby granted to students registered for University of Washington
 * CSE 333 for use solely during Winter Quarter 2019 for purposes of
 * the course.  No other use, copying, distribution, or modification
 * is permitted without prior written consent. Copyrights for
 * third-party components of this work must be honored.  Instructors
 * interested in reusing these course materials should contact the
 * author.
 */

#include <cstdlib>   // for EXIT_SUCCESS, EXIT_FAILURE, free().
#include <iostream>  // for std::cout, std::cerr, etc.

#include "./FileIndexChecker.h"

using namespace std;
using namespace hw3;

static void Usage(char *progname) {
  cerr << "Usage: " << progname << " indexfile" << std::endl;
  exit(EXIT_FAILURE);
}

int main(int argc, char **argv) {
  if (argc < 2) Usage(argv[0]);

  // Checking starts here.
  FileIndexChecker fic(argv[1]);
  return EXIT_SUCCESS;
}
