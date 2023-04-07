#!/bin/bash

gcc -c *.c

# compile our library code into an object file using -c with GCC compiler.

ar -rc liball.a *.o

# ar for 'archiver' used to create static libraries, modify object files in the static library, list the names of object files in the library.
# rc: The r flag tells ar to replace older object files in the library with the new object files. The c flag tells it to create the library if it doesn't already exist.
# so the command ar -rc liball.a *.o creates a static library named liball.a and puts copies of all object files in it.

ranlib liball.a

# The ranlib command is typically used in conjunction with the ar command, which is used to create and manipulate library archives. After creating a library archive using the ar command, you can use ranlib to generate an index for the archive.
