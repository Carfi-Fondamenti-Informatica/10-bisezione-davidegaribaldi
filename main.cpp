#include <iostream>
#include <cmath>
using namespace std;

bool controllo(float a)
{
    double fa;
    fa=pow(a,2)*cos(a)+1;
    if(fa==0) {
        return true;
    }
    return false;
}
bool funz(float a,float b)
{
double fa,fb;
fa=pow(a,2)*cos(a)+1;
fb=pow(b,2)*cos(b)+1;
if((fa*fb)>=0)
    {
    return true;
    }
return false;
}
int main() {
    float a,b,x;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }while(funz(a,b));
while(true) {
    x = (a + b) / 2;
    if (controllo(x)) {
        cout << x << endl;
        cout << pow(x, 2) * cos(x) + 1;
        return 0;
    }
    else
    {
    if(funz(a,x))
    {
     a=x;
    }
    else
    {
    b=x;
    }
    if(abs((b-a)/2)<1*pow(M_E,-6))
    {
        cout << x << endl;
        cout << pow(x,2) * cos(x) + 1;
        return 0;
    }
    }
}

}
