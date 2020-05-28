#include <stdio.h>
#include <stdlib.h>
//
// Created by zch on 2020/5/28.
//

void test_0();

void test_1();

void test_2();


int main(){

    // 指针学习、C语言核心
    // int float char 指针 可以理解成数据类型
    // int i = 10  i 存的是10这个数值
    // int *ptr_i = &i;  ptr_i 存储的是地址

    // 指针是一种特殊的变量（指针变量），因为它保存的是另外一个变量的内存地址


    test_0();
    return 0;
}

void test_0(){

    int  i = 258;
    int *ptr_i = &i; // 存储另一个变量的内存地址，32为系统，指针占4个字节，64为系统，指针占八个字节


    printf("%p\n",&i);
    printf("%p\n",ptr_i);
    // 指针它本身也是一种变量类型，它也会有自己的地址
    printf("ptr_i address:%p\n",&ptr_i);
//    0000000000000102
//    000000000061FDEC
//    ptr_i address:000000000061FDE0




    printf("int* size=%d\n", sizeof(int*));
    printf("char* size=%d\n", sizeof(char*));
    printf("long long* size=%d\n", sizeof(long long*));
    printf("void* size=%d\n", sizeof(void*)); // void* 是一个特殊的指针，其他类型的指针都可以赋值给void*
//    int* size=8
//    char* size=8
//    long long* size=8
//    void* size=8

    test_1();

}

void test_1(){

    int i = 258;
    int j = 10001;
    int *ptr_i = &i;

    printf("%p\n",&i);
    printf("%p\n",&j);
    printf("%p\n",&ptr_i);

//    000000000061FDAC
//    000000000061FDA8
//    000000000061FDA0
//    可以看到上面的都相差8个字节


ptr_i = (int*)malloc(sizeof(int)); // 使用malloc函数，在堆上分配一块内存给ptr_i

printf("ptr_i address%p\n:",&ptr_i);  // 本身地址不变
printf("ptr_i point to address %p\n:",ptr_i);// 指向内存地址变了


free(ptr_i); // 释放地址，执行后一定要执行下面代码，不然是一个悬空地址

ptr_i = NULL; // 或者ptr_i = 0;

    printf("ptr_i point to address %p\n:",ptr_i);// 0000000000000000



// & 运算符，用来取一个对象的地址
// * 是一个间接寻址符，用来访问指针所指向的地址的值
// int *ptr :定义一个指针
// int b = *ptr  是一个间接寻址符，用来访问指针所指向的地址的值



// & 与 * 是一对互逆运算符


int var = 222,*ptr;
ptr = &var;

int temp = *ptr;

printf("var=%p\n",var);
printf("*ptr=%p\n",*ptr);
printf("temp=%p\n",temp);

}


void test_2(){




}