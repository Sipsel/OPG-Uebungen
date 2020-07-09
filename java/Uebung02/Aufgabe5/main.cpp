import java.io.*;
import java.util.*;
public class Main
{
   // ...

   public static void main(String[] args)
   {
      Bruch b1 = new Bruch(124,16);
      Bruch b2 = new Bruch(248,32);
      Bruch b3 = new Bruch();
      
      b3.eingabe();
      
      System.out.print("b3: ");
      b3.ausgabe();

      System.out.print("b1: ");
      b1.ausgabe();
      System.out.print("b2: ");
      b2.ausgabe();

      System.out.println("Addition ergibt: ");
      b1.addiere(b2).ausgabe();
      System.out.println("Subtraktion ergibt: ");
      b1.subtrahiere(b2).ausgabe();
      
   }

}
