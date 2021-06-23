#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node{
	char value;
	struct Node* next;
	struct Node* prev;
};

struct Node* newNode(char value)
{
	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	p->value=value;
	return p;
}


void printCode(struct Node* head)
{
	struct Node* p=head;
	while(p!=NULL)
	{
		printf("%s",p->value);
		p=p->next;
	}
}


struct Node* addNode(char value,struct Node* head)
{
	struct Node* new=newNode(value);
	if(head==NULL)
	{
		head=new;
		head->next=NULL;
		head->prev=NULL;
				return;
	}
	struct Node* p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=new;
	new->prev=p;
	p->next=NULL;
	printCode(head);
	
	return;
}



void codeResult(struct Node* head){
	struct Node* p=head;
	struct Node* temp;
	int deleteItem,j;
	while(p!=NULL)
	{
		if(p->value<57 && p->value>48)
		{
			deleteItem=(int)p->value;
			for(j=0;j<deleteItem;j++)
			{
				if(p->prev!=NULL){
					temp=p->prev;
					p->prev=temp->prev;
					temp->prev->next=p;
				}
				else{
					printf("Wrong Code");
					break;
				}			
			}
		}
	}
	
	printCode(head);
}
void codeCreate(struct Node* head){
	char *code;
	int i=0;
	printf("Code:");
	scanf("%s",&code);
	while(*(code+i)!='\0')
	{
		printf("%s",code[i]);
		addNode(code[i],head);
		i++;
	}
	codeResult(head);
	printf("\n\n");
}

int main(int argc, char *argv[]) {
	struct Node* headCasusBir;
	struct Node* headCasusIki;
	
	codeCreate(headCasusBir);
	codeCreate(headCasusIki);
	struct Node* p;
	struct Node* x;
	p=headCasusBir;
	x=headCasusIki;
	while(p!=NULL && x!=NULL){
		if(p->value==x->value)
		{
			p=p->next;
			x=x->next;
		}
		else{
			printf("Wrong Match!!!");
			return;
		}
	}
	printf("\n\nIletisim Kuruldu");
	return 0;
}
