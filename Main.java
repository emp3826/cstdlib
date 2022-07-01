public class Main{
	public static void main(String[] args){
		Person ming = new Person();
		ming.setName("xiaoming");
		ming.setAge(12);
		ming.setBirth(2004);
		System.out.println(ming.getName());
		System.out.println(ming.getAge());
	}
}

class Person{
	private String name;
	private int age;
	private int birth;

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
		return calcAge(2022);
	}

	public void setBirth(int birth){
		this.birth = birth;
	}

	private int calcAge(int current){
		return current - this.birth;
	}
}
