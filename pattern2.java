import java.util.Scanner;
public class pattern2 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
   int n,i,j,k;
    n=sc.nextInt();
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>=1;k--)
        {
            System.out.print(" ");
        }
        for(j=1;j<=i;j++)
        {
            System.out.print("* ");
        }
        System.out.println();
    }
    }
}
