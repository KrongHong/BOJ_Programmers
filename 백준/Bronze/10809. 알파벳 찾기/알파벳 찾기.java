import java.util.Arrays;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char[] word = sc.nextLine().toCharArray();
        int[] CharToNumArray = new int[26];
        Arrays.fill(CharToNumArray, -1);

        for (int i = 0; i < word.length; i++) {
            int alpaNum = (int)word[i] - 97;

            if (CharToNumArray[alpaNum] == -1) {
                CharToNumArray[alpaNum] = i;
            }
        }

        for (int i = 0; i < CharToNumArray.length; i++) {
            System.out.print(CharToNumArray[i] + " ");
        }
    }
}