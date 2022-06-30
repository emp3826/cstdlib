import java.util.Scanner;
public class Test2{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		System.out.print("input your name:");
		String name = scan.nextLine();
		System.out.print("input your age:");
		int age = scan.nextInt();
		System.out.printf("%s, you are%d\n", name , age);
	}
}
