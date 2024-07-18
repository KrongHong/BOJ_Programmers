import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine();
        char[] charArray = word.toCharArray();
        int left = 0;
        int right = word.length() - 1;
        while(true){
            if(left > right)
            {
                System.out.println("1");
                break;
            }
            if(charArray[left] != charArray[right]){
                System.out.println("0");
                break;
            }else {
                left++;
                right--;
            }
        }

    }
}
