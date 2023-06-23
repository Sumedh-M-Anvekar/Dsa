import java.util.Scanner;

public class benz {
   public static void main(String[] args) {
       int c=1;
    Scanner sc = new Scanner(System.in);
   int n,i,j;
   System.out.println("enter the number of lines to be printed")
    n=sc.nextInt();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            System.out.print("*");
            
            
        }
        System.out.print(c++);
        System.out.println();
    }
   }
}
