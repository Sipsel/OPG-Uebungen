#include <iostream>
#include <cstring>

using namespace std;
void ausgabe(char);
void ausgabe(char *);

int main()
{

    ausgabe("Ab in den Urlaub - Ab in den Sonnenschein");
    return 0;
}
void ausgabe(char c)
{
    cout << "*****" << "\n";
    cout << "* " << c << " *" << "\n";
    cout << "*****";
}
void ausgabe(char *c)
{
    cout << "****";
    for (int i = 0; i < strlen(c); i++)
    {
      cout << "*";
    }
    cout << "\n" << "* " << c << " *" << "\n";
    cout << "****";
    for (int i = 0; i < strlen(c); i++)
    {
      cout << "*";
    }
