#include <stdio.h>
int main()
{
    int x = 24, y = 14;
    printf("Before swapping: x=%d y=%d\n",x,y); 
 
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 38
    y = x - y; // y becomes 24
    x = x - y; // x becomes 14
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
