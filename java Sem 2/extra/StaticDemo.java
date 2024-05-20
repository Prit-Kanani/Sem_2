class Abc{
 int count = 0;   
}
public class StaticDemo{
    public static void main(String[] args) {
        Abc a = new Abc();
        Abc b = new Abc();
        a.count++;
        a.count++;
        System.out.println("the value in b");
        System.out.print(b.count);
        System.out.println("the value in a");
        /* 1-if int count becomes static
         like ststic int count then 'a' will also increse its count variabal
          2- out in system.out.prinln , is static also
          3- static mathod can also acess static data
          */
        System.out.print(a.count);
    }
    
}