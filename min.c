#include<stdio.h>
int minimum(int ,int ,int); // declare function protype;


int minimum(int x , int y ,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if(y<x && y<z)
    {
        return y;
    }
    else{
        
        return z;
    }
}






int main()
{
    int a,b,c;
    printf("Enter three numbers to find the smallest\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    // input through user;

    printf("THE smallest number is %d",minimum(a,b,c));
    
}
