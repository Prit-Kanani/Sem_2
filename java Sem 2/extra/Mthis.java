public class Mthis {

    public static void main(String[] args) {
        
        String store= "monil";
     Myclass x = new Myclass(store);

    
}
}

class Myclass  {

    String temp="Sumit";
    Myclass(String temp){
        System.out.println(temp);
        System.out.println(this.temp);

    }
}

