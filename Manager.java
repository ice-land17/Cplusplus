package com.homework.work345;

public class Manager extends Employee {
    //创建Manager对象时，奖金是多少并不是确定的，因为老师在构造器中，不给bonus
    // 可以通过setBonus
    private double bonus;


    public Manager(String name, double daySal, int workDays, double grade) {
        super(name, daySal, workDays, grade);
    }

    //重写父类的printSal方法

    @Override
    public void printSal() {
        //因为经理的工资计算方式和Employee不一样,所以进行重写
        System.out.println(" 经理 " + getName() + " 工资是 ="
                + (bonus + getDaySal() * getWorkDays() * getGrade()));
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }
}
