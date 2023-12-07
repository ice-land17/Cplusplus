package com.homework.work345;

public class HomeWork345 {
    public static void main(String[] args) {
        Manager manager = new Manager("张飞", 100, 20, 1.2);
        //设置奖金
        manager.setBonus(3000);
        //打印经理的工资情况
        manager.printSal();

        Worker worker = new Worker("刘德华", 200, 25, 1.0);
        worker.printSal();
    }
}
