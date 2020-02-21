
//Jaime Ulloa
//CSC139
//Spring 2020

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    system("ls"); //list the current directory
    system("pwd"); //prints working directory; 
    system("mkdir mine");
    system("pwd");
    system("ls");
    system("cd mine");
    system("pwd");
    system("ls");
    system("cd ..");
    system("ls");
    return 0;
}
