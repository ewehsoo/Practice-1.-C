#include <stdio.h>

int main() {
 int a, b, c;
  
 printf( "Введите 3 числа = " );
 scanf( "%d %d %d",&a,&b,&c );
  
 int result = a * b * c;
  
 int sign = ( result > 0 ) - ( result < 0 );
  
 printf( "%d\n", sign );

 return 0;
}
