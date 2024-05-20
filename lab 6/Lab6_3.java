import java.util.Scanner;
public class Lab6_3 {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        Empoly emp = new Empoly("John Doe", 30, "1234567890", "123 Main St", 50000, "Software Development");
        
      
        Manager mgr = new Manager("Jane Smith", 35, "9876543210", "456 Elm St", 80000, "Human Resources");
        
        System.out.println("Employee Details:");
        System.out.println("Name: " + emp.Name);
        System.out.println("Age: " + emp.Age);
        System.out.println("Phone Number: " + emp.Phone_number);
        System.out.println("Address: " + emp.Address);
        System.out.println("Salary: " + emp.Salary);
        System.out.println("Specialization: " + emp.specialization);
        System.out.println();
        
  
        System.out.println("Manager Details:");
        System.out.println("Name: " + mgr.Name);
        System.out.println("Age: " + mgr.Age);
        System.out.println("Phone Number: " + mgr.Phone_number);
        System.out.println("Address: " + mgr.Address);
        System.out.println("Salary: " + mgr.Salary);
        System.out.println("Department: " + mgr.department);
    
    
    }
    
}
class Member{
    String Name;
    int Age;
    int Phone_number;
    String Address;
    int Salary;
    
    Member(String name, int age, String phoneNumber, String address, double salary) {
        this.Name = name;
        this.Age = age;
        this.Phone_number = Phone_number;
        this.Address = Address;
        this.Salary = Salary;
    }
    void printSalary() {
        System.out.println("Salary: " + Salary);
    }
}

class Empoly extends Member{
    String specialization;
        Empoly(String name, int age, String phoneNumber, String address, double salary, String specialization){
            super(name, age, phoneNumber, address, salary);            
            this.specialization = specialization;
        } 
}

class Manager extends Member{
    String department;
    Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
        super(name, age, phoneNumber, address, salary);
        this.department = department;
    }
        
}

