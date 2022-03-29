#include<iostream>
#include<cstdio>
using namespace std;
struct Student{
    char name[20];
    int score;
};
int main(){
    Student s;
    FILE * fp = fopen("c:\\tmp\\student.dat","wb");
    while(scanf("%s%d",s.name,&s.score) != EOF)
        fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    return 0;
}