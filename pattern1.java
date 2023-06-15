import java.util.Scanner;
public class pattern1 {
   public static void main(String[] args) {
       int c=1;
    Scanner sc = new Scanner(System.in);
   int n,i,j;
    n=sc.nextInt();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            System.out.print("*");
            
            
        }
        System.out.print(c++);//to count number of characters printed in a line
        System.out.println();
    }
   }
}
