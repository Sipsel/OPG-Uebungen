// ------------------------------------------------------------------------
// Dateiname:   brueche.cpp
// Aufgabe:     Elementare Arbeit mit Bruchen zur Erlaeuterung des
//              Klassenbegriffs.
// ------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
using namespace std;

class Bruch
{
   private:
      int z, n;            // Zaehler und Nenner

   public:
      Bruch();             // Default-Konstruktor
      ~Bruch();
      Bruch(int,int);      // Konstruktor
      Bruch operator+(const Bruch &);
      Bruch operator-(const Bruch &);
      Bruch operator*(const Bruch &);
      Bruch operator/(const Bruch &);
      friend ostream& operator<< (ostream &out, const Bruch &bruch);
      void eingabe();
      int GGT(int,int);
      void kuerzen(int&, int&);
      
};

// Implementation der Klassen-Methoden (Mitgliedsfunktionen)
// ---------------------------------------------------------

Bruch::Bruch()             // Default-Konstruktor
{
   z=0;
   n=1;
//   cout << "I bims 1 Konstruktor\n";
} // end Bruch::Bruch()
Bruch::~Bruch()
{
 //   cout << "I bims 1 Destruktor\n";
}
Bruch::Bruch(int zaehler, int nenner) // weiterer Konstruktor
{
   // Minimale Notfallbehandlung bei nenner==0 ! 
   if (nenner!=0)
   {
      z=zaehler;    // ausfuehrlich:  this->z=zaehler;
      n=nenner;     // this ist ein Zeiger auf das aktuelle Objekt
      int &r = z;
   int &s = n;
   kuerzen(r,s);
   }
   else
   {
      z=0;
      n=1;
   }
//   cout << "I bims 1 Konstruktor\n";
} // end Bruch::Bruch(int,int)

Bruch Bruch::operator+(const Bruch& q1)
{
   Bruch q;
   q.z = z*q1.n + q1.z*n;
   q.n = n * q1.n;
   kuerzen(q.z,q.n);
   return(q);
} // end Bruch::addiere 
Bruch Bruch::operator-(const Bruch& q1)
{
    Bruch q;
    q.n = n * q1.n;
    q.z = z * q1.n - n * q1.z;
    int &r = q.z;
    int &s = q.n;
    kuerzen(r,s);
    return(q);
    
}
Bruch Bruch::operator*(const Bruch& q1)
{
    Bruch q;
    q.n = n * q1.n;
    q.z = z * q1.z;
    int &r = q.z;
    int &s = q.n;
    kuerzen(r,s);
    return (q);
}
Bruch Bruch::operator/(const Bruch& q1)
{
    Bruch q;
    q.n = n * q1.z;
    q.z = z * q1.n;
    int &r = q.z;
    int &s = q.n;
    kuerzen(r,s);
    return (q);
}
ostream& operator<< (ostream &out, const Bruch &bruch)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << bruch.z << "/" << bruch.n << " "; // actual output done here
 
    return out; // return std::ostream so we can chain calls to operator<<
}
void Bruch::eingabe()
{
char k;
cout << "Bitte geben Sie den Bruch wiefolgt ein:\nz/n\n";
   do{
   cin >> z >> k >> n;
   
   if (k != '/')
   {
       cout << "Bitte benutzen Sie dieses Zeichen zum Trennen des Bruches: /\n";
   }
   }
   while(k != '/');
  
   
   if (n == 0)
   {
       cout << "Der Nenner darf nicht 0 sein!\n ";
       do {
           cin >> n;
       }
       while(n == 0);
   }
   int &r = z;
   int &s = n;
   kuerzen(r,s);
   
        
}
int Bruch::GGT(int a,int b)
{
    if (a==0 || b==0)
     return 1;

  if (a<0)
     a *= (-1);
  if (b<0)
     b *= (-1);

  while (a!=b)
  {
     if (a>b)
        a-=b;
     else // if (b>a)
        b-=a;
  }
  return a;
}
void Bruch::kuerzen(int& z, int& n)
{
     int ggt;

  if ((ggt=GGT(z,n))>1)
  {
     z/=ggt;
     n/=ggt;
  }

  if (n<0)  // Nenner stets positiv
  {
     z = -z;
     n = -n;
  }

}
// ---------------------------------------------------------

int main() // synonym fuer int main(void) 
{
   Bruch q1(16,7), q2(5,13), q3,q4;
 // q4.eingabe();// q3 ist defaultmaessig 0/1
 //  q4.ausgabe();
 //  cout << "\n"; // Nur für einen anschaulichen Zweck
   // Die Anweisung q1.z=1; ist nun illegal, da z ein privates
   // Datenelement des Objektes q1 ist!

   // Addieren von q1 und q2 in die Variable q3     
   q3=q1 * q2;

   // Ausgabe der Summe 
   cout << q1 << "* " << q2 << "= " << q3;

   return EXIT_SUCCESS;

} // end main 

// end of file brueche.cpp 