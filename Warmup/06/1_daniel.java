class Dozent
{
    public String name, kuerzel;
    Dozent()
    {
        this.name = "Standart";
        this.kuerzel = "STD";
    }
    Dozent(String a, String b)
    {
        this.name = a;
        this.kuerzel = b;
    }
}
class Vorlesung
{
    public String name,kuerzel,s_gruppe;
    public Dozent doz;
    Vorlesung()
    {
        this.name = "standart-name";
        this.kuerzel = "STD";
        this.doz = new Dozent();
        this.s_gruppe = "BFWX000a";
    }
    Vorlesung(String p_name,String p_kuerzel,Dozent p_d,String p_s_gruppe)
    {
        this.name = p_name;
        this.kuerzel = p_kuerzel;
        this.doz = p_d;
        this.s_gruppe = p_s_gruppe;
    }
     
    public String toString()
    {
        return name;
    }
}
public class HelloWorld{
    
     public static void main(String []args){
        Dozent doz = new Dozent("Seifert","Set");
        Vorlesung vorl = new Vorlesung("Statistik","STA",doz,"bfwx120a");
        System.out.println("Die Vorlesung: " + vorl);
     }
}
