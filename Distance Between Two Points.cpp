#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d ;
    cin >> a >> b >> c >> d;
    double x = sqrt(pow((c-a),2)+pow((d-b),2));
    printf("%.4f\n",x);
    return 0;
}
