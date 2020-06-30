public class HelloWorld{

     public static void main(String []args){
        System.out.println("Hello World");
        int[] data = { 4, 8, 23, -17, 2, -6 };
    System.out.println("Die kleinste Zahl des Arrays: " + min(data) + "\nDie größte Zahl des Arrays: " + max(data));
     }
     public static int max(int k[])
     {
         int max = k[0];
        for (int i=1; i<k.length; i++)
{
    if (max < k[i])
    {
        max = k[i];
    }
}
return max;
  
     }
      public static int min(int k[])
     {
         int min = k[0];
        for (int i=1; i<k.length; i++)
{
    if (min > k[i])
    {
        min = k[i];
    }
}
return min;
  
     }
}
