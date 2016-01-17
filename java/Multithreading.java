import java.io.*;

class A extends Thread
{
	public void run()
	{
		int i=0;
		System.out.println("Starting A");
		for(i=0;i<6;i++)
		{
			System.out.println("Inside A: "+i+"\n");
			try 
			{
		    	sleep(1000);                 //1000 milliseconds is one second.
			} 
			catch(InterruptedException ex){}
		}
		System.out.println("Exiting A");
	}
}

class B extends Thread
{
	public void run()
	{
		int i=0;
		System.out.println("Starting B");
		for(i=0;i<4;i++)
		{
			if(1==3) stop();
			System.out.println("Inside B: "+i+"\n");
		}
		System.out.println("Exiting B");
	}
}

class C extends Thread
{
	public void run()
	{
		int i=0;
		System.out.println("Starting C");
		for(i=0;i<5;i++)
		{
			System.out.println("Inside C: "+i+"\n");
		}
		System.out.println("Exiting C");
	}
}

public class Multithreading
{
	public static void main(String[] Args)
	{
		A a = new A();
		B b = new B();
		C c = new C();
		a.start();
		b.start();
		c.start();
	}
}
