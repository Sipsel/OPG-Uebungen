
/* C++ - Klasse Person */
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Person
{
   private:
      int PersonNr;
      char Nachname[50];
      char Vorname[30];
      float Gehalt;
   public:
      Person(); // Default-Konstruktor
      Person(int, char*, char*, float); // Weiterer Konstruktor
      void setPersonNr(int);
      void setNachname(char*);
      void setVorname(char*);
      void setGehalt(float);
      void ausgabe();
};
Person::Person()

{
 PersonNr = 0;
 strcpy(Nachname, "Eintrag");
 strcpy(Vorname,"Kein");
 Gehalt = 0.0;
}
Person::Person(int a, char* b, char* c,float d)
{
    PersonNr = a;
    strcpy(Nachname, b);
    strcpy(Vorname, c);
    Gehalt = d;
}
void Person::setPersonNr(int a)
{
    PersonNr = a;
}
void Person::setNachname(char * e)
{
    strcpy(Nachname,e);
}     
void Person::setVorname(char * f)
{
    strcpy(Vorname,f);
}   
void Person::setGehalt(float d)
{
    Gehalt = d;
}   
void Person::ausgabe()
{
    cout << "Nr =" << PersonNr << "\nNachname: " << Nachname << "\nVorname: " << Vorname << "\nGehalt: " << Gehalt;
}
int main()
{
   Person person1(111,"Meier","Alfons",999.99), person2, person3;
   person2.setNachname("Kaiser");
   person2.setVorname("Anna");
   person2.setPersonNr(112);
   person2.setGehalt(1300.45);
   cout << "Person 1: ";
   person1.ausgabe();
   cout << "Person 2: ";
   person2.ausgabe();
   cout << "Person 3: ";
   person3.ausgabe();
   return EXIT_SUCCESS;

} // end main()
// end of file Person.cpp