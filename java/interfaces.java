import java.io.*;
import java.util.*;
class vehicle
{
  int tires;
  int seats;
  String vehiclecolor;
  Scanner sc = new Scanner(System.in);
  public void inputVehicleData()
  {
    System.out.println("Enter no. of tires, seats and colour of the vehicle: ");
    this.tires = sc.nextInt();
    this.seats = sc.nextInt();
    this.vehiclecolor = sc.next();
  }
}

class car extends vehicle
{
  String company;
  Scanner sc = new Scanner(System.in);
  public void companydata()
  {
    System.out.println("Enter company name: ");
    this.company = sc.next();
  }
}

interface typeofsteering
{
  public void steer();
}

class supercar extends car implements typeofsteering
{
  public void steer()
  {
    System.out.println("It has power steering and goes 0 to 120 in 4 secs.");
  }
  public void getdata()
  {
    inputVehicleData();
    companydata();
    System.out.println("Company: " + company);
    System.out.println("Colour: " + vehiclecolor);
    System.out.println("no of tires: " + tires);
    System.out.println("seats: " + seats);
  }
}

class interfaces
{
  public static void main(String args[])
  {
    supercar scar = new supercar();
    scar.getdata();
    scar.steer();
  }
}
