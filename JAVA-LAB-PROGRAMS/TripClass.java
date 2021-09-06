package collegeProg;

public class TripClass {
	 String carNo;
     String carName;
     int yearOfManufacture;
     double mileage;
     double KMrun;
     double fuelConsumed(double fuelCapacity)
     {
         return fuelCapacity/mileage;
     }
     double runningCost(int fuelPrice,double fuelCapacity)
     {
         return (fuelPrice/mileage)*fuelCapacity;
     }
     TripClass(String name,String No,double mil,double km,int yom)
     {
         carName=name;
         carNo=No;
         yearOfManufacture=yom;
         mileage=mil;
         KMrun=km;
     }
     TripClass(String name,String No,double mil,double km)
     {
         carName=name;
         carNo=No;
         mileage=mil;
         KMrun=km;
         yearOfManufacture=2017;
     }
     TripClass(String name,String No,double mil)
     {
         carName=name;
         carNo=No;
         mileage=mil;
         yearOfManufacture=2020;
         KMrun=999999;
     }
     void detail()
     {
         System.out.println("Car name:"+carName);
         System.out.println("Car No :"+carNo);
         System.out.println("YearOfManufacture : "+yearOfManufacture);
         System.out.println("Mileage :"+mileage+" kmpl");
         System.out.println("KM run :"+KMrun+" km");
     }
 public static void main(String[] args) {
     TripClass t1=new TripClass("QUANTO","Up 14qD 1990",15.99,9999.0,2012);
     TripClass t2=new TripClass("Endevour","UK 2RLH 0001",10.91,3626000);
     TripClass t3=new TripClass("Crysta","HR 6CET 1547",13.68);
     
     t1.detail();
     System.out.println("fuel Consumed : "+t1.fuelConsumed(55)+" litres/100Km");
     System.out.println("Running Cost :Rs "+t1.runningCost(101,55));
     System.out.println();
 
     t3.detail();
     System.out.println("fuel Consumed : "+t3.fuelConsumed(65)+" litres/100Km");
     System.out.println("Running Cost :Rs "+t3.runningCost(101,65));
     System.out.println();
     
     t2.detail();
     System.out.println("fuel Consumed : "+t2.fuelConsumed(80)+" litres/100Km");
     System.out.println("Running Cost :Rs "+t2.runningCost(101,80));
     System.out.println();
 }
}


/*Car name:QUANTO
Car No :Up 14qD 1990
YearOfManufacture : 2012
Mileage :15.99 kmpl
KM run :9999.0 km
fuel Consumed : 3.4396497811131956 litres/100Km
Running Cost :Rs 347.40462789243276

Car name:Crysta
Car No :HR 6CET 1547
YearOfManufacture : 2020
Mileage :13.68 kmpl
KM run :999999.0 km
fuel Consumed : 4.751461988304094 litres/100Km
Running Cost :Rs 479.89766081871346

Car name:Endevour
Car No :UK 2RLH 0001
YearOfManufacture : 2017
Mileage :10.91 kmpl
KM run :3626000.0 km
fuel Consumed : 7.332722273143904 litres/100Km
Running Cost :Rs 740.6049495875344

*/