import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        long total = 0;
        Scanner cin = new Scanner(System.in);
        long A = cin.nextLong();
        long B = cin.nextLong();
        long C = cin.nextLong();
        total = A+B+C;
        System.out.println(total);
    }
}