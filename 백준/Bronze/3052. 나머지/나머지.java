import java.util.Arrays;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int count = 1;
        int[] array = new int[10];
        for (int i = 0; i < 10; i++){
            array[i] = cin.nextInt() % 42;
        }
        Arrays.sort(array);

        for(int i = 0; i < 9; i++){
            if(array[i] == array[i+1]){
                continue;
            } else if (array[0] != array[i+1]) {
                count++;
            }
        }
        System.out.println(count);
    }
}
