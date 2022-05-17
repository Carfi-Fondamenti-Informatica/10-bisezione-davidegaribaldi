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
float fa,fb;
fa=pow(a,2)*cos(a)+1;
fb=pow(b,2)*cos(b)+1;
if((fa*fb)<0)
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
    }while(!funz(a,b));
while(true) {
    x = (a + b) / 2;
    if (controllo(x)) {
        cout << x << endl;
        return 0;
    }
    else
    {
    if(funz(a,x))
    {
     b=x;
    }
    else if(funz(x,b))
    {
    a=x;
    }
    if(abs((b-a)/2)<1*pow(M_E,-8))
    {
        cout << x << endl;
        return 0;
    }
    }
}

}
