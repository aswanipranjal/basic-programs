import java.io.*;
import java.util.Scanner;
import java.util.Vector;
// wap to create vector objects with student names.
// program should perform the following operations: 
// 1)add student names,  
// 2)remove student if exists, if nor display the apt message
// 3) display all content 
class vectorSearch
{
	public static void main(String args[])
	{
		int n, i, indexof;
		Scanner sc = new Scanner(System.in);
		String s = new String();
		Vector<String> student = new Vector<String>();
		System.out.println("How many students?");
		n = sc.nextInt();
		for(i=0;i<n;i++)
		{
			s = sc.next();
			student.addElement(s);
		}
		System.out.println(student);
		System.out.println("Enter the name you want to search: ");
		s = sc.next();
		student.ensureCapacity(n);
		indexof = student.indexOf(s);
		if (indexof != -1)
		{
			System.out.println(s + "found at: "+ (indexof+1));
		}
		else
		{
			System.out.println("Element not present");
		}
		System.out.println("Enter the name you want to remove: ");
		s = sc.next();
		System.out.println("Removed: " + student.remove(s));
		System.out.println(student);
	}
}