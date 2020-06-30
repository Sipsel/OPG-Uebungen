#include <iostream>
void minmax(int[],int,int&,int&);
int main()
{
    using namespace std;

         int data[] = { 4, 8, 23, -17, 2, -6 };
     int anzahl = sizeof(data) / sizeof(data[0]);
     int min = 0, max = 0; 
     
     minmax(data, anzahl, min, max);
     cout<<min<< "\n"<<max;
}
void minmax(int data[],int anzahl, int& min, int& max)
{
    max = data[0];
    min = data[0];
    
    for (int i = 1; i < anzahl; i++)
    {
        if (max < data[i])
        {
            max = data[i];
        }
        else if (min > data[i])
        {
            min = data[i];
        }
    }
}
