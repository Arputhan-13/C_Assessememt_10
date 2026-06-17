#include<stdio.h>
int main()
{
    int a;
    char str[100];
    printf("Enter a number : ");
    scanf("%d", &a);
    sprintf(str, "%d", a);
    printf("The string is : %s", str);
    return 0;
}