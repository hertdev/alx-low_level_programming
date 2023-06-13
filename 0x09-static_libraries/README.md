# 0x09-static_libraries
Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. <br>

This project is my second month ALX project created on 13th June, 2023 at my hostel sipping fearless drink for efficient energy boost to tackle the project.<br>
## Resources
[Static & Shared Library](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)<br>
[Video guide](https://www.youtube.com/watch?v=eW5he5uFBNM)<br>

## Question and Guide
1. Create the static library libmy.a containing all the functions listed.<br>
Solution: <br>
- First create main.h containing all the listed functions prototype
- Create all .c files listed as .o containing the functions in your main.h protype
- gcc -c *.c - This convert all .c to assembly code .o
- ar rc libmy.a *.o - This create libmy.a library from the assembly codes .o
- ranlib libmy.a - This command index libmy.a
- ar -t libmy.a - List all files libmy is created from i.e. .o files
- Test your library by creating main.c containing the test main function given in the project
- gcc -std=gnu89 main.c -L. -lmy -o quote - compiles the code
- ./quote - test the code output matching the given one
Hurray git add, commit, and push<br><br>

2. Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.<br>
Solution:
- Create script named create_static_lib.sh containing the following:
#!/bin/bash
gcc -c *.c <br>
ar rc liball.a *.o <br> 
ranlib liball.a <br>
- chmod a+x create_static_lib.sh
- ./create_static_lib.sh
Hurray git add, commit, and push
