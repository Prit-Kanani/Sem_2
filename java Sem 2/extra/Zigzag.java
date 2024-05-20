import java.util.Scanner;
public class Zigzag {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 
        int st = 1; 
        boolean flag=true;
        int i;
        int j;
        int[][] arr = new int[n][n]; 
        for( i=1;i<=n;i++){
            if(flag){
            for( j=0;j<n;j++){
                arr [i][j] = st;
                   st++;
            }
        }
        else{
            for( j=i;j>=1;j--){
                arr [i][j] = st;
                st++;

            }
        }
        for( i = n;i>=1;i--){
            for(j=1;j<=n;j++){
                arr [i][j] = st;
                st++;
            }
        }
            


        for(i=1;i<5;i++){
            for(j=1;j<5;j++){
                System.out.print(arr[i][j]);
                System.out.print(" ");
            }
            System.out.println(" ");
        }
        }
    }
}
    
