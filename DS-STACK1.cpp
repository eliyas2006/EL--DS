#include<stdio.h>
#define MAX 6
int stack[MAX],top=-1;

//stack overflow
int isfull(){
	if(top==MAX-1)
	return 1;
	else 
	return 0;
}

//stack underflow
int isempty(){
	if(top==-1)
	return 1;
	else
	return 0;
}

void push(int value){
	if(!isfull()){
		top++;
		stack[top]=value;
	}
}

int pop(){
	int del;
	if(!isempty()){
		del=stack[top];
		top--;
	}
	return del;
}

int peek(){
	int p;
	if(!isempty()){
		p=stack[top];
	}
	return p;
}

void display(){
	int i;
	if(!isempty()){
		for(i=top;i>=0;i--){
			printf("%d ",stack[i]);
	   }
	}
}

int main(){
	push(5);
	push(10);
	push(15);
	
	printf("Element that is topped:%d\n",peek());
	printf("Element that is popped:%d\n",pop());
	display();
	return 0;
}
