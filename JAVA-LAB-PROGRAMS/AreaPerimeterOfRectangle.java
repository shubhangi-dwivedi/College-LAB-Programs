package collegeProg;

public class AreaPerimeterOfRectangle {
	int l,h;
	
	int area(){
		return l*h;
	}
	
	int perimeter() {
		return 2*(l+h);
	}
}

 class displayOP{
	public static void main(String[] args) {
		AreaPerimeterOfRectangle obj1= new AreaPerimeterOfRectangle();
		obj1.l=5;
		obj1.h=7;
		System.out.println("Area of reactngle 1 is = "+obj1.area());
		System.out.println("Perimeter of reactngle 1 is = "+obj1.perimeter());
		
		System.out.println();
		
		AreaPerimeterOfRectangle obj2= new AreaPerimeterOfRectangle();
		obj2.l=10;
		obj2.h=11;
		System.out.println("Area of reactngle 2 is = "+obj2.area());
		System.out.println("Perimeter of reactngle 2 is = "+obj2.perimeter());
		
		System.out.println();
		
		AreaPerimeterOfRectangle obj3= new AreaPerimeterOfRectangle();
		obj3.l=3;
		obj3.h=4;
		System.out.println("Area of reactngle 3 is = "+obj3.area());
		System.out.println("Perimeter of reactngle 3 is = "+obj3.perimeter());
	}
}

 
/*Area of reactngle 1 is = 35
Perimeter of reactngle1 is = 24

Area of reactngle 2 is = 110
Perimeter of reactngle 2 is = 42

Area of reactngle 3 is = 12
Perimeter of reactngle 3 is = 14*/


