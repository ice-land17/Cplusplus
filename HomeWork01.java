public class HomeWork01 {
    public static void main(String[] args) {
        Person[] persons = new Person[3];
        persons[0] = new Person("kanavi", 25, "game");
        persons[1] = new Person("Tarzan", 66, "gg");
        persons[2] = new Person("scout", 29, "ggg");

        //输出当前对象数组
        for (int i = 0; i < persons.length; i++) {
            System.out.println(persons[i]);
        }
        //使用冒泡排序
        Person tmp = null;//定义临时变量,用于交换
        for (int i = 0; i < persons.length - 1; i++) {//外层循环
            for (int j = 0; j < persons.length - 1 - i; j++) {
                if (persons[i].getAge() > persons[i + 1].getAge()) {
                    tmp = persons[i];
                    persons[i] = persons[i + 1];
                    persons[i + 1] = tmp;
                }
            }
        }
        for (int i = 0; i < persons.length; i++) {
            System.out.println(persons[i]);
        }
    }
}

class Person {
    String name;
    int age;
    String job;

    public Person(String name, int age, String job) {
        this.name = name;
        this.age = age;
        this.job = job;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getJob() {
        return job;
    }

    public void setJob(String job) {
        this.job = job;
    }

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", job='" + job + '\'' +
                '}';
    }
}

