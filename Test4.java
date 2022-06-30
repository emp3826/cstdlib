import java.util.Arrays;
public class Test4{
	public static void main(String[] args){
		int[] ns = {16, 9, 4, 1};
		for(int n : ns){
			System.out.println(n);
		}
		System.out.println(Arrays.toString(ns));
		Arrays.sort(ns);
		System.out.println(Arrays.toString(ns));
	}
}
