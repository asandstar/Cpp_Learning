//已知三角形三个顶点位置, 求边长
/*
给定平面上不共线的三个点，其坐标都是整数，编写程序，
求它们构成的三角形的三条边的长度。
输入是6个整数: x1,y1,x2,y2,x3,y3代表三个点的坐标，
以任意顺序输出三条边的长度均可。
*/
#include<iostream>
using namespace std;
#define EPS 0.001
double Sqrt(double a)
{//对a开根号
    double x = a/2, lastX = x + 1 + EPS;
    while( x - lastX > EPS || lastX - x > EPS){
        lastX = x;
        x = (x + a/x)/2;
    }
    return x;
}
double Distance(double x1, double y1, double x2, double y2)
{//求两点距离
    return Sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

//调用函数，计算边长
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << Distance(x1,y1,x2,y2) << endl;
    cout << Distance(x1,y1,x3,y3) << endl;
    cout << Distance(x3,y3,x2,y2) << endl;
    return 0;
}