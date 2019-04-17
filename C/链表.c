
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
	int num;
	struct node *next;
};
 
int main()
{
	struct node *head;    //声明表头head(链表开始的位置)
	head=NULL; 		//建一个空表
	struct node *p1,*p2;
	int i=1;
	//利用malloc()申请分配节点(也就是一个地址)
	p1=p2=(struct node*)malloc(sizeof(struct node));		//新节点
	printf("请输入值，值小于等于0结束，值存放地址为：p1_ADDR= %d\n",p1); 
    scanf("%d",&p1->num);
    p1->no=i;
    p1->next=NULL;
    while(p1->num>0)  		//输入的节点数值大于0
	{
		if(head==NULL)
			head=p1;  		//空表，接入表头
		else
			p2->next=p1;  	//非空表，接到表尾
		p2=p1;
		
		p1=(struct node*)malloc(sizeof(struct node));		//下一个新节点
		i=i+1; 
   		printf("请输入值，值小于等于0结束，值存放地址为：p%d_ADDR= %d\n",i,p2); 
   		scanf("%d",&p1->num);//输入节点的值
   		p1->no=i;
   		//判断一下是否有后续节点要接入链表，若无则结束;  
	}
	free(p1);		 //申请到的没录入，所以释放掉  
 	p1=NULL;  	//使指向空  
  	p2->next = NULL; 	//到表尾了，指向空  
  	printf("链表输入结束（END）\n");
	getchar();
    return 0;
}
--------------------- 
作者：Kitaibel 
来源：CSDN 
原文：https://blog.csdn.net/Kitaibel/article/details/79826950 
版权声明：本文为博主原创文章，转载请附上博文链接！