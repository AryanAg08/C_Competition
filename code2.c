#include <stdio.h>
#include <string.h>

 struct student
{
    char name[100];
    char eroll[100];
    char branch[100];
    char batch[100];
    char dor[20];
}s1;
int main(){
    printf("Enter your name: ");
    scanf("%s",s1.name);
    printf("Enter your ENROLLMENT NUMBER: ");
    scanf("%s",s1.eroll);    
    printf("Enter your BRANCH: ");
    scanf("%s",s1.branch);
    printf("Enter your BATCH: ");
    scanf("%s",s1.batch);
    printf("Enter your DOR: ");
    scanf("%s",s1.dor);

    printf("%s\n%s\n%s\n%s\n%s\n",s1.name,s1.eroll,s1.branch,s1.batch,s1.dor);

}