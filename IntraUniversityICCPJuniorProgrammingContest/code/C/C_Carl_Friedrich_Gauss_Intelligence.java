import java.util.Scanner;

interface Qknot {
    void sum(int n);
}

public class C_Carl_Friedrich_Gauss_Intelligence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test = scan.nextInt();

        Qknot compute = (n) -> {
            int sum = n * (n + 1) / 2;
            System.out.println(sum);
        };

        while (test-- > 0) {
            int n = scan.nextInt();
            compute.sum(n);
        }

        scan.close();
    }
}
