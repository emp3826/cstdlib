public class Overload{
	public static void main(String[] args){
		Hello a = new Hello();
		a.hello();
		a.hello("xiaoming");
		a.hello("xiaoming", 18);
	}
}

class Hello{
	public void hello(){
		System.out.println("helloworld");
	}

	public void hello(String name){
		System.out.println("hello" + name);
	}

	public void hello(String name, int age){
		if(age < 18){
			System.out.println("Hi");
		} else {
			System.out.println("hello");	
		}
	}
}
