#include<stdio.h>
int main()
{
    int F;
    float c;
    scanf("%d",&F);
    c=(float)(F-32)*5/9;
    printf("%.2f",c);
    return 0;
}