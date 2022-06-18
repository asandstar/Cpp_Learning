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