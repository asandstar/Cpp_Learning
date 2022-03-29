#include<iostream>
#include<cstdio>
using namespace std;
struct Student{
    char name[20];
    int score;
};
int main(){
    Student s;
    FILE * fp = fopen("c:\\tmp\\student.dat","rb");
    while(fread(&s,sizeof(s),1,fp) == 1)
        printf("%s %d\n",s.name,s.score);
    fclose(fp);
    return 0;
}
//一次读写一个数组
//Student students[20];
//fread(students,sizeof(Student),20,fp);
//fwrite(students,sizeof(Student),20,fp);
/*
用二进制文件存学生信息比用文本方式存的好处：
1） 可能节约空间
2） 便于快速读取、改写单个学生信息
3) 便于排序、查找学生信息
*/