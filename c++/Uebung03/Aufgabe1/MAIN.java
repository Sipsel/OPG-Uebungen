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
      Bruch q1 = new Bruch(1,3);
      Bruch q2 = new Bruch(2,6);
      if (q1.equals(q2))
{
   System.out.println(q1 + " und " + q2 + " sind gleich.");
}
      System.out.println("b3: " + b3);

      System.out.println("b1: " + b1);
      System.out.println("b2: " + b2);
      System.out.println("Addition ergibt: " +  b1.addiere(b2));
      System.out.println("Subtraktion ergibt: " + b1.subtrahiere(b2) );
      
   }

}
