#include <stdio.h>

int main()
{
    int a , b;
    scanf ("%d",&a);
    scanf ("%d",&b);
    int c;
    
    if(a < b)
    { 
        printf("a<b");
    }
    else if(a > b)
    { 
        printf("a>b");
    }
    else
    {
        printf("a=b");
    }
    

    return 0;
}
