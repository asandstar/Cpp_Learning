//判断子串的函数
/*编写一个函数:
int Strstr(char s1[],char s2[]);
如果s2不是s1的字串，返回 -1
如果s2是s1的子串，返回其在s1中第一次出现的位置
空串是任何串的子串，且出现位置为0 */
#include<iostream>
using namespace std;

    int Strstr(char s1[], char s2[])
    {
        if( s2[0] == 0)
            return 0;
        for(int i = 0; s1[i]; ++i){
            int k = i,j = 0;
            for( ; s2[j]; ++j,++k){
                if(s1[k] != s2[j])
                    break;
            }
            if( s2[j] == 0)
                return i;
        }
        return -1;
    }
//我居然不会调用呜呜呜