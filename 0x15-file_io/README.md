FILE I/O -- File Descriptors also written as fd typically have non-negative integer values, with negative values being reserved to indicate  "no value" or "error conditions". 
File  Descriptors are part of the POSIX API, Each unix process (except perhaps daemons) should have three standard POSIX file descriptors,  corresponding to the three standard streams.
1)Standard input (stdin) - file stream - 0
2)Standard output (stdout)- file stream - 1
3)Standard error (stderr) - file stream - 2
