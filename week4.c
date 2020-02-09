#include <stdio.h>
#include <stdlib.h>
// function//
// มักจะเขียน function ก่อนแล้วค่อย ตามด้วย main//

int addTen(int x) // เป็นการ return ค่า type, name ()
{
    x += 10;        // x = x+10 เป็นการทำงานของฟังก์ชั่น
    return x;       //เป็นการรีเทินค่าย้อนกลับ
}

int addTwenty();

int x = 50;

int main()
{

    printf("addTen(10) is %d\n",addTen(x)); //addTen(x) เป็นการเรียกใช้ Function จากข้างบน

    printf("addTwenty in main %d\n",addTwenty());

}

int addTwenty()
{

    printf("x in addTwenty = %d\n",x);

    x += 20;  // x = x+20

    return x; // return ค่า x

}

