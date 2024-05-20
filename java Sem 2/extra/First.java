import java.util.Scanner;
public class First{
    public static void main(String[] arg){
        //1st
        int i;
        int j;
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                System.out.print('*');
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");
        //2nd
        for(i=1;i<=5;i++){
            for(j=1;j<=i;j++){
                System.out.print('*');
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");
        
        //3rd
        for(i=1;i<=5;i++){
            for(j=1;j<=6-i;j++){
                System.out.print('*');
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");
      


  
        //4th
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
               if(j>=6-i){
                System.out.print('*');
               }
               else{
                System.out.print(" ");
               }
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");

        //5th
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
               if(j>=6-i){
                System.out.print("* ");
               }
               else{
                System.out.print(" ");
               }
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");
        
        //6th
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
               if(j>=6-i){
                System.out.print("* ");
               }
               else{
                System.out.print(" ");
               }
            }
            System.out.println(" ");
        }
        
        for(i=1;i<=5;i++){
            for(j=1;j<5;j++){
              if(j<i){
                System.out.print(" ");
              }
              else{
                System.out.print(" *");
              }
            }
            System.out.println(" ");
           
        }
        System.out.println("--------------------------------------------------");
        
        //7th
        for(i=1;i<=5;i++){
            
            for(j=1;j<=5;j++){
              if(j<i){
                System.out.print(" ");
              }
              else{
                System.out.print(" *");
              }
            }
            System.out.println(" ");
           
        }
        for(i=1;i<=5;i++){
            System.out.print(" ");
            for(j=1;j<=5;j++){
               if(j>=6-i){
                System.out.print("* ");
               }
               else{
                System.out.print(" ");
               }
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");

        //8th
       int k=1;
        for(i=1;i<=5;i++){
            for(j=1;j<=i;j++){
                System.out.print(k+" ");
                k++;
            }
            System.out.println(" ");
        }
        System.out.println("--------------------------------------------------");
        
        //9th
        int rows = 5;
        for ( i = 1; i <= rows; i++) {
            for ( j = i; j < rows; j++) {
                System.out.print(" ");
            }
            for ( k = 1; k <= (2 * i - 1); k++) {
                if (i == rows || k == 1 || k == (2 * i - 1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        System.out.println("--------------------------------------------------");
        //10th
        rows = 5;
        for ( i = 1; i <= rows; i++) {
            for ( j = i; j < rows; j++) {
                System.out.print(" ");
            }
            for ( k = 1; k <= (2 * i - 1); k++) {
                if (i == rows || (i == 5 && k != 1 && k != (2 * i - 1))) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }

            System.out.println();
        }
        
        for ( i = rows - 1; i >= 1; i--) {
            for ( j = i; j < rows; j++) {
                System.out.print(" ");
            }

            for ( k = 1; k <= (2 * i - 1); k++) {
                if (k == 1 || k == (2 * i - 1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }
       












    }

}