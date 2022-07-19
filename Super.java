public class Super{
	public static void main(String[] args){
		Student s = new Student("xiaoming", 12, 89);
		System.out.println(s.getName());
		System.out.println(s.getAge());
		System.out.println(s.getScore());
	}
}

class Person{
	protected String name;
	protected int age;
	
	public Person(String name, int age){
		this.name = name;
		this.age = age;
	}

	public String getName(){
		return this.name;
	}

	public int getAge(){
		return this.age;
	}
}

class Student extends Person{
	protected int score;
	
	public Student(String name, int age, int score){
		super(name, age);
		this.score = score;
	}

	public int getScore(){
		return this.score;
	}
}
