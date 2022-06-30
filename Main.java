public class Main{
	public static void main(String[] args){
		Person ming = new Person();
		ming.setName("xiaoming");
		ming.setAge(12);
		System.out.println(ming.getName());
		System.out.println(ming.getAge());
	}
}

class Person{
	private String name;
	private int age;

	public void setName(String name){
		this.name = name;
	}

	public String getName(){
		return this.name;
	}

	public void setAge(int age){
		if(age < 0){
			throw new IllegalArgumentException("invalid argument");
		}
		this.age = age;
	}
	public int getAge(){
		return this.age;
	}
}
