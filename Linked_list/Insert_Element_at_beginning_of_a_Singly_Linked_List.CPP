#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *insertAtBegin(Node *head,int x){
	Node *temp = new Node(x);
	temp->next=head;
	return temp;
}

void printSLL(Node *head){
	if(head==NULL){
		cout<<"Empty Linked List";
	}
	else{
		while(head!=NULL){
			cout<<(head->data)<<" ";
			head=head->next;
		}
	}
}
int main(){
	Node *head=new Node(30);
	head->next=new Node(40);
	head->next->next=new Node(50);
	cout<<"Before insertion: ";
	printSLL(head);
	head=insertAtBegin(head,20);
	head=insertAtBegin(head,10);
	cout<<"\n"<<"After insertion: ";
	printSLL(head);
	
}
