interface Transport{
    void deliver();
}

abstract class Animal {

    abstract void animalName(); 
    
}

class Tiger extends Animal{

    void animalName(){
        System.out.println("I am a Tiger");
    }
}

class Camel extends Animal implements Transport{
    
    void animalName(){
        System.out.println("I am a Camel");
    }
    public void deliver(){
        System.out.println("Camel's deliver");
    }
}

class Deer extends Animal{

    void animalName(){
        System.out.println("I am a Deer");
    }

}

class Donkey extends Animal implements Transport{

    void animalName(){
        System.out.println("I am a Donkey");
    }

    public void deliver(){
        System.out.println("Donkey's Deliver");
    }

}

public class Lab7_3B {
    public static void main(String[] args) {
        
        Animal[] a = new Animal[4];
        a[0] = new Tiger();
        a[1] = new Deer();
        a[2] = new Donkey();
        a[3] = new Camel();

        a[0].animalName();
        a[1].animalName();
        a[2].animalName();
        ((Transport) a[2]).deliver();
        a[3].animalName();
        ((Transport) a[3]).deliver();
    }
}
