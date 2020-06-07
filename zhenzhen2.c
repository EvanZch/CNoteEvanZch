//
// Created by Administrator on 2020/6/7.
//
#include <stdio.h>


 int main01(){

    int n;
    char c;
    short s;


    // 指针类型，分别是int char short
    int  *ptr_n =&n;
    char  *ptr_c =&c;
     short  *ptr_s =&s;


     // 把一个整型指针转化成一个通用指针，地址不会改变，但是类型信息丢失


     printf("ptr_n address %p\n",ptr_n);
     void* ptr_void = ptr_n;
     printf("ptr_void address %p",ptr_void);

     int *ptr_n_1 = (int*) ptr_void;

     double* ptr_double  = (double*)ptr_n; // 语法正确，存在语义错误，编译器无法识别

};


int main2(){

    // 指针的算数运算符
    int a = 10;
    char b = 10;
    short c1 = 10;

    printf("%d,%d,%d",sizeof(a), sizeof(b), sizeof(c1));

    // 4,1,2

    // 1、对于变量，不同的类型占用的空间大小不一样。
    // 2、对于不同类型的指针变量，占用的空间大小一样。

    int i = 100;
    int *ptr_i = &i;
    printf("ptr_i address=%p\n",ptr_i);
    printf("ptr_i+1 address=%p\n",ptr_i+1);
    printf("ptr_i+2 address=%p\n",ptr_i+2);

    // 结果：可以看到是地址递增，且位数跟类型有关
    // ptr_i address=0xffffcc14
    // ptr_i+1 address=0xffffcc18
    // ptr_i+2 address=0xffffcc1c

    short s = 100;
    short *ptr_s = &s;
    printf("ptr_s address=%p\n",ptr_s);
    printf("ptr_s+1 address=%p\n",ptr_s+1);
    printf("ptr_s+2 address=%p\n",ptr_s+2);

    // ptr_s address=0xffffcc0a
    // ptr_s+1 address=0xffffcc0c
    // ptr_s+2 address=0xffffcc0e

    // 指针占4位，步进长度与所指类型有关


    char c = 100;
    char *ptr_c = &c;
    printf("ptr_c address=%p\n",ptr_c);
    printf("ptr_c+1 address=%p\n",ptr_c+1);
    printf("ptr_c+2 address=%p\n",ptr_c+2);

    // ptr_c address=0xffffcbf9
    //ptr_c+1 address=0xffffcbfa
    //ptr_c+2 address=0xffffcbfb


    // 指针可以进行的假发和减法运算： +、-、++、--、+=、-=


    return 0;
}


int main3(){


    // 指针与一维数组
    // 数组名就是数值的起始地址，也是第一个元素的地址，数组名就是一个常量指针

    int array[] = {1,2,3,4};

    int *ptr_array = array;


    printf("array address %p\n",&array);
    printf("ptr_array address %p\n",&ptr_array);
    printf("array address %p\n",&array[0]);


    // array address 0xffffcc10
    // ptr_array address 0xffffcc08
    // array address 0xffffcc10

    ptr_array[2] = 100;

    printf("array[2]  %d\n",array[2]); // array[2]  100

    array[3] = 200;

    printf("array[3]  %d\n",array[3]); // array[3]  200


    // 代表同一个地址

    return 0;
}


int main(){



    // 数组指针与指针数组

    // int (*prt_array)[5]   数组指针


    // int *ptr_array[5]  指针数组


    int array[] = {1,2,3,4,5};
    int *ptr_array = array;
    int (*ptr_arr2)[4] = array;
    // 实际上下面这个和上面相等  如何 int (*ptr_arr)[4] = array 这样写肯定会报错
//    int (*ptr_arr)[5] = array;


    printf("array = %p\n", array);
    printf("&array = %p\n", &array);


    printf("array + 1 = %p\n", array + 1);
    printf("&array + 1 = %p\n", &array + 1);


    // array = 0xffffcc00
    // &array = 0xffffcc00
    // array + 1 = 0xffffcc04
    // &array + 1 = 0xffffcc14  这里偏移的就是  array[5] 类型的  20个字节 这个跟编译环境有关系





    return 0;
}