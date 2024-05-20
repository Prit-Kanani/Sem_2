import java.util.Scanner;
interface A{
    int a=10;
    void methodaA();
}
  interface A1 extends A{
   int a1 = 20;
    void methoda1();
 }

 interface A2 extends A{   
    int b1 = 30;
   void methoda2();
 }
 interface A12 extends A {
int a12=40;
void methodaa12();
   
 }
 class B implements A,A1,A2,A12{
    int b=50;
    public void methodaA(){
        System.out.println("constant of interface A1 is a = "+a);
    }
    public void methoda1(){
        System.out.println("constant of interface A1 is a = "+a1);
    }
    public void methoda2(){
        System.out.println("constant of interface A2 is b = "+b1);
    
    }
    public void methodaa12(){
        System.out.println("constant of interface A1 is a = "+a12);
    }
    public void methodB(){
        System.out.println("constant of interface A1 is a = "+b);
    }
 }

public class Lab7_2A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        B b = new B();
        b.methoda1();
        b.methoda2();
        b.methodaa12();
        b.methodB();
   
    }
}
