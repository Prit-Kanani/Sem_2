import java.io.*;

public class Buffer {
    public static void main(String[] args) {
        
        String filename = "abc.text";
        try{
            BufferedWriter bw = new BufferedWriter(new FileWriter(filename));
            bw.write("Darsan,20\n");
            bw.close();
            System.out.println("Data writen succesfully");

        }
        catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedReader br = new BufferedReader(new FileReader(filename));
            String line;
            while((line =  br.readLine())!=null){
                String name_age [] = line.split(",");
                String name = name_age[0];
                int age = Integer.parseInt(name_age[1]);
                Student st = new Student(name, age);
                System.out.println(st);
            }
                br.close();
        }
        catch(Exception ex){
            ex.printStackTrace();
        }
    }
}
class Students{
    String name;
    int age;
    Students(String name , int age){
        this.name = name;
        this.age =  age;
    }

    public String toString(){
        return "Name : "+ name +" , Age : " + age;
    }
}
