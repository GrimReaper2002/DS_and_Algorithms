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

Node *insertAtEndSLL(Node *head,int x){
	Node *temp = new Node(x);
	if(head==NULL){
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	return head;
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
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	cout<<"Before Insertion: ";
	printSLL(head);
	insertAtEndSLL(head,40);
	insertAtEndSLL(head,50);
	cout<<"\n"<<"After Insertion: ";
	printSLL(head);
}
