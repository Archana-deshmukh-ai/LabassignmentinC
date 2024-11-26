#include <stdio.h>
int main()    
 {
      int a, b, c, maximum;
      printf("Enter any three numbers: ");
      scanf("%d%d%d",&a, &b, &c);
      if(a>b&&a>c) {
        maximum=a;
        }
        else if(b>c&&b>a) {
          maximum=b;
          }
          else {
             maximum=c;
             }
      printf("\nMaximum=%d\n", maximum);
      return 0;

}