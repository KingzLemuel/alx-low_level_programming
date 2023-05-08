#include <stdio.h>

 int sum (int a, int b, ...)
 {
     return (a + b); 
 }

int main() 
{
    int y;
    y = sum(2, 3);
    printf("%d\n", y);
    return 0; 
}
