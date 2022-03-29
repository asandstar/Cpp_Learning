#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[100] = "12345";
    char s2[100] = "abcdefg";
    char s3[100] = "ABCDE";
    strncat(s1,s2,3);//将一个字符串的前n个字符连接到另一个字符串后面
    cout << "1)" << s1 << endl;
    strncpy(s1,s2,3);//拷贝字符串的前n个字符
    cout << "2)" << s1 << endl;
    strncpy(s2,s3,6);//拷贝字符串的前n个字符
    cout << "3)" << s2 << endl;
    cout << "4)" << strncmp(s1,s3,3) << endl;
    //比较s1和s3的前三个字符，比较结果是相等，输出 4) 0
    char * p = strchr(s1,'B'); 
    //在s1中查找 'B'第一次出现的位置

    if(p)// 等价于 if( p!= NULL)
        cout << "5)" << p - s1 << "," << *p << endl;
    else
        cout << "5)Not Found" << endl;
    p = strstr( s1,"45a");
    //在s1中查找字串 "45a"。s1="ABC45abc"
    
    if(p)
        cout << "6)" << p - s1 << "," << p << endl;
    else
        cout << "6)Not Found" << endl;

    //以下演示strtok用法：
    cout << "strtok usage demo:" << endl;
    char str[] = "-This,a sample string,OK.";
    //下面要从str逐个抽取出被" ,.-"这几个字符分隔的字串
    p = strtok (str," ,.-");
     //请注意，" ,.-"中的第一个字符是空格
    while ( p != NULL ){
        //只要p不为NULL，就说明找到了一个子串
        cout << p << endl;
        p = strtok(NULL, " ,.-");
        //后续调用，第一个参数必须是NULL
    }
    return 0;
}