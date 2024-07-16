import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int wordNum = sc.nextInt();
        String word = sc.next();
        int sum = 0;

        for (int i = 0 ; i < wordNum; i++){
            sum += word.charAt(i) - '0';
        }

        System.out.println(sum);
    }
}
