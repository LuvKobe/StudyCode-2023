#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode
{
	ElemType data; //������
	struct LNode* next; //ָ���� 
}LNode, *LinkList;

// LNode*�ǽṹ��ָ��, ��LinkList��ȫ�ȼ� 
//void list_head_insert(LNode* &L) 

//ͷ�巨 
void list_head_insert(LNode* &L)
{
	//1.����ͷ�ڵ�Ŀռ�, ͷָ��ָ��ͷ�ڵ�
	L = (LNode*)malloc(sizeof(LNode)); 
	L->next = NULL;
	
	//2.�����½ڵ����� 
	ElemType x;
	scanf("%d", &x);
	while (x != 9) //�������Ľڵ����ݵ���9, ��ô��ֹͣ���� 
	{
		LNode* s = (LNode*)malloc(sizeof(LNode)); //����һ���½ڵ� 
		s->data = x; //������x�����½ڵ���������� 
		s->next = L->next; //���½ڵ��nextָ��ԭ������ĵ�һ���ڵ� 
		L->next = s; //��ͷ�ڵ��nextָ���½ڵ� 
		scanf("%d", &x); //����������Ҫ��������� 
	}
}

//β�巨�½����� 
void list_tail_insert(LNode* &L)
{
	//1.����ͷ�ڵ�ռ�
	L = (LNode*)malloc(sizeof(LNode));
	LNode* r = L; //����βָ��, һ��ʼָ��ͷ�ڵ� 
	
	//�����������
	ElemType x;
	scanf("%d", &x);
	while (x != 9) //�������Ľڵ����ݵ���9, ��ô��ֹͣ����
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s; //��β�����ָ���½��
		r = s; //rָ���µı�β���
		scanf("%d", &x);
	} 
	r->next = NULL; //β���� next ָ�븳ֵΪ NUL
}

//��λ�ò��� 
LNode* GetElem(LNode* L, int pos)
{
	int i = 0;
	while (L && i < pos) //�������Ϊ��, ����i < pos, �ͽ���ѭ�� 
	{
		L = L->next;
		i++;
	}
	return L;
} 

//��ֵ����
LNode* LocateElem(LNode* L, ElemType val)
{
	while (L)
	{
		if (val == L->data)
			return L;
		L = L->next;	
	}
	return NULL;	
} 

//����pos��λ�ò���Ԫ��val 
void list_front_insert(LNode* L, int pos, ElemType val)
{
	LNode* forePos = GetElem(L, pos - 1);
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	newNode->data = val;
	newNode->next = forePos->next;
	forePos->next = newNode;
}

//ɾ����i��λ�õ�Ԫ��
void ListDelete(LNode* &L, int i)
{
	LNode* forePos = GetElem(L, i - 1);
	//if (NULL == forePos)
	//	return false;
	LNode* nodei = forePos->next;
	forePos->next = nodei->next;
	free(nodei);
	//return true;
}

void Print(LNode* L)
{
	if (L->next == NULL)
		printf("����Ϊ��\n");
	L = L->next;
	while (L != NULL)
	{
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");
}

int main()
{
	LNode* L; //L������ͷָ��, �ǽṹ��ָ������
	
	//ÿ�ζ�������ͷ������ڵ� 
	//list_head_insert(L); 
	//Print(L);
	
	//ÿ�ζ�������β������ڵ�
	list_tail_insert(L);
	Print(L);
	
	//��λ�ò���
	/*LinkList search; //search��һ��ָ��, �����洢����λ�õĽڵ�
	search = GetElem(L, 2); 
	if (search)
	{
		printf("Success in searching by serial number: %d\n", search->data);
	}
	
	//��ֵ���� 
	search = LocateElem(L, 6);
	if (search)
	{
		printf("Success in searching by serial number: %d\n", search->data);
	}
	else {
		printf("find error\n");
	}*/
	
	//���½ڵ�����i��λ�� 
	//list_front_insert(L, 2, 99); 
	//Print(L);
	
	//ɾ����i��λ�õ�Ԫ��
	ListDelete(L, 1);
	Print(L);
	return 0;
}
