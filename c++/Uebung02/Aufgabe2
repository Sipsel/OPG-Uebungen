#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class PhoneNumber
{
    private:
    char LVW[4];
    char NVW[5];
    char TNR[9];
    public:
    PhoneNumber();
    PhoneNumber(char *,char * , char *);
    const char * getLaendervorwahl() const;
    const char * getNetzvorwahl() const;
    void ausgabe(int) const;
    void equals(PhoneNumber) const;
};
PhoneNumber::PhoneNumber()
{
    strcpy(LVW,"+49");
    strcpy(NVW,"0157");
    strcpy(TNR,"52271837");
}
PhoneNumber::PhoneNumber(char * a, char * b, char * c)
{
    strcpy(LVW,a);
    strcpy(NVW,b);
    strcpy(TNR,c);
}
const char * PhoneNumber::getLaendervorwahl() const
{
    return LVW;
}
const char * PhoneNumber::getNetzvorwahl() const
{
    return NVW;
}
void PhoneNumber::ausgabe(int b) const
{
    if ( b == 0)
    {
        cout << NVW << TNR << "\n";
        return;
    }
    else if ( b == 1)
    {
    cout << LVW << NVW[1] << NVW [2] << NVW[3] << TNR << "\n";
    }
}
void PhoneNumber::equals(PhoneNumber p) const
{
    for (int i = 0; i < 4; i++)
    {
        if (p.LVW[i] != LVW [i])
        {
            cout << "Nicht gleich";
            return;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (p.NVW[i] != NVW [i])
        {
            cout << "Nicht gleich";
            return;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (p.TNR[i] != TNR [i])
        {
            cout << "Nicht gleich";
            return;
        }
    }
    cout << "gleich";
}

int main()
{
    PhoneNumber Test;
    PhoneNumber Test2("+49","0157","52271836");
    Test.ausgabe(1);
    Test2.ausgabe(0);
    cout << Test.getLaendervorwahl() << "\n" << Test.getNetzvorwahl() << "\n";
    Test.equals(Test2);
}



