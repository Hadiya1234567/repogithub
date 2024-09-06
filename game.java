import java.util.Random;
import java.util.Scanner;

public class  game {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Press 1 for Rock,2 for Scissor and 3 for Paper:");
        int user_input= sc.nextInt();

        Random random=new Random();
        int comp_input= random.nextInt(1,4);
        if(user_input==comp_input) {
            System.out.println("match draw");

        } else if (user_input==1&&comp_input==2||user_input==2&&comp_input==3||user_input==3&&comp_input==1) {
            System.out.println("you win");

        } else {
            System.out.println("computer win");
        }
        System.out.println("computer choose:"+comp_input);

    }
}

