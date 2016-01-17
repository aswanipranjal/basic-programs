import java.io.*;
import java.util.*;

public class TryCatch
{
	public static void main(String args[])
	{
		float c = 0;
		try
		{
			int x = Integer.parseInt(args[0]);
			int y = Integer.parseInt(args[1]);
			try
			{
				c = x/y;
			}
			catch(ArithmeticException e2)
			{
				System.out.println("Error, Division by Zero!");
			}
			
		}
		catch(NumberFormatException e1)
		{
			System.out.println("Invalid Input");
		}
		
		finally
		{
			System.out.println("Result: "+ c);
		}
	}
}