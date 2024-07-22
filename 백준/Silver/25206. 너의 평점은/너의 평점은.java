import java.util.Scanner;

public class Main{

    String subject;
    double GPA;
    String grade;

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Main[] main = new Main[20];
        double gpaSum = 0;
        double avgGpa = 0;
        double doubleGrade = 0;
        for (int i = 0; i < main.length; i++){
            main[i] = new Main();
            main[i].subject = sc.next();
            main[i].GPA = sc.nextDouble();
            main[i].grade = sc.next();

            if(main[i].grade.equals("A+")){
                doubleGrade = 4.5;
            } else if (main[i].grade.equals("A0")) {
                doubleGrade = 4.0;
            } else if (main[i].grade.equals("B+")) {
                doubleGrade = 3.5;
            } else if (main[i].grade.equals("B0")) {
                doubleGrade = 3.0;
            }else if (main[i].grade.equals("C+")) {
                doubleGrade = 2.5;
            } else if (main[i].grade.equals("C0")) {
                doubleGrade = 2.0;
            } else if (main[i].grade.equals("D+")) {
                doubleGrade = 1.5;
            }else if (main[i].grade.equals("D0")) {
                doubleGrade = 1.0;
            } else if (main[i].grade.equals("P")) {
                continue;
            }else{
                doubleGrade = 0.0;
            }
            gpaSum += main[i].GPA;
            avgGpa += doubleGrade * main[i].GPA;
        }


        System.out.println(avgGpa / gpaSum);
    }
}
