#include <stdio.h>
int main() 
 {
       float CM, M, P, C, E;
       printf("Enter your marks in maths, physics, chemistry and english: ");
       scanf("%f%f%f%f", &M, &P, &C, &E);
       CM=M/2+P/2+C/2+E;
       printf("the cutoff marks is %.6f",CM);

   return 0;












}