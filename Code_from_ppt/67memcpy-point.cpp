/*
头文件cstring中声明:
void * memcpy(void * dest, void * src, int n);
将地址src开始的n个字节，拷贝到地址dest。返回值是dest。
将数组a1的内容拷贝到数组a2中去，结果是a2[0] = a1[0], a2[1] = 
a1[1]……a2[9] = a1[9] ：

int a1[10];
int a2[10];
memcpy( a2, a1, 10*sizeof(int));

*/
//编写内存操作库函数memcpy
/*
void * MyMemcpy( void * dest , const void * src, int n)
{
char * pDest = (char * )dest;
char * pSrc = ( char * ) src;
for( int i = 0; i < n; ++i ) {
//逐个字节拷贝源块的内容到目的块
* (pDest + i) = * ( pSrc + i ); 
}
return dest;
}
有缺陷，在dest区间和src区间有重叠时可能出问题!!!
*/

