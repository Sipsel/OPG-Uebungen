
#include <iostream>

using namespace std;
void tauschen(int&,int&);
void tauschen(float&,float&);
void tauschen(float[],float[],int);
int main()
{

float a[10] = { 2.0, 3.3, 4.5 };
     float b[10] = { 3.5, 4.5, 1.2, 5.7, 8.7, 1.2, 3.3, 4.4, 2.3, 0.0 };
tauschen(a,b,1);
cout<<a[1]<<b[1];
    return 0;
}
void tauschen (int& a, int &b)
{
    int help = a;
    a = b;
    b = help;
}
void tauschen (float& a, float &b)
{
    float help = a;
    a = b;
    b = help;
}
void tauschen(float a[], float  b[], int k)
{
    float help = a[k];
    a[k] = b[k];
    b[k] = help;
}
