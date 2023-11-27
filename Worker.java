package com.homework.work345;

public class Worker extends Employee{
    public Worker(String name, double daySal, int workDays, double grade) {
        super(name, daySal, workDays, grade);
    }

    //重写printSal方法

    @Override
    public void printSal() {
        System.out.println("普通员工:");
        super.printSal();
    }
}
