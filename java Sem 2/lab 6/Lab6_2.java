public class Lab6_2 {
    public static void main(String[] args) {
        if(args.length==3){
            
            book sc;
            if(args[1].equals("book")){
                sc = new book_publication(args[0], args[2]);
            }
            else if(args[1].equals("paper")){
                sc = new paper_publication(args[0], args[2]);
            }
            else{
                sc = new book(args[0]);
            }
            sc.display();
        }
        else if(args.length==1){
            book sc = new book(args[0]);
          sc.display();
        }
        else{
            System.out.println("Invalid details");
        }
        
        
    }
    
}
class book{
    private String auther_name;
    String auther;
    book(String auther){
        this.auther_name = auther;
    }
    public void display(){
        System.out.println(auther);
        

    }
    
}
class book_publication extends book{
    private String title;
    String auther;
    public book_publication(String auther,String title){
        super(auther);
        this.title = title;
       


    }
    public void display(){
        System.out.println("auther"+auther);
        System.out.println("book publicatoin title"+this.title);


    }
 
}

class  paper_publication extends book{
    private String title;
    String auther;
    public paper_publication(String auther,String title){
        super(auther);
        this.auther = auther;
        this.title = title;


    }
    public void display(){
        System.out.println("auther"+auther);
        System.out.println("paper publication title"+this.title);


    }
 

}