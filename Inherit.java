public class Inherit{
	public static void main(String[] args){
		Student s = new Student();
		s.setName("xiaoming");
		System.out.println(s.hello());
	}
}

class Person{
	protected String name;
	protected int age;
	
	public void setName(String name){
		this.name = name;
	}
}

class Student extends Person{
	public String hello() {
		return "hello" + super.name;
	}
}
