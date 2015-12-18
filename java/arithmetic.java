import java.util.Scanner;
import java.io.*;

public class arithmetic
{
	public static void main(String args[])
	{
		int x,y;
		String c;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter first number: ");
		x = sc.nextInt();
		System.out.println("Enter second number: ");		
		y = sc.nextInt();
		System.out.println("Enter  operator symbol: ");
		c = sc.next();
		switch(c)
		{
			case "+":
			{	
				System.out.println("Addition is: " + (x+y));
				break;
			}
			case "-":
			{	
				System.out.println("Subtraction is: " + (x-y));
				break;
			}
			case "*":
			{	
				System.out.println("Multiplication  is: " + (x*y));
				break;
			}
			case "/":
			{	
				System.out.println("Division is: " + (x/y));
				break;
			}
			case "%":
			{	
				System.out.println("Modulus is: " + (x%y));
				break;
			}
			default:
			{
				System.out.println("Enter a valid operator symbol!");
			}
		}
	}
}
		
		
