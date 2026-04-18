#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int value;
	node*next;
};
node* top=NULL;
//push function
void push()
{
	node*newNode=new node();
	cout<<"Enter the value you wanna push in stack:";
	cin>>newNode->value;
	newNode->next=top;
	top=newNode;
}
//pop function
void pop()
{
	node* temp=top;
	if(top==NULL)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"Deleted value is "<<temp->value<<endl;
		top=top->next;
		delete temp;
	}
	
}
//Top function 
void Top()
{
	if(top==NULL){
		cout<<"Stack is Empty"<<endl;
		return;
	}
	cout<<"Top:"<<top->value<<endl;
}
//Dispaly Function 
void display()
{
	node* temp=top;
	if(top==NULL){
		cout<<"Stack is Empty"<<endl;
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->value<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//Main Function
int main(int argc,char** argv){
	
	int choice;
	do 
	{
		cout<<"/n1: push():"<<endl;
		cout<<"/n2: pop():"<<endl;
		cout<<"/n3: Top():"<<endl;
		cout<<"/n4: display():"<<endl;
		cout<<"/n5: Exit():"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
		{
		push();
		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		Top();
		break;
		}
		case 4:
		{
		display();
		break;
		}
	}
}
		while(choice!=0);
		return 0;
		
		
	
}
