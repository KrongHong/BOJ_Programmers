import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int totalPrice = cin.nextInt();
        int prodectNum = cin.nextInt();
        int sum = 0;

        for (int i = 0; i < prodectNum; i++){
            int price = cin.nextInt();
            int amount = cin.nextInt();
            sum += price * amount;
        }

        if(sum == totalPrice){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}
