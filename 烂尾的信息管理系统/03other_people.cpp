#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define len sizeof(student)
#define true 1

//������Ҫ����ѧ����Ϣ�Ľṹ��
struct student
{
    int num;         //ѧ��
    char name[20];   //����
    char sex;        //�Ա�
    float c_program; // c���Գɼ�
    float math;      //��ѧ�ɼ�
    float engl;      //Ӣ��ɼ�
    float aver;      //ƽ���ɼ�
    struct student *next;
};
typedef struct student student;
typedef struct student *student_link;

//ѧ����Ϣ�����ͷ���
struct student_info
{
    int stu_num;       //ѧ��������
    student_link next; //ָ���һ��ѧ��
};
typedef struct student_info *stu_info;

//��������
void menu();
int creat(stu_info head);
void output_stu(stu_info head);
void add_stu(stu_info head);
void search_stu(stu_info head);
void search_num(stu_info head);  //����ѧ�Ų���
void search_name(stu_info head); //������������
void delete_stu(stu_info head);
void delete_num(stu_info head);
void delete_name(stu_info head);

int main()
{
    struct student_info new_student_list;
    struct student_info *head;
    int point;
    head = &new_student_list;
    head->stu_num = 0;
    menu();
    while (true)
    {
        printf("\n���������Ĳ���ָ��: ");
        scanf("%d", &point);
        switch (point)
        {
        case 1:
            creat(head);
            break;
        case 2:
            output_stu(head);
            break;
        case 3:
            search_stu(head);
            break;
        case 4:
            add_stu(head);
            break;
        case 5:
            delete_stu(head);
            break;
        case 6:
            printf("�����˳�����");
            return 0;
            break;
        default:
            printf("�������");
            break;
        }
    }
}

//�����˵�����
void menu()
{
    printf("\n==============��ӭʹ��ѧ���ɼ�����ϵͳ==============");
    printf("\n\n\t\t1.�½�ѧ���ɼ���");
    printf("\n\n\t\t2.���ѧ���ɼ���");
    printf("\n\n\t\t3.��ѯѧ���ɼ�");
    printf("\n\n\t\t4.���ѧ���ɼ�");
    printf("\n\n\t\t5.ɾ��ѧ���ɼ�");
    printf("\n\n\t\t6.�˳�����ϵͳ");
}

//����ѧ������
int creat(stu_info head)
{
    student_link p, q;
    q = head->next;
    head->next = NULL;
    p = (student_link)malloc(len);
    printf("\n===========�˳�ѧ����Ϣ����ϵͳ������ѧ����ѧ��Ϊ0����˳����룡=========");
    printf("\n\n׼��¼��ѧ����Ϣ��\n\n");
    printf("���������룺ѧ�� ���� �Ա�(��/Ů)\n ");
    scanf("%d %s %c", &p->num, p->name, &p->sex);
    if (p->num == 0)
        return 0;
    while (p->num != 0)
    {
        fflush(stdin);
        printf("���������룺C���Գɼ� ��ѧ�ɼ� Ӣ��ɼ�:\n");
        scanf("%f %f %f", &p->c_program, &p->math, &p->engl);
        p->aver = (p->c_program + p->math + p->engl) / 3;
        if (head->next == NULL)
        {
            q = p;
            head->next = q;
            head->stu_num++;
            p = (student_link)malloc(len);
            printf("���������룺ѧ�� ���� �Ա�(��/Ů)\n");
            scanf("%d %s %c", &p->num, p->name, &p->sex);
        }
        else
        {
            q->next = p;
            q = p;
            head->stu_num++;
            p = (student_link)malloc(len);
            printf("���������룺ѧ�� ���� �Ա�(��/Ů)\n");
            scanf("%d %s %c", &p->num, p->name, &p->sex);
        }
    }
    q->next = NULL;
    return 0;
}

void output_stu(stu_info head) //����ͷָ����Ϊ��������
{
    student_link temp;
    temp = head->next;
    printf("\n���б�����%d��ѧ��", head->stu_num);
    printf("\n\n\n********************ѧ���ɼ���Ϣ��*********************\n\n\n");
    printf("ѧ��\t\t����\t\t�Ա�\t\t�������\t�ߵ���ѧ\t��ѧӢ��\tƽ���ɼ�\n");
    while (temp != NULL)
    {
        printf("%-12d%-12s%-12c%-12.2f%-12.2f%-12.2f%-12.2f\n", temp->num, temp->name, temp->sex,
               temp->c_program, temp->math, temp->engl, temp->aver);
        temp = temp->next;
    }
}

//����ѧ����Ϣ�����ҷ�ʽ������1.����ѧ�Ų��ң�2.������������
void search_stu(stu_info head)
{
    int choice = -1;
    if (head->next == NULL)
    {
        printf("ѧ���б�Ϊ��\n");
    }
    else
    {
        fflush(stdin);
        printf("\n��������ҷ�ʽ��1.����ѧ�Ų��ң�2.�����������ң�0.ȡ�� : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            search_num(head);
            break;
        case 2:
            search_name(head);
            break;
        case 0:
            break;
        default:
            search_stu(head);
            break;
        }
    }
}

