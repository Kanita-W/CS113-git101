#include <stdio.h>
#include <stdlib.h>
// data type//

int main(){

    char name[20];
    char number[5];
    // printf("Enter name : ");

    // gets(name); // เป็นสตริง ไม่ต้องระบุช่องการรับค่ามา

    // fgets(name , 20 , stdin); // เป็น (ชื่อ, ขนาด, สแตนดาดอินพุท)

    // getchar();  // เป็นคาแรคเตอร์ มันกิน enter(\n) ด้วยนะ

    //fgets(number,5,stdin); // มีเลขไว้ประมาณค่าบอกจำนวนช่องว่างว่ารับกี่ช่อง ซึ่ง enter(\n) นับเป็น 1 ช่อง

    //int i = atoi(number); // Array to integer

    //printf("%s",name);

    //printf("number = %s , i = %d",number , i); //เราต้องกำหนดarrayไว้เผื่อ \0

    // fgets(number,5,stdin);

    // int i = atoi(number);

    // puts(number);

    // putchar(100);

    // putchar('u');


    // int found = 0;

    // float isExist = 0.0;

    // char isOnline = '\0'; //  \0 is False , else is True

    // fgets(number, 5, stdin);

    // int i = atoi(number);

    // if(i > 0 && i <= 10){

    //     printf("if = %d\n" , i > 0 && i <= 10 );

    // }else if (i <= 20 || !found){

    //     printf("else if\n");

    // }else
        //{

    //     printf("else\n");


    // }

    // fgets(number, 5, stdin);

    int i = atoi(number);

    // int count = 0;

    // while (count < i ){

    //     count++ * count - 5;

    //    // ++count * count - 5; // ให้ผลลัพธ์เหมือนกันแต่ ++countทำงานเร็วกว่า

    //    printf("count = %d\n", count);

    //}


    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n", j);
    }
    while (1) //เหมือน while True
    {

    }

}