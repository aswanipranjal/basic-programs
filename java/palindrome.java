import java.io.*;
import java.util.Scanner;

public class palindrome
{
	public static void main(String[] args)
	{
		int i;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter string: ");
		char [] a = sc.next().toCharArray();
		System.out.println("The string in reverse order is: ");
		for(i = a.length-1; i>=0;i--)
			{
				System.out.print(a[i]);
			}
			System.out.print("\n");
	}
}