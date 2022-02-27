#include"stdio.h"

int getNum(void); //สร้างตัวเเปรเก็บค่า global
int sqr(int x);
int printOne(int x);

int main(){
    int a; 
    int b;
    a = getNum(); // 1.ให้ a เก็บค่าใน func getnum 2.ได้จาก getnum จะ a = 10
    b = sqr(a); // ให้ b เก็บค่าใน func sqr โดยมีเอาค่าจาก a 2.ได้จาก sqr ไปคำนวนเสร็จเเล้วคืนค่ากลับมาให้ตัว b
    printOne(b); // เก็บค่าที่ได้จาก b ไปที่ printone 2.ให้ printone ทำการเก็บค่า b ไปที่ paramater ของ int x ใน printone
    return 0;
}
int getNum(void) { //func1
    int numIn; 
    scanf("%d",&numIn); //รับค่าทาง keybord
    return numIn; //return ค่ากลับไปที่ getnum
}

int sqr(int x) { //func2
    return x*x;
}
int printOne(int x) { //func3
    printf("The value is: %d\n", x); //print ค่าออกมา
    return 0;
}