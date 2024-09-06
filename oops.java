//class cellphone {
//    public void ringing() {
//        System.out.println("phone is ringing");
//    }
//
//    public void vibrating() {
//        System.out.println("phone is vibrating");
//    }

class square{
    int side;
    public int calc_area(){

        return side*side;
    }
    public int calc_perimeter(){

        return 4*side;
    }
}
class Rectangle{
    int length;
    int breadth;
    public int area(){
        return length*breadth;
    }
    public int perimeter(){
        return 2*(length+breadth);
    }

}
class Tommy{
    public void hit(){
        System.out.println("hitting the enemy");
    }
    public void run(){
        System.out.println("running from the enemy");
    }
    public void fire(){
        System.out.println("firing the enemy");
    }
}
class circle{
    float radius;
    public float area(){
        return 3.14f*radius*radius;
    }
    public float perimeter(){
        return 2*3.14f*radius;
    }
}

public class oops{
        public static void main(String[] args){


//        cellphone c1=new cellphone();
//        c1.ringing();
//        c1.vibrating();
//            square q1=new square();
//            q1.side=5;
//
//            System.out.println(q1.calc_area());
//            System.out.println(q1.calc_perimeter());
//            Rectangle R1=new Rectangle();
//            R1.length=14;
//            R1.breadth=12;
//            System.out.println(R1.area());
//            System.out.println(R1.perimeter());
            Tommy T1=new Tommy();
            T1.fire();
            T1.hit();
            T1.run();

            circle c1=new circle();
            c1.radius=3;
            System.out.println(c1.area());
            System.out.println(c1.perimeter());

    }
}

