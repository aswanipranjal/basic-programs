import java.io.*;
import java.util.Scanner;
//import java.Math;

public class Bubble{
	public static void main(String[] args)
	{
	 	int[] a = new int[10];
		int i, n, j, temp;
		System.out.println("Enter the no of elements: ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
    	for (i = 0; i < n; i++)
    	{
        	System.out.println("Please enter number");
        	a[i] = sc.nextInt();
    	}
		for (j=0;j<n-1;j++)
		{
			for(i = 0; i < n-j-1; i++)
			{
				if(a[i]>a[i+1]&& i+1 != n)
				{
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;
				}
			}
		}
   		for (i = 0; i < n; i++)
    	{
        	System.out.println(a[i] + " is at position " + (i+1));
    	}
	}
}