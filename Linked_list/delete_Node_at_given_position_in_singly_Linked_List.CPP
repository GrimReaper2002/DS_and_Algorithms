#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node *deleteNodeAtposSLL(Node *head ,int pos){
	if(head == NULL){
		cout<<"Empty Linked List";
		return head;
	}
	if(pos == 0){
		Node *temp = head->next;
		delete head;
		return temp;
	}
	Node *curr = head;
	for(int i=0;i<=pos-2 && curr!=NULL;i++){
		curr = curr->next;
	}
	if(curr == NULL|| curr->next==NULL){
		cout<<"\n"<<pos<<" is Invalid Position";
		return head;
	}
	Node *temp = curr->next;
	curr->next = temp->next;
	delete temp;
	return head;
}

void printSLL(Node *head){
	if(head == NULL){
		cout<<"Linked List is empty";
	}
	else{
		while(head!=NULL){
			cout<<(head->data)<<" ";
			head = head->next;
		}
	}
}

int main(){
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	cout<<"Before Deletion: ";
	printSLL(head);
	head = deleteNodeAtposSLL(head,0);
	head = deleteNodeAtposSLL(head,1);
	head = deleteNodeAtposSLL(head,4);
	cout<<"\n"<<"After Deletion: ";
	printSLL(head);
	
	
}