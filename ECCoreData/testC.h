//
//  testC.h
//  ECCoreData
//
//  Created by yu haijian on 15/3/10.
//  Copyright (c) 2015年 Dafada (Beijing) Technology Co. All rights reserved.
//

#ifndef __ECCoreData__testC__
#define __ECCoreData__testC__

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;



/*
 一、
 1. >=2 <=30的偶数平方和
 2. >=1 <=n 的整数平方和
 3. 字符串拷贝
 4. 找出二维数组a[][N]中的最大数的行row与列col
 5. 字符串拼接 在str1后面拼接str2
 */


void fun5(char* a, const char* b);

//二.1
void  p(int n);

//三.2、已有若干个学生数据，包括学号、姓名、成绩，编写程序要求输出这些学生数据并计算平均分。

class Student {
    
    string number;
    string name;
    int score;

public:
    Student(string name, string number, int score);
    void showDetail();
    int stuSocre();
};


//执行三.2，查看结果
void contruct();




#endif /* defined(__ECCoreData__testC__) */
