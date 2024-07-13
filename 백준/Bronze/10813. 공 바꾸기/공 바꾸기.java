import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int arraySize = cin.nextInt();
        int changeNum = cin.nextInt();
        int[] buckets = new int[arraySize+1];

        for (int i = 0; i <= arraySize; i++) {
            buckets[i] = i;
        }

        for(int k = 0; k < changeNum; k++) {
            int i = cin.nextInt();
            int j = cin.nextInt();
            int temp;

            temp = buckets[i];
            buckets[i] = buckets[j];
            buckets[j] = temp;
        }

        for(int i = 1; i <= arraySize; i++) {
            System.out.print(buckets[i] + " ");
        }
    }
}
