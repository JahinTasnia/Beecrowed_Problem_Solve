#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    switch(a)
    {
    case 1:
        printf("Total: R$ %.2lf\n", b*4.00);
        break;
    case 2:
        printf("Total: R$ %.2lf\n", b*4.50);
        break;
    case 3:
        printf("Total: R$ %.2lf\n", b*5.00);
        break;
    case 4:
        printf("Total: R$ %.2lf\n", b*2.00);
        break;
    default:
        printf("Total: R$ %.2lf\n", b*1.50);
    }
    return 0;
}
