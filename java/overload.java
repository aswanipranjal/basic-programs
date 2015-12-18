import java.util.Scanner;
import java.io.*;

public class Area
{
	double area(double length,double breadth)
	{
		return length * breadth;
	}
	double area(double radius)
	{
		return 3.141*radius*radius;
	}
	double area (int base, int height)
	{
		float product = (base*height)/3;
		return product;
	}
	double area (int side)
	{	
		float product = side*side;
		return product;
	}
	public static void main(String args[])
	{		
		Area a = new Area();
		System.out.println("The area of the rectangle with l=4 and b = 3 is: " + a.area(4,3));
		System.out.println("The area of the circle with radius = 5 is: " + a.area(5.0));
		System.out.println("The area of equilateral triangle with height is: " + a.area(5,8));
		System.out.println("The area of the square with side = 25 is: " + a.area(5));
	}
} 