#include<iostream>
using namespace std;
int main(){
    int n,m;
    printf("�ɹ�����ı�������:%d", scanf("%d%d", &n, &m));
    //ֵΪint����ʾ�ɹ�����ı�������
    /*12 56�L
        2*/
    while(scanf("%d%d", &n, &m) != EOF
    /*��scanf("%d%d",&n,&m) == 2*/){
        printf("�ͣ�%d", n+m);
        //ֵΪEOF(��-1)��˵�����������Ѿ�����
        //Windowsϵͳ��,��ͣ���������������ûس���
//��ͣ������ǵĺͣ�ֱ������ Ctrl+Z Ȼ�� �س�,�������
    }

}