import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int arraySize = cin.nextInt();
        int count = cin.nextInt();
        int[] bucket = new int[arraySize + 1];
        int[] bucket1 = new int[arraySize + 1];
        for (int i = 0; i <= arraySize; i++)
        {
            bucket[i] = i;
            bucket1[i] = i;
        }

        for (int i = 0; i < count; i++){
            int toIndex = cin.nextInt();
            int fromIndex = cin.nextInt();
            for (int j = fromIndex; j >= toIndex; j--){
                bucket[j] = bucket1[fromIndex - (j-toIndex)];
                // 따로 저장이 안되어 있어서 계속 같은 숫자가 나오는 것이다.
            }
            for(int k = 0; k < arraySize + 1; k++)
            {
                bucket1[k] = bucket[k];
            }
        }
        for(int i = 1; i <= arraySize; i++){
            System.out.print(bucket[i] + " ");
        }
    }
}
