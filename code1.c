#include <stdio.h>
#include <string.h>

void main()
{
    char user[30]="cheethan";
    char pass[30]="1234";

    char user1[30],pass1[30];

    printf("Please enter the user name: ");
    gets(user1);
    printf("Please enter the password: ");
    gets(pass1);

    int i=strcmp(user,user1);
    int j=strcmp(pass,pass1);

    if(((i==0) && (j==0)))
    printf("U may access the content");
    else
    printf("Ivalid password (or) username");

 }