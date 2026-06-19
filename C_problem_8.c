#include<stdio.h>
int main()
{
    char a[50];
    int i, valid=1;
    printf("Enter the Number : ");
    scanf("%s",&a);
    i=0;
    while(a[i]!='\0')
    {
    if(!(a[i]>='0' && a[i]<='9') )
    {
    valid=0;
    break;
    }
    i++;
    }
    if(valid)
    {
    printf("valid");
    }
    else
    {
    printf("Not valid");
    }
}