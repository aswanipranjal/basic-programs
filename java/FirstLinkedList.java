import java.io.*;
import java.util.*;

public class FirstLinkedList
{
	public static void main(String args[])
	{
		int choice=0;
		int value = 0;
		int index = 0;
		LinkedList a = new LinkedList();
		Scanner sc = new Scanner(System.in);
		while(choice != 6)
		{
			System.out.println("Enter \n1)add\n2)remove\n3)display\n4)reverse\n5)search\n6)exit ");
			choice = sc.nextInt();
			switch(choice)
			{
				case 1:
				{
					System.out.println("Enter value: ");
					value = sc.nextInt();
					a.add(value);
					break;
				}
				case 2:
				{
					System.out.println("Enter element to be removed: ");
					value = sc.nextInt();
					index= a.indexOf(value);
					a.remove(index);
					break;
				}
				case 3:
				{
					System.out.println(a);
					break;
				}
				case 4:
				{
					Collections.reverse(a);
					System.out.println(a);
					Collections.reverse(a);
					break;
				}
				case 5:
				{
					System.out.println("Enter element to be searched: ");
					value = sc.nextInt();
					index = a.indexOf(value);
					System.out.println(value+" was at index "+index+"\n");
					break;
				}
				case 6:
					return;
			}

		}
	}
}