import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine().toUpperCase(); // 입력한 문자열을 대문자로 변환
        int[] alpa = new int[26];
        int max = alpa[0];
        char numToChar = '?';

        for (int i = 0; i < word.length(); i++){
            int alpaNum = word.charAt(i) - 65;
            alpa[alpaNum]++;
        }

        for (int i = 0; i < alpa.length; i++){
            if(max < alpa[i]){
                max = alpa[i];
                numToChar = (char)(i + 65);
            } else if (max == alpa[i]) {
                numToChar = '?';
            }
        }
        System.out.println(numToChar);
    }
}