void search_num(stu_info head) //����ѧ�Ų���
{
    int target_num; //��ѯĿ���ѧ��
    student_link p; //ѭ�����
    p = head->next;
    printf("\n�������ѯѧ����ѧ�ţ�");
    scanf("%d", &target_num);
    //ע�⣺�����ж�����һ�����ܻ���λ�ã�ԭ�򣺵�pָ��NULL֮��p��û��num��Ա�ˣ�
    //�������ж�p->num != target_num�ᵼ�³������������whileѭ�������ж���䡣
    while (p != NULL && p->num != target_num)
        p = p->next;
    if (p == NULL)
        printf("\n�б���û������ѧ������Ϣ��\n");
    else
    {
        printf("\nѧ��\t����\t�Ա�\t�������    �ߵ���ѧ    ��ѧӢ��    ƽ���ɼ�\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
    }
}

void search_name(stu_info head) //������������
{
    student_link p;
    char name[20];
    int count = 0; //��¼��������ѧ������������ͬ������
    p = head->next;
    printf("\n�����뱻��ѯѧ����������");
    scanf("%s", name);
    printf("\nѧ��\t����\t�Ա�\t�������    �ߵ���ѧ    ��ѧӢ��    ƽ���ɼ�\n");
    while (p != NULL)
    {
        if (strcmp(p->name, name) == 0)
        {
            printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
                   p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
            count++;
            p = p->next; //�������ң���ֹ����
        }
        else
            p = p->next;
    }
    if (count == 0)
        printf("�б���û������ѧ������Ϣ��\n");
}

//���ѧ����Ϣ
void add_stu(stu_info head)
{
    student_link p, q;
    int index;
    q = head->next;
    p = (student_link)malloc(len); //��д�¼���ѧ���Ļ�����Ϣ
    printf("\n�����¼���ѧ������ϸ��Ϣ�������������£�\n");
    printf("\n�������룺ѧ�� ���� �Ա�(m/w)\n");
    scanf("%d %s %c", &p->num, p->name, &p->sex);
    fflush(stdin);
    printf("\n�������룺C���Գɼ� ��ѧ�ɼ� Ӣ��ɼ�\n");
    scanf("%f %f %f", &p->c_program, &p->math, &p->engl);
    p->aver = (p->c_program + p->math + p->engl) / 3; //��д����
    printf("\n��������ͬѧ��λ�ã�");
    scanf("%d", &index);
    if (index <= 0)
    {
        printf("\n����λ���������");
    }
    else if (index == 1) //���뵽ѧ���б��һ��λ��
    {
        p->next = head->next;
        head->next = p;
        head->stu_num++;
    }
    else if (index > 1 && index <= head->stu_num) //���뵽�м�λ�õĵ�index��
    {
        for (int i = 1; i < index - 1; i++)
            q = q->next;
        p->next = q->next; // p���¿��ٽ�㣬q��Ҫ����λ�õ�ֱ��ǰ�ý��
        q->next = p;
        head->stu_num++;
    }
    else if (index > head->stu_num) //���뵽ĩβ
    {
        while (q->next != NULL)
            q = q->next;
        q->next = p;
        p->next = NULL;
        head->stu_num++;
    }
}

//ɾ��ָ��ѧ������Ϣ
void delete_stu(stu_info head)
{
    int choice = -1;
    if (head->next == NULL)
        printf("ѧ���б�Ϊ��\n");
    else
    {
        printf("\n��������ҷ�ʽ��1.����ѧ�Ų��ң�2.�����������ң�0.ȡ�� : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            delete_num(head);
            break;
        case 2:
            delete_name(head);
            break;
        case 0:
            break;
        default:
            delete_stu(head);
            break;
        }
    }
}

//����ѧ�Ų���ɾ��
void delete_num(stu_info head)
{
    int num;        //ѧ��ѧ��
    student_link p; //ָ��ɾ���ڵ��ǰ�����
    student_link q; //ָ��ɾ�����
    p = head->next;
    printf("\n������׼��ɾ����ѧ����ѧ�ţ�");
    scanf("%d", &num);
    if (p->num == num) //���ж��Ƿ��ǵ�һ����㣬����pָ��ɾ�����
    {
        printf("����ͬѧ��Ϣ���£�\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
        head->next = p->next;
        free(p);
        printf("��ͬѧ��Ϣ�Ѿ�ɾ����\n");
        head->stu_num--;
    }
    else
    {
        while (p->next != NULL && p->next->num != num) //����pָ��ɾ������ֱ��ǰ�����
            p = p->next;
        if (p->next == NULL)
            printf("���޴���\n");
        else
        {
            q = p->next; // qָ��ɾ�����
            printf("����ͬѧ��Ϣ���£�\n");
            printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", q->num,
                   q->name, q->sex, q->c_program, q->math, q->engl, q->aver);
            p->next = q->next;
            free(q);
            printf("��ͬѧ��Ϣ�Ѿ�ɾ����\n");
            head->stu_num--;
        }
    }
}

//������������ɾ��
void delete_name(stu_info head)
{
    student_link p, q;
    char name[20];
    int count = 0; //��¼ͬ������
    printf("��������Ҫɾ����ѧ��������");
    scanf("%s", name);
    p = head->next;
    if (strcmp(p->name, name) == 0)
    {
        printf("����ͬѧ��Ϣ���£�\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
        head->next = p->next;
        printf("ѧ��%s����Ϣ�Ѿ���ɾ����\n", p->name);
        free(p);
        head->stu_num--;
    }
    else
    {
        q = p->next;
        while (q != NULL)
        {
            if (strcmp(q->name, name) == 0)
            {
                printf("����ͬѧ��Ϣ���£�\n");
                printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", q->num,
                       q->name, q->sex, q->c_program, q->math, q->engl, q->aver);
                p->next = q->next;
                printf("ѧ��%s����Ϣ�Ѿ���ɾ����\n", q->name);
                free(q);
                q = p->next;
                count++;
                head->stu_num--;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        if (count == 0)
            printf("���޴��ˡ�\n");
    }
}
