#include<stdio.h>

int main()
{
int phy, chem, mat, bio, eng;
float per;
printf("Enter marks of five subjects: ");
scanf("%d%d%d%d%d",&phy,&chem,&mat,&bio,&eng);
per =(phy+chem+mat+bio+eng)|5 ;
printf("percentage =%.2f\n");
return 0;
}