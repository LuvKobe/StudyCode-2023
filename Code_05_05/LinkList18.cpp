#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode
{
	ElemType data; //数据域
	struct LNode* next; //指针域 
}LNode, *LinkList;

// LNode*是结构体指针, 和LinkList完全等价 
//void list_head_insert(LNode* &L) 

//头插法 
void list_head_insert(LNode* &L)
{
	//1.申请头节点的空间, 头指针指向头节点
	L = (LNode*)malloc(sizeof(LNode)); 
	L->next = NULL;
	
	//2.输入新节点数据 
	ElemType x;
	scanf("%d", &x);
	while (x != 9) //如果插入的节点数据等于9, 那么就停止插入 
	{
		LNode* s = (LNode*)malloc(sizeof(LNode)); //申请一个新节点 
		s->data = x; //把数据x放入新节点的数据域中 
		s->next = L->next; //把新节点的next指向原来链表的第一个节点 
		L->next = s; //让头节点的next指向新节点 
		scanf("%d", &x); //又重新输入要插入的数据 
	}
}

//尾插法新建链表 
void list_tail_insert(LNode* &L)
{
	//1.申请头节点空间
	L = (LNode*)malloc(sizeof(LNode));
	LNode* r = L; //定义尾指针, 一开始指向头节点 
	
	//定义插入数据
	ElemType x;
	scanf("%d", &x);
	while (x != 9) //如果插入的节点数据等于9, 那么就停止插入
	{
		LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s; //让尾部结点指向新结点
		r = s; //r指向新的表尾结点
		scanf("%d", &x);
	} 
	r->next = NULL; //尾结点的 next 指针赋值为 NUL
}

//按位置查找 
LNode* GetElem(LNode* L, int pos)
{
	int i = 0;
	while (L && i < pos) //如果链表不为空, 并且i < pos, 就进入循环 
	{
		L = L->next;
		i++;
	}
	return L;
} 

//按值查找
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

//往第pos个位置插入元素val 
void list_front_insert(LNode* L, int pos, ElemType val)
{
	LNode* forePos = GetElem(L, pos - 1);
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	newNode->data = val;
	newNode->next = forePos->next;
	forePos->next = newNode;
}

//删除第i个位置的元素
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
		printf("链表为空\n");
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
	LNode* L; //L是链表头指针, 是结构体指针类型
	
	//每次都在链表头部插入节点 
	//list_head_insert(L); 
	//Print(L);
	
	//每次都在链表尾部插入节点
	list_tail_insert(L);
	Print(L);
	
	//按位置查找
	/*LinkList search; //search是一个指针, 用来存储查找位置的节点
	search = GetElem(L, 2); 
	if (search)
	{
		printf("Success in searching by serial number: %d\n", search->data);
	}
	
	//按值查找 
	search = LocateElem(L, 6);
	if (search)
	{
		printf("Success in searching by serial number: %d\n", search->data);
	}
	else {
		printf("find error\n");
	}*/
	
	//把新节点插入第i个位置 
	//list_front_insert(L, 2, 99); 
	//Print(L);
	
	//删除第i个位置的元素
	ListDelete(L, 1);
	Print(L);
	return 0;
}
