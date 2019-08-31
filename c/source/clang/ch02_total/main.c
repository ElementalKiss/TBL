/*
Title: ch02 total
Function: print string
FileName: main.c
Edit Date: 2019.09.01
Editor: elkiss
*/

#include <stdio.h> // header declaration

int main(void) // start main function
{
    printf("1. Hello comment\n");
    printf("Hello world! \n"); // print string

    printf("--------------------\n");
    
    printf("2. PrintfOne\n");
    printf("Hello Everybody\n");
    printf("%d\n", 12345);
    printf("%d %d\n", 10, 20);

    printf("--------------------\n");
    
    printf("3. PrintfTwo\n");
    printf("My age: %d \n", 20);
    printf("%d is my point \n", 100);
    printf("Good \nmorning \neverybody\n");
    
    return 0;
    // end of main function
}