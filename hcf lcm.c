#include <stdio.h>
 int main()
{
     int a, b , i, hcf, lcm ;
      printf(" enter two positive interger to find hcf and lcm : - ");
       scanf("%d %d", &a,&b);
        for ( i=1; i<a&& i< b; i++)
        {
             if ( a%i==0&& b%i==0){

                hcf= i;
             }
        }
       lcm= (a*b)/hcf;
       printf("hcf of two no  a and b = %d \n lcm of two no a and b=%d", hcf,lcm);

    return 0;

}
