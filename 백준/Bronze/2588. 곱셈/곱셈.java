import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int num1 = cin.nextInt();
        int num2 = cin.nextInt();

        System.out.println(num1 *(num2%10));
        System.out.println(num1 *((num2/10)%10));
        System.out.println(num1 *(num2/100));
        System.out.println(num1 * num2);
    }
}