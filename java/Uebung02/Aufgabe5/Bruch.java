import java.io.*;
import java.util.*;
public class Bruch
{
    private int z,n;
    
    
    public Bruch()
    {
        int z = 0, n = 1;
        System.out.println("Hier meldet sich der Konstruktor");
    }
    public Bruch (int zaehler, int nenner)
    {
        z = zaehler;
        n = nenner;
        if (n == 0)
        {
            n = 1;
            z = 0;
        }
        kuerzen();
        System.out.println("Hier meldet sich der Konstruktor");
    }
    public Bruch addiere(Bruch q1)
    {
        Bruch q = new Bruch();
        q.z = z * q1.n +  n * q1.z;
        q.n = n * q1.n;
        return (q);
    }
    public Bruch subtrahiere(Bruch q1)
    {
        Bruch q = new Bruch();
        q.z = z * q1.n - n * q1.z;
        q.n = n * q1.n;
        return (q);
    }
    public Bruch multipliziere(Bruch q1)
    {
        Bruch q = new Bruch();
        q.z = z * q1.z;
        q.n = n * q1.n;
        return(q);
    }
    public Bruch dividiere(Bruch q1)
    {
        Bruch q = new Bruch();
        q.z = z * q1.n;
        q.n = n * q1.z;
        return(q);
    }
    public int GGT(int a,int b)
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
    public void kuerzen()
    {
        int ggt;
        ggt = GGT(z,n);

  if (ggt>1)
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
public void eingabe()
{
    Scanner sc = new Scanner(System.in);
    System.out.println("Gebe den Zaehler ein");
    z = sc.nextInt();
    System.out.println("Geben den Nenner ein");
    n = sc.nextInt();
    
    if (n == 0)
    {
        do 
        {
            System.out.println("Nenner darf nicht 0 sein");
            n = sc.nextInt();
        }
        while (n == 0);
    }
    
    
}
    public void ausgabe()
    {
        kuerzen();
        System.out.println(z+"/"+n);
    }
    
}
