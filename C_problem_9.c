#include<stdio.h>
int main()
{
    char a[50];
    int i = 0;
    printf("Enter the Number : ");
    scanf("%s", a);
    while(a[i] == '0')
    {
    i++;
    }
    if(a[i] == '\0')
    {
    printf("0");
    }
    else
    {
    printf("%s", &a[i]);
    }
    return 0;
}