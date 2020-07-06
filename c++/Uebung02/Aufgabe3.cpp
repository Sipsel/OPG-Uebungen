#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Anschrift
{
   private:
      char strasse[120];
      char hausnr[20];
      char plz[10];
      char ort[120];
      char telnr[30];

   public:
      Anschrift();
      Anschrift(char const*,char const*,char const*,char const* = "51465",char const * = "Bergisch Gladbach");
                
      const char * getStrasse() const;
      const char * getHausnr() const;
      const char * getPlz() const;
      const char * getOrt() const;
      const char * getTelnr() const;
      

};
Anschrift::Anschrift()
{
    strcpy(strasse,"XXX");
    strcpy(hausnr,"XXX");
    strcpy(plz,"XXX");
    strcpy(ort,"XXX");
    strcpy(telnr,"XXX");
}
Anschrift::Anschrift(char const* a, char const * b, char const * c, char const * d, char const* e)
{
    strcpy(strasse, a);
    strcpy(hausnr,b);
    strcpy(plz,d);
    strcpy(ort,e);
    strcpy(telnr,c);
}
const char * Anschrift::getStrasse() const
{
    return strasse;
}
const char * Anschrift::getHausnr() const
{
    return hausnr;
}
const char * Anschrift::getPlz() const
{
    return plz;
}
const char * Anschrift::getOrt() const
{
    return ort;
}
const char * Anschrift::getTelnr() const
{
    return telnr;
}
class Student  
{
   private:
      char matnr[8];       // 7-stellige Matrikelnummer 
      char nachname[80];   // Nachname des Studierenden
      char vorname[80];    // Vorname des Studierenden
      Anschrift semesterAdresse; // Anschrift des Studierenden waehrend der Hochschulphase
      Anschrift privatAdresse;   // Private Anschrift des Studierenden 
 
   public:
      Student(const char *, const char *, const char *, Anschrift, Anschrift);
      const Anschrift getSemesterAdresse() const;

};
Student::Student(const char* a, const char * b, const char * c, Anschrift s, Anschrift p)
{
    strcpy(matnr,a);
    strcpy(nachname, b);
    strcpy(vorname, c);
    semesterAdresse = s;  
    privatAdresse = p;
}
const Anschrift Student::getSemesterAdresse() const
{
    return semesterAdresse;
}

int main()
{
    Anschrift Troeper("Straßenname 1","Hausnummer 1","015752271837","PLZ 1","Ort 1"),FdotKoll("Straßenname 2","Hausnummer 2","ROFL");
    Student ipsiklorenz("6666666","Klorenz","Ipsi",FdotKoll,Troeper);
    cout << ipsiklorenz.getSemesterAdresse().getHausnr();
    
}
