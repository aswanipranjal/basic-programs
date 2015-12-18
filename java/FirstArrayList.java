
import java.io.*;
import java.util.*;

public class FirstArrayList
{
	public static void main(String args[])
	{
		ArrayList a = new ArrayList();
		System.out.println("Initial size: "+ a.size());
		a.add(1);
		a.add(12);
		a.add(123);
		a.add(1234);
		a.add(12345);
		a.add(123456);
		System.out.println("size now: "+a.size());
		System.out.println("Removing the 4th element: ");
		a.remove(3);
		System.out.println("array: " + a);
		a.add(5,1234567);
		System.out.println("array: " + a);
		System.out.println("Reverse of the array:");
		Collections.reverse(a);
		System.out.println(a);
	}
}