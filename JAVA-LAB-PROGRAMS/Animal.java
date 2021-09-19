package collegeProg;

import java.util.*;

public abstract class Animal {
    private int legs;
    private String color;
    private String v_nv;
    private String petorwild;
    private String typeofanimal;
    
    public Animal() {
        legs=0;
    }

    public Animal(int legs, String color, String v_nv, String petorwild, String typeofanimal) {
        this.legs = legs;
        this.color = color;
        this.v_nv = v_nv;
        this.petorwild = petorwild;
        this.typeofanimal = typeofanimal;
    }
    
    public int getLegs() {
        return legs;
    }

    public void setLegs(int legs) {
        this.legs = legs;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getV_nv() {
        return v_nv;
    }

    public void setV_nv(String v_nv) {
        this.v_nv = v_nv;
    }

    public String getPetorwild() {
        return petorwild;
    }

    public void setPetorwild(String petorwild) {
        this.petorwild = petorwild;
    }

        public String getTypeofanimal() {
        return typeofanimal;
    }

    public void setTypeofanimal(String typeofanimal) {
        this.typeofanimal = typeofanimal;
    }
    
    public abstract int no_legs();
    public abstract String colortype();
    public abstract String pet_wild();
    public abstract String veg_nonveg();
    public abstract String Type();
           
}
class Dog extends Animal {

    public Dog(int legs, String color, String v_nv, String petorwild,String typeofanimal) {
        super(legs, color, v_nv, petorwild,typeofanimal);
    }
    public int no_legs() {
        return super.getLegs();
    }
    public String colortype() {
        return super.getColor();
    }
    public String pet_wild() {
        return super.getPetorwild();
    }
    public String veg_nonveg() {
        return super.getV_nv();
    }
    public String Type() {
        return super.getTypeofanimal();
    }
    public String toString() {
        return "Dog \n type of animal : "+ this.Type()+ "\nno. of legs/fins : legs= " +this.no_legs()+
                "\npet or wild : " +this.pet_wild()+ "\nColor : " +this.colortype()+
                "\nvegetarian or non-vegetarian : "+this.veg_nonveg();
    }
    
}
class Cat extends Animal {

    public Cat(int legs, String color, String v_nv, String petorwild,String typeofanimal) {
        super(legs, color, v_nv, petorwild,typeofanimal);
    }
    public int no_legs() {
        return super.getLegs();
    }
    public String colortype() {
        return super.getColor();
    }
    public String pet_wild() {
        return super.getPetorwild();
    }
    public String veg_nonveg() {
        return super.getV_nv();
    }
    public String Type() {
        return super.getTypeofanimal();
    }
    public String toString() {
        return "Cat \n type of animal : "+ this.Type()+ "\nno. of legs/fins : legs= " +this.no_legs()+
                "\npet or wild : " +this.pet_wild()+ "\nColor : " +this.colortype()+
                "\nvegetarian or non-vegetarian : "+this.veg_nonveg();
    }
    
}
class Shark extends Animal {

    public Shark(int legs, String color, String v_nv, String petorwild,String typeofanimal) {
        super(legs, color, v_nv, petorwild,typeofanimal);
    }
    public int no_legs() {
        return super.getLegs();
    }
    public String colortype() {
        return super.getColor();
    }
    public String pet_wild() {
        return super.getPetorwild();
    }
    public String veg_nonveg() {
        return super.getV_nv();
    }
    public String Type() {
        return super.getTypeofanimal();
    }
    public String toString() {
        return "Shark \n type of animal : "+ this.Type()+ "\nno. of legs/fins : fins= " +this.no_legs()+
                "\npet or wild : " +this.pet_wild()+ "\nColor : " +this.colortype()+
                "\nvegetarian or non-vegetarian : "+this.veg_nonveg();
    }
    
}





class main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        Dog obj=new Dog(sc.nextInt(),sc.next(),sc.next(),sc.next(),sc.next());
        System.out.print(obj);
        Cat obj1=new Cat(sc.nextInt(),sc.next(),sc.next(),sc.next(),sc.next());
        System.out.print(obj1);
        Shark obj2=new Shark(sc.nextInt(),sc.next(),sc.next(),sc.next(),sc.next());
        System.out.print(obj2);
    }
}
/*
output : 
run:
4
black
nonveg
wild
terrestrial
Dog 
 type of animal : terrestrial
no. of legs/fins : legs= 4
pet or wild : wild
Color : black
vegetarian or non-vegetarian : nonveg
4
white
nonveg
pet
terrestrial
Cat 
 type of animal : terrestrial
no. of legs/fins : legs= 4
pet or wild : pet
Color : white
vegetarian or non-vegetarian : nonveg
2
blue
nonveg
wild
aquatic
Shark 
 type of animal : aquatic
no. of legs/fins : fins= 2
pet or wild : wild
Color : blue
vegetarian or non-vegetarian : nonvegBUILD SUCCESSFUL (total time: 2 minutes 7 seconds)

*/