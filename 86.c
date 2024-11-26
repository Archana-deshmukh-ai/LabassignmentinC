#include<stdio.h>
#include<string.h>
char string()
{
char str[50];
printf("ENTER A LINE OF TEXT....\n");
scanf("%[^\n]s", str);
return strlen(str);
}
int main()
{
int p=string();
printf("%d",p);
}