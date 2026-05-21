#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n" , i, argv[i]);
    }
    return 0;
}


### Discussion
* What is the first argument passed into the program?
The first arguement is arg_practice.c - the name of the file
* Why would having program arguments be useful for programs?
If we have program arguements then we dont have to recompile the program everytime.
