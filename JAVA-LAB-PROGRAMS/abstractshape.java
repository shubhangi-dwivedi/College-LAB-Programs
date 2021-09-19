package collegeProg;

import java.util.Scanner;


abstract class shape 

{
    private int xcord,ycord;
     public shape()
    {
        xcord=ycord=0;
    }
    public shape(int x,int y)
    {
        xcord=x;
        ycord=y;
    }
    public int getxcord()
    {
        return xcord;
    }
    public int getycord()
    {
        return ycord;
    }
    public void setxcord(int x)
    {
        xcord=x;
    }
    public void setycord(int y)
    {
        ycord=y;
    }
    public abstract double area();
}
  class cone extends shape
  {
      double h,r,area;
      Scanner sc = new Scanner(System.in);
      public void read(){
      System.out.println("Enter radius of the Cone: ");
      r=sc.nextFloat();
      System.out.println("Enter height of the Cone: ");
      h=sc.nextFloat();
  }
     public double area()
     {
         double sq=h*h+r*r;
         area=Math.PI*r*(r+java.lang.Math.sqrt(sq));
         return area;
     }

     public void display()
     {
     area();
     System.out.printf("The area of Cone is: %.4f\n",area);
      }
}
class Box extends shape
{
    Scanner sc = new Scanner(System.in);
    double l,b,h,area,volume;
    public void accept()
 {
  System.out.println("Enter length, breadth and height of the Box: ");
  
  l=sc.nextDouble();
  b=sc.nextDouble();
  h=sc.nextDouble();
 }
    @Override
 public double area(){
  area=(2*l*b)+(2*b*h)+(2*l*h);
  return area;
 }
 
 public void show(){
  area();
 
  System.out.println("The area of Box is: "+area);
 
 }
}
public class abstractshape
{
    public static void main(String args[])
    {
       cone c = new cone();
       c.read();
       c.display();
       
       Box b = new Box();
       b.accept();
       b.show();
       
    }
}
    

/*Enter radius of the Cone: 
5
Enter height of the Cone: 
6
The area of Cone is: 201.2229
Enter length, breadth and height of the Box: 
5
4
7
The area of Box is: 166.0*/

