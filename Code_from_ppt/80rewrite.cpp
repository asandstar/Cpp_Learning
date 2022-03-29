#include<iostream>
#include<cstdio>
using namespace std;
struct Student {
char name[20];
int score;
};
int main() {
Student s;
FILE * fp = fopen("c:\\tmp\\students.dat","r+b");
if( !fp){
    printf("error\n");
    return 0;
}

fseek(fp, 2 * sizeof(s), SEEK_SET );
//定位读写指针到第三个记录
fwrite("Mike",1,5,fp);
fseek(fp, 0, SEEK_SET);
//定位读写指针到文件开头
while( fread(&s,sizeof(s),1,fp) == 1)
    printf("%s %d\n",s.name, s.score);
fclose(fp);
return 0;
}
/*理想输出总达不到
输出：
Tom 60
Jack 80
Mike 40 
*/
