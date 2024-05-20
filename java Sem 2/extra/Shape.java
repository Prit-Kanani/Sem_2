public class Shape {
    public void area(int radius){
        double ans = Math.PI*Math.pow(radius, 2);
        System.out.println(ans);
    }
    public void area(double width){
        double ans = width*width*width;
        System.out.println(ans);
    }
    public  void area(int length,int width) {
        int ans = length*width;
        System.out.println(ans);

        
    }
}
