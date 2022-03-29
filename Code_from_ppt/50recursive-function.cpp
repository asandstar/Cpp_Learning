//一个函数，自己调用自己
//要有终止条件，否则就会无穷递归
//导致程序无法终止甚至崩溃
/*注意本程序无法运行出结果*/
//阶乘
int F (int n)
{
    if( n < 2 )
        return 1;
    else
        return n * F (n-1);
}

//求斐波那契数列第n项
int Fib(int n)
{
    if( n == 1 || n == 2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}