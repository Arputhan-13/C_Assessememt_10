#include<stdio.h>
int main()
{
    char a[100];
    int b=0, i=0;
    printf("Enter the string : ");
    scanf(" %s",&a);
    while(a[i]!=0)
    {
    b=b*10+(a[i]-'0');
    i++;
    }
    printf("The Integer is: %d",b);
    return 0;
}