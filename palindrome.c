#include <stdio.h>
#include <conio.h>

void main()
{

    int n,i,r=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=n;i!=0;i)
    {
        r=r*10;
        r=r+ i%10;
        i=i/10;
    }
    
    if(r==n)
        printf("palindrome");
    else
        printf("Not palindrome");
}

