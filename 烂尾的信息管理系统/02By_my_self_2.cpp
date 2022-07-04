#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
// ѭ������ṹ head->[,->next]...[data0,->next][data1,->next]...[datan,->head]
struct SCORE
{
    int courseId;
    int score;
    SCORE *pnext;
};
struct STU_SCORE
{
    char name[16];
    int stuId;
    SCORE *scoreHead; //ѧ���γ̳ɼ��б�
    struct STU_SCORE *pnext;
};
typedef STU_SCORE *Linklist;

int mainMenu();
int stuReg(STU_SCORE *pHead);
int selCourse(STU_SCORE *pHead);
int inputData(STU_SCORE *pHead);
int scoreSort(STU_SCORE *pHead);
int scoreQuery(STU_SCORE *pHead);
int modify(STU_SCORE *pHead);
int main(int argc, char *argv[])
{
    STU_SCORE *head = (STU_SCORE *)malloc(sizeof(STU_SCORE));
    head->stuId = -1;
    head->pnext = head;
    while (1)
    {
        int cmd = mainMenu();
        switch (cmd)
        {
        case 0:
            stuReg(head);
            break;
        case 1:
            selCourse(head);
            break;
        case 2:
            inputData(head);
            break;
        case 3:
            scoreQuery(head);
            break;
        case 4:
            modify(head);
            break;
        case 5:
            return 0;
        }
    }
    return 0;
}
int mainMenu()
{
    system("cls");
    cout << "\t\t��ѧ���ɼ�����ϵͳ��\n";
    cout << " \t\t[0]����ע��\n";
    cout << " \t\t[1]ѡ�εǼ�\n";
    cout << " \t\t[2]ѧ���ɼ�����\n";
    cout << " \t\t[3]�ɼ���ѯ\n";
    cout << " \t\t[4]�޸ĳɼ�\n";
    cout << " \t\t[5]�˳�\n";
    cout << "����? ";
    int cmd;
    cin >> cmd;
    return cmd;
}
int coun = 0;
//����ע�᣺����ѧ����Ϣ�����Ӽ�������ѧ������ѧ�ţ����뵽�����С�
int stuReg(STU_SCORE *pHead)
{
    {
        cout << "ע�⣺����ע��ѧ�Ų����ظ���\n";
        int ID;
        char name[16];
    start:
        cin >> name >> ID;
        STU_SCORE *L = (STU_SCORE *)malloc(sizeof(STU_SCORE));
        STU_SCORE *p = (STU_SCORE *)malloc(sizeof(STU_SCORE));
        if (coun == 0)
        {
            *L->name = *name;
            L->stuId = ID;
            L->pnext = NULL;
        }
        else
        {
            *p->name = *name;
            p->stuId = ID;
            p->pnext = L->pnext;
            cout << "�����µ�ע��?";
            char c;
            cin >> c;
            if (c == 'y' || c == 'Y')
                goto start;
            coun = coun + 1;
        }
    }

    return 0;
}

//ѧ��ѡ��
int selCourse(STU_SCORE *pHead)
{
start:
    int cid;
    cout << "�γ̺ţ�";
    cin >> cid;
    cout << "����ѡ��ÿγ̵�ѧ��ѧ�ţ�";
    int stuId;
    cin >> stuId;
    while (stuId > 0)
    {
        STU_SCORE *pStu = pHead->pnext;
        while (pStu != pHead) //�������м�¼
        {
            if (pStu->stuId == stuId) //�и�ѧ��
            {
                bool be = false;
                SCORE *pcourse = pStu->scoreHead->pnext;
                while (pcourse != pStu->scoreHead) //����ѡ��
                {
                    if (pcourse->courseId == cid)
                    {
                        be = true; ////���и�ѡ��
                        break;
                    }
                    pcourse = pcourse->pnext;
                }
                if (!be)
                { //��û��ѡ�˿γ�
                    SCORE *pNewcourse = (SCORE *)malloc(sizeof(SCORE));
                    pNewcourse = new SCORE;
                    pNewcourse->courseId = cid;
                    pNewcourse->pnext = pStu->scoreHead->pnext;
                    pStu->scoreHead->pnext = pNewcourse;
                }
            }
            pStu = pStu->pnext;
                }
        cin >> stuId;
    }
    int count = 0;
    STU_SCORE *pStu = pHead->pnext;
    while (pStu != pHead) //�������м�¼
    {
        SCORE *pcourse = pStu->scoreHead->pnext;
        while (pcourse != pStu->scoreHead)
        {
            if (pcourse->courseId == cid)
            {
                count++;
            }
            pcourse = pcourse->pnext;
        }
        pStu = pStu->pnext;
    }
    cout << "����" << count << "��ѧ��ѡ�˿γ�\n";
    cout << "�����µ�ѡ������?";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto start;
    return 0;
}
//ѧ���ɼ�����
int inputData(STU_SCORE *pStuHead)
{
    int count;
start:
    count = 0;
    cout << "�γ̺ţ�";
    int cid;
    cin >> cid;
    STU_SCORE *pStu = pStuHead->pnext;
    while (pStu != pStuHead) // if��������ѧ����¼
    {
        SCORE *pcourse = pStu->scoreHead->pnext;
        while (pcourse != pStu->scoreHead)
        {
            if (pcourse->courseId == cid)
            {
                cout << "ѧ��:" << pStu->stuId << "  ����:" << pStu->name;
                cout << "  �ɼ���";
                if (pcourse->score >= 0)
                    cout << "������";
                else
                {
                    cin >> pcourse->score;
                    count++;
                }
                break;
            }
            pcourse = pcourse->pnext;
        }
        pStu = pStu->pnext;
    }
    if (count == 0)
        cout << "�ÿγ���ѧ��ѡ��\n";
    else
        cout << cid << "�γ̳ɼ����������!"
             << "\n";
    cout << "���������γ̳ɼ�����?";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto start;
    return 0;
}
//�γ̳ɼ���ѯ
int scoreQuery(STU_SCORE *pStuHead)
{
    int id;
    cin >> id;
    STU_SCORE *p = pStuHead;
    STU_SCORE *pStu = pStuHead->pnext;
    SCORE *pcourse = pStu->scoreHead->pnext;

    if (p->stuId == id)
    {
        while (pcourse != NULL)
        {
            cout << "ѧ��:" << pStu->stuId << "  ����:" << pStu->name;
            cout << "  �ɼ���" << pcourse->score;
            pcourse = pcourse->pnext;
        }
    }
    else
        p = p->pnext;

    return 0;
}
//�γ̳ɼ��޸�
int modify(STU_SCORE *pStuHead)
{
    int sId;
    cout << "ѧ�ţ�";
    cin >> sId;
    int cId;
    cout << endl
         << "�γ̺ţ�";
    cin >> cId;
    STU_SCORE *p = pStuHead;
    STU_SCORE *pStu = pStuHead->pnext;
    SCORE *pcourse = pStu->scoreHead->pnext;
    int scr;
    while (p->stuId != sId)
    {
        if (pcourse->courseId == cId)
        {
            cout << "ԭ�ɼ���" << pcourse->score << "  �ɼ��޸�Ϊ��";
            cin >> scr;
            pcourse->score = scr;
        }
        else
        {
            pcourse = pcourse->pnext;
        }

        p = p->pnext;
    }

    return 0;
}
