#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct link_test{
	
	int data;
	struct link_test *next;
	
}link;
//创建一个节点，给节点赋值data，next为空
link *creatnode(int data)
{
	link *node;
	node = (link *)malloc(sizeof(link));//在堆上为节点分配内存空间
	if(node == NULL)printf("creat link error!\n");//空间分配错误
	else
	{
		node->data = data;//给节点赋值数据
		node->next = NULL;//节点指向空，如需指向下一个，在插入中赋值
	}
	return node;//返回当前节点的地址
}
//头插法
link *topinsert(link *header,link *newnode)
{
	link *posnode = header;//当前节点的位置，可以不要
	newnode->next = posnode->next;//新节点的next等于头节点(posnode)的next(NULL)
	posnode->next = newnode;//头节点的next指向newnode(新建节点)

	
}
//尾插法
link *tailinsert(link *header,link *newnode)
{
	link *posnode = header;//当前节点的位置
	while(posnode->next != NULL)//当前位置的next不是NULL，说明没有到尾部
	{
		posnode = posnode->next;//则将当前节点指向下一个的节点的地址
	}
	//当前节点的next是null，到达了链表尾部
	newnode->next = posnode->next;//则将新节点的next设置为null
	posnode->next = newnode;//当前节点next指向新节点
	
}
//删除
link *deletenode(link *header,int data)
{
	link *frontnode;//保存要删除节点的前一个节点的位置
	link *posnode = header;//当前节点位置
	//判断当前节点的数据是不是要删除的那个节点的数据
	while(posnode->data != data)
	{
		//不是要删除的节点，则将前一个节点指针指向当前节点
		frontnode = posnode; 
		//将当前节点指针指向下一个节点
		posnode = posnode->next;
	}
	//查找到了要删除的数据,将前一个节点的next指向当前节点的next
	frontnode->next = posnode->next;
	//释放当前节点的空间
	free(posnode);
	
}
//遍历节点
void printflink(link *header)
{
	link *posnode = header;//当前节点的位置
	posnode = posnode->next;//头节点不需要打印，将当前节点指向写一个节点
	//如果当前节点next指向空，则打印为空链表
	if(posnode == NULL)printf("link is konglink\n");
	//当前节点指向的下一个节点不是空，打印下一个节点
	while(posnode != NULL)
	{
		//打印节点的值
		printf("posnode->data:%d.\n",posnode->data);
		//移动当前节点位置到下一个节点。
		posnode = posnode->next;
	}
	
	
}
int main()
{
	link *header = creatnode(0);//创建头指针
	topinsert(header,creatnode(1));
	topinsert(header,creatnode(2));
	topinsert(header,creatnode(3));
	tailinsert(header,creatnode(5));
	topinsert(header,creatnode(4));
	deletenode(header,2);
	printflink(header);
	
}







