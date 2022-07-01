public class Main2{
	public static void main(String[] args){
		Person ming = new Person("xiaoming", 18);
		System.out.println(ming.getName());
		System.out.println(ming.getAge());
		Person ming2 = new Person();
		ming2.setName("xiaoming");
		ming2.setAge(18);
		System.out.println(ming2.getName());
		System.out.println(ming2.getAge());
	}
}

class Person{
	private String name;
	private int age;

	public Person(String name, int age){
		this.name = name;
		this.age = age;
	}

	public Person(){
	}

	public void setName(String name){
		this.name = name;
	}

	public void setAge(int age){
		this.age = age;
	}

	public String getName(){
		return this.name;
	}

	public int getAge(){
		return this.age;
	}
}
