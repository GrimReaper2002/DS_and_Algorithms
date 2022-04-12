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

Node *deleteFirstNodeSLL(Node *head){
	if (head == NULL){
		return NULL;
	}
	Node *temp= head->next;
	delete head;
	return temp;
	
}

void printSLL(Node *head){
	if(head == NULL){
		cout<<"Linked List is empty";
	}
	else{
		while(head!=NULL){
			cout<<(head->data)<<" ";
			head=head->next;
		}
	}
}
int main(){
	Node *head =  new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	cout<<"Before deletion: ";
	printSLL(head);
	head=deleteFirstNodeSLL(head);
	cout<<"\n"<<"After deletion: ";
	printSLL(head);
	
	
}
