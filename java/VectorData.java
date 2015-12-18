import java.io.*;
import java.util.*;

class VectorData
{
	public static void main(String args[])
	{
		int s;
		Vector data = new Vector();
		Enumeration ex = data.elements();

		data.addElement(new Integer(1));
		data.addElement(new Integer(65));
		System.out.println("Size of vector is:" +data.size());
		System.out.println("capacity of vector is:" +data.capacity());

		data.addElement(new Float(6.75));
		data.addElement(new Float(100.001));
		System.out.println("Size of vector is:" +data.size());
		System.out.println("capacity of vector is:" +data.capacity());

		data.addElement(new Double(100.10101));
		data.addElement(new Double(123.45678));
		System.out.println("capacity of vector is:" +data.capacity());
        System.out.println("Size of vector is:" +data.size());

        data.addElement(new Boolean(false));
        System.out.println("Size of vector is:" +data.size());
        System.out.println("capacity of vector is:" +data.capacity());

        System.out.println("First element is: " + data.firstElement() );
        System.out.println("First element is: " + data.lastElement() );

        System.out.println("Elements are:");
        while(ex.hasMoreElements())
        {
        	System.out.println(ex.nextElement());
        }
	}
}
