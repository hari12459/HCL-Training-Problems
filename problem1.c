// *Write a program to print “First c Program” without using printf
#include<stdio.h>
int main(){
    char word[]="First c Program";

    for(int i=0;i<(sizeof(word)/sizeof(word[0]));i++)
    putchar(word[i]);




    return 0;
}