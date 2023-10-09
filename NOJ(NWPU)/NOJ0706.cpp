/*
题目内容：编写程序建立一个链表，每个结点包括：学号、姓名、年龄，输入一个学号，
如果链表中的结点包括该学号，则输出该结点内容后，并将其结点删去。
输入格式：连续输入学号int no、姓名char name[12]、年龄int age，结束学号输入0。再输入查找节点学号。
输出格式：输出第1行为原链表，第2行为删除节点后的链表。
输入样例：
101 zhang 18
102 wang 21
103 zhou 19
104 chen 20
105 huang 20
0
103
输出样例：
101 102 103 104 105
101 102 104 105
*/
#include <iostream>
using namespace std;
typedef struct Elemtype;

struct LNode
{
    Elemtype data; //代表数据域
    LNode *next;   //代表指针域，指向直接后继元素
};

// LNode 结构体重命名为LinkList
typedef LNode *LinkList;
//
void input(Elemtype *data)
{
    cin >> data.no >> data.name >> data.age;
}
void CreateLinkF(LinkList *L, int n, void (*input)(Elemtype *))
{
    LinkList s;
    *L = new LNode;
    (*L)->next = NULL;
    for (; n > 0; n--)
    {
        s = new LNode;
        input(&s->data);
        s->next = (*L)->next;
        (*L)->next = s;
    }
}
int main()
{
    LinkList L;
    int n;
    cin >> n;
    CreateLinkF(&L, n, input);
}
