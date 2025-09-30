import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);

        int byear;      //불기 연도를 저장하는 변수
        int year;       //서기 연도를 저장하는 변수

        byear = s.nextInt();

        year = byear - 543; //불기 연도는 서기 연도에 543을 더한 값임

        System.out.println(year);        
        
        s.close();        
    }
}