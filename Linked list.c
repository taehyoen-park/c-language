#include<stdio.h>
#include<stdlib.h>
//노드만들기 

struct NODE{
 	struct NODE *next;
 	int data;
};
 
void ADDNODE(struct NODE *target, int data)
{
	struct NODE *NEWNODE = malloc(sizeof(struct NODE));
	
	NEWNODE->next = target->next;
	NEWNODE->data = data;
	
	target->next = NEWNODE;
}

void removenode(struct NODE *target)
{
	struct NODE *removeNode = target->next;
	target->next = removeNode->next;
	
	free(removeNode);
}

void DELNODE(struct NODE *target,int data)
{
	
}

int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));
	struct NODE node1;
	struct NODE node2;
	
	head->next = &node1;
	node1.data = 10;
	
	node1.next = &node2;
	node2.data = 20;
	
	node2.next = NULL;
	
	ADDNODE(&node2,40);
	removenode(&node2);

	struct NODE *cull = malloc(sizeof(struct NODE));
	cull = head->next;
	while(cull != NULL)
	{
		printf("%d\n",cull->data);
		cull = cull->next;
	}
	
	free(head);
	
	return 0;
}
