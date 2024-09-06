abstract class Base{
    public Base(){
        System.out.println(" constructor of base");
    }
    public void sayhello(){
        System.out.println("hello");
    }
    abstract public void greet();

}
class Derived extends Base{
    @Override
    public void greet(){
        System.out.println("good morning");
    }
}
abstract class Derived2 extends Base{
    public void tb(){
        System.out.println("i am good");
    }
}
public class abstract{
    public static void main(String[] args) {
Derived D=new Derived();
Base B=new Derived();
B.sayhello();
    }
}
