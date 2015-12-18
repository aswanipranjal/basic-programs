import java.io.*;
import java.util.Scanner;

class Student
{
	int rollNo;
	String Name;
	void getdata(int a, String name)
	{
		this.rollNo = a;
		this.Name = name;
		System.out.println("Student name" + Name);
		System.out.println("Roll Number" + rollNo);

	}
}

class Test extends Student
{
	float term1,term2;
	void testmarks(float t1,float t2)
	{
		this.term1 = t1;
		this.term2 = t2;
		System.out.println("Term 1 marks: " + term1);
		System.out.println("Term 2 marks: " + term2);
	}
}

interface Sports
{
	public void Sportname(String name);
}

class FinalStudent extends Student implements Sports
{
	public void Sportname(String name)
	{
		System.out.println(name + " plays FootBall ");
	}
	public static void main(String args[])
	{
		int a;
		String Studentname;
		Float marks1, marks2;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter student name: ");
		Studentname = sc.next();
		System.out.println("Enter student Rollno: ");
		a = sc.nextInt();
		System.out.println("Enter Term 1 Marks: ");
		marks1 = sc.nextFloat();
		System.out.println("Enter Term 2 Marks: ");
		marks2 = sc.nextFloat();
		Student s = new Student();
		s.getdata(a,Studentname);
		Test m = new Test();
		m.testmarks(marks1,marks2);
		FinalStudent fs = new FinalStudent();
		fs.Sportname(Studentname);
	}	

}
