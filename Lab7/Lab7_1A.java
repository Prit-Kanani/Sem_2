import java.util.Scanner;


abstract class Vegetables {
 
    String colorofvegetable;
    String name;

    Scanner sc = new Scanner(System.in);
    
    public abstract String toString();

   // public String getColorofvegetable() {
   //    return colorofvegetable;
   // }
        
}

 class Potato extends Vegetables{
   Potato(String name , String colorofvegetable){
      this.colorofvegetable=colorofvegetable;
     this.name=name;
   }

    public String toString(){
      return "name : "+name+"\n color : "+colorofvegetable;      
    }
 }


 class Tomato extends Vegetables{

   Tomato(String name , String  colorofvegetable){
     this. colorofvegetable=  colorofvegetable;
     this. name=name;
   }

    public String toString(){
      return "name : "+name+"\n color : "+colorofvegetable;      
    }
 }


 class Bringle extends Vegetables{

   Bringle(String name , String colorofvegetable){
    this. colorofvegetable=colorofvegetable;
      this.name=name;
   }

    public String toString(){
      return "name : "+name+"\n color : "+colorofvegetable;      
    }
 }


public class Lab7_1A {

    public static void main(String[] args) {

      Potato p1 = new Potato("potato", "brown");
      System.out.println(p1.toString());
      Tomato t1 = new Tomato("tomato", "red");
      System.out.println(t1.toString());
      Bringle b1 = new Bringle("bringle", "purple");
      System.out.println(b1.toString());
        
    }
    
}
