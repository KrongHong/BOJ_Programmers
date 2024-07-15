import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String sentence = sc.nextLine();
        int searchNum = sc.nextInt();

        char word = sentence.charAt(searchNum - 1);

        System.out.println(word);
    }
}
