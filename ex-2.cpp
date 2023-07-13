#include <stdio.h>

int main()
{
    int a , b;
    scanf ("%d",&a);
    scanf ("%d",&b);

    int c;
    
    c= a < b;
    printf("c = %d \n",c);
    
    c= a > b;
    printf("c = %d \n",c);
    
    c= a == b;
    printf("c = %d \n",c);

    return 0;
}
