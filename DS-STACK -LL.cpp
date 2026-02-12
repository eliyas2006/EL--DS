#include<stdio.h>
#include<stdlib.h>

//structure definition
struct node{
	int data;
	struct node *next;
};



struct node *create(){
	struct node*nn;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter the elements:\n");
	scanf("%d",&nn->data);
	return nn;
	
}


void push(struct node**top){
	struct node *nn=create();
	nn->next=*top;
	*top=nn;
}

void pop(struct node**top){
	if(*top==NULL){
		printf("Stack underflow\n");
		return;
	}
	struct node*temp=*top;
	printf("%d Popped element\n",temp->data);
	*top=temp->next;
	free(temp);
}

void peek(struct node*top){
	if(top==NULL){
		printf("Stack is empty\n");
	}
	else
	printf("%d Topped Element\n",top->data);
}

void display(struct node *top){

	
	printf("------Stack Elements------\n");
	while(top!=NULL){
		printf("%d\n ",top->data);
		top=top->next;
	}
}
int main(){
	struct node *top=NULL;
	while(true){
	printf("1.PUSH\n2.POP\n3.PEEK\n4.Display\n");
	
	int choice;
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			push(&top);break;
	    case 2:
	    	pop(&top);break;
	    case 3:
	    	peek(top);break;
		case 4:
			display(top);
	    default:
	    	printf("Exiting....\n");
	}
}
	


	
}

