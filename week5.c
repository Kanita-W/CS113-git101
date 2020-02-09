#include <stdio.h>
//pointer//

int main()
{

    int x = 100; 

    int a = 0144;

    int b = 0x64;

    printf("x = %d\n", x);

    printf("reference x = %lu\n", &x); //ampersand ใช้

    // lu == long unsigned//

    printf("reference x = %p\n", &x);

    int number[] = {3, 4, 5, 6, 7}; // เป็นการเก็บอาเรย์ที่มีขนาดเป็น 5 (อาเรย์เป็น pointer)


    printf("index 1 = %d\n", number[1]);

    printf("reference number[1] = %p\n", &number[1]);

    printf("reference number[0] = %p\n", &number[0]);

    printf("reference number = %p\n", &number );

    //address ของ number กับ number[0] มีค่าเท่ากัน

    printf("reference number + 1= %p\n", &number + 1); // address + 1 byte 


    number[2000] = 2000;

    printf("index 2000 = %d\n", number[2000]);

    printf("reference number[2000] = %p\n", &number[2000]); // print pointer//


    int number[] = {3, 4, 5, 6, 7}; 

    int *ptr = &x; //เป็นการชี้ตำแหน่งที่ prt เก็บไว้ในค่าที่ x

    //pointer เป็นการเก็บ ที่อยู่

    int *arrPtr;

    arrPtr = number; // 00

    //ไม่ต้องมี * มีเพราะassignเรียบร้อยแล้ว

    arrPtr += 2; 

    *arrPtr = *arrPtr + 10; //ดึงเลข 5 มาแล้ว + 10 assign ค่ากลับไปที่ number[3]ด้วยนะห้ามลืม!!

    printf("arrptr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);

    printf("number[2] = %d\n",number[2]);


    int number[] = {3, 4, 5, 6, 7}; //เป็นการเก็บอาเรย์ที่มีขนาด 5 

    for (int *ptr = number; ptr <= &number[4]; ptr++) //print ตั้งแต่ number 0 - 4
    { 

        printf("[%p] = %d\n", ptr, *ptr); // %p เป็นการปริ้นแบบบอกตำแหน่งของ pointer

    }

    int *ptr2 = number;

    for(int i = 0; i < 5; i++)
    {

        printf("[%p] = %d\n",ptr2 + i, *(ptr2+i));

    }

    char input[100];

    int count = 0;

    char c;

    while ( (c =getchar()) != '\n' )
    {

        input[count] = c;

        ++count;

    }

    input[count] = '\0'; // รับค่าเองต้องใส่ \0

    for (char *cPtr = input; *cPtr != '\0'; cPtr++)
    {

        printf("%c\n",*cPtr);

    }

}