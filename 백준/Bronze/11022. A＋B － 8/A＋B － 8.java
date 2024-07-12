import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int num = cin.nextInt();
        int sum;

        for (int i = 1; i <= num; i++){
            int a = cin.nextInt();
            int b = cin.nextInt();
            sum = a + b;
            System.out.println("Case #" + i + ": " + a + " + " + b + " = " + sum);
        }
    }
}
