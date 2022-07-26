import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int a = 0, b = 0;
		int sum = 0;

		a = key.nextInt();
		b = key.nextInt();

		sum = a + b;

		System.out.println(sum);

		key.close();

	}
}