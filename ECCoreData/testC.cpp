//
//  testC.cpp
//  ECCoreData
//
//  Created by yu haijian on 15/3/10.
//  Copyright (c) 2015年 Dafada (Beijing) Technology Co. All rights reserved.
//

#include "testC.h"


//二.1
void  p(int n){
    if (n == 0) return;
    int x = n;
    while (x--) {
        printf("%d",n);
    }
    printf("\n");
    n--;
    p(n);
}


//三.2、已有若干个学生数据，包括学号、姓名、成绩，编写程序要求输出这些学生数据并计算平均分。
//实现

Student::Student(string name, string number, int score){
    
    this->name = name;
    this->number = number;
    this->score = score;
}

void Student::showDetail(){
    cout<<"name:"<<this->name<<"\t"<<"number:"<<this->number<<"\t"<<"score:"<<this->score<<endl;
}

int Student::stuSocre(){
    return score;
}



void contruct(){
    Student *s1 = new Student("yu1", "235022", 90);
    s1->showDetail();
    Student *s2 = new Student("yu2", "235022", 80);
    s2->showDetail();
    Student *s3 = new Student("yu3", "235022", 70);
    s3->showDetail();
    Student *s4 = new Student("yu4", "235022", 93);
    s4->showDetail();
    Student *s5 = new Student("yu5", "235022", 68);
    s5->showDetail();
    
    Student students[5] = {
        *s1, *s2, *s3, *s4, *s5
    };
    
    float sum = 0;
    for (int i=0; i<5; i++) {
        sum += students[i].stuSocre();
    }
    
    float aveScore = sum / 5;
    cout<<"=============================================="<<endl;
    cout<<"sum:"<<sum<<endl;
    cout<<"averageScore:"<<aveScore<<endl;
    
    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);

}








