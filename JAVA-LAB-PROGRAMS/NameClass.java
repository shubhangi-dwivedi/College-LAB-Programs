package collegeProg;

import java.util.*;

public class NameClass {
	String first,middle,last;
    public NameClass(String first,String middle,String last)
    {
        this. first=first;
        this. middle=middle;
        this. last=last;
    }
    public String toString()
    {
        return "Name "+first+" "+middle+" "+last;
    }
}
class Student extends NameClass
{
    double m1,m2,m3;
    public Student(String first, String middle, String last, double m1,double m2,double m3) {
        super(first, middle, last);
        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    double total()
    {
        return m1+m2+m3;
    }
    double per()
    {
        return total()/3.0;
    }
    void result()
    {
        super.toString();
        System.out.println("marks: = "+m1+" "+m2+" "+m3);
        System.out.println("total "+total());
        System.out.println("percentage "+per());
    }
}
class tester
{
    public static void main(String args[])
    {
        Scanner Sc=new Scanner(System.in);
        Student obj1=new Student(Sc.next(),Sc.next(),Sc.next(),Sc.nextDouble(),Sc.nextDouble(),Sc.nextDouble());
        Student obj2=new Student(Sc.next(),Sc.next(),Sc.next(),Sc.nextDouble(),Sc.nextDouble(),Sc.nextDouble());
        Student obj3=new Student(Sc.next(),Sc.next(),Sc.next(),Sc.nextDouble(),Sc.nextDouble(),Sc.nextDouble());
        System.out.println("Student 1: ");
        obj1.result();
        System.out.println("Student 2: ");
        obj2.result();
        System.out.println("Student 3: ");
        obj3.result();
    }
}

/*run:
a b c
59 34 83
d e f
53 65 38
f g h
43 87 77
Student 1: 
marks: = 59.0 34.0 83.0
total 176.0
percentage 58.666666666666664
Student 2: 
marks: = 53.0 65.0 38.0
total 156.0
percentage 52.0
Student 3: 
marks: = 43.0 87.0 77.0
total 207.0
percentage 69.0*/