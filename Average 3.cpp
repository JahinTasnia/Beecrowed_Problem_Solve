#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,e ;
    cin >> a >> b >> c >> d;
    float avg = (a*2 + b*3 + c*4 + d*1)/(2+3+4+1) ;
    printf("Media: %.1f\n",avg);

    if(avg>=7.0)
    {
        cout << "Aluno aprovado." << endl ;
    }
    else if(avg<5.0)
    {
        cout << "Aluno reprovado." << endl ;
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        cout << "Aluno em exame." << endl ;

        cin >> e;
        printf("Nota do exame: %.1f\n",e);
        float f = (avg+e)/2;
        if(f>=5.0)
        {
            cout << "Aluno aprovado." << endl ;
        }
        else if(f<=4.9)
        {
            cout << "Aluno reprovado." << endl ;
        }
        printf("Media final: %.1f\n",f);
    }

    return 0;
}
