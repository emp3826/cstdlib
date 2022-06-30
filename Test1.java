public class Test1{
	public static void main(String[] args){
		int[] ns = new int[5];
		System.out.println(ns.length);
		String[] abc = {"a", "b", "c"};
		String s = abc[1];
		abc[1] = "d";
		System.out.println(abc[1]);
		System.out.println(s);
	}
}
