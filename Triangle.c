#include <stdio.h>

int main()
{

    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b<=c || a+c<=b || b+c<=a)
    {
        float area = ((a+b)/2)*c;
        printf("Area = %.1f\n",area);
    }
    else
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }

    return 0;
}
