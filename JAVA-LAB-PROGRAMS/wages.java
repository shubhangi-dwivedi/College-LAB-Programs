package collegeProg;

import java.util.Scanner;

class wages {
    private String workerName;
    private float rate_per_hour;
    private int working_hour;
    float Wage()
    {
        return rate_per_hour*working_hour;
    }
    public void setName(String name)
    {
        workerName=name;
    }
    public String getName()
    {
        return workerName;
    }
    public void setRPH(float rph)
    {
        rate_per_hour=rph;
    }
    public float getRPH()
    {
        return rate_per_hour;
    }
   public void setWH(int wh)
    {
        working_hour=wh;
    }
    public float getWH()
    {
        return working_hour;
    }
}
class testClass {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. of Workers : ");
        int n=sc.nextInt();
       
        wages obj[]=new wages[n];
       
        for(int i=0;i<n;i++)
        {
            obj[i]=new wages();
            System.out.println();
            System.out.println("Details of "+(i+1)+" worker");
            System.out.print("Name : ");
            obj[i].setName(sc.next());
            System.out.print("Rate per hour : ");
            float rph=sc.nextFloat();
            obj[i].setRPH(rph);
            System.out.print("Working hour : ");
            obj[i].setWH(sc.nextInt());
        }
        for(int i=0;i<n;i++)
        {
            System.out.println();
            System.out.println("Details of "+(i+1)+" worker");
            System.out.print("Name : ");
            System.out.println(obj[i].getName());
            System.out.println("Wages : "+obj[i].Wage());
        }
    }
}
/*
run:
Enter no. of Workers :
2

Details of 1 worker
Name : shubhangi
Rate per hour : 200
Working hour : 12

Details of 2 worker
Name : vanya
Rate per hour : 300
Working hour : 7

Details of 1 worker
Name : shubhangi
Wages : 2400.0
Details of 2 worker
Name : vanya
Wages : 2100.0

BUILD SUCCESSFUL (total time: 23 seconds)

*/


