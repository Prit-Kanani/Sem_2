class student{
        int id_no;
        int no_of_subjects_registered;
        int subject_code;
        int subject_credits;
        int grade_obtained;
        int spi;
    student(int id_no,int no_of_subjects_registered,int subject_code,int subject_credits,int grade_obtained,int spi){
        this.id_no= id_no;
        this.no_of_subjects_registered = no_of_subjects_registered;
        this.subject_code = subject_code;
        this.grade_obtained = grade_obtained;
        this.spi = spi;
    }
   
}
public class Lab6_1 {
    public static void main(String[] args) {
        
        student s1= new student(0, 0, 0, 0, 0, 0);
    }
}
