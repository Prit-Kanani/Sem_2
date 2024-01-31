import java.util.Scanner;
public class ee{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String temp = "darshan college rajkot";
        temp.substring(8);
        System.out.println(temp.substring(8));
        System.out.println(temp);
        System.out.println(temp.indexOf("r"));
        
    String temp1 = sc.nextLine();
    if(temp1.trim().equals("arjun")){
        System.out.println("valid user");
    }
    else{
        System.out.println("invalid user");
    }
    String collegename="darshan college rajkot";
    System.out.println(collegename.replace("darshan", temp));











    }
}