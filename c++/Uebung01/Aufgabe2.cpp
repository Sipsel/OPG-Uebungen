#include <iostream>
#include <cstring>

using namespace std;
void ausgabe(char *, char);

int main()
{

    ausgabe("Ab in den Urlaub - Ab in den Sonnenschein",'!');
    return 0;
}
void ausgabe(char *c, char k)
{
    cout << k << k << k << k;
    for (int i = 0; i < strlen(c); i++)
    {
      cout << k;
    }
    cout << "\n" << k << " " << c << " " << k << "\n";
    cout << k << k << k << k;
    for (int i = 0; i < strlen(c); i++)
    {
      cout << k;
    }

}
