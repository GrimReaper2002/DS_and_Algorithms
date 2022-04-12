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

Node *insertNodeAtposSLL(Node *head ,int pos, int val){
	Node *temp = new Node(val);
	if(pos == 0){
		temp->next=head;
		return temp;
	}
	Node *curr = head;
	for(int i=0;i<pos-2 && curr!=NULL;i++){
		curr = curr->next;
	}
	if(curr == NULL){
		cout<<"\n"<<pos<<" is Invalid Position";
		return head;
	}
	temp->next = curr->next;
	curr->next = temp;
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
	Node *head = new Node(20);
	head->next = new Node(30);
	head->next->next = new Node(50);
	cout<<"Before Insertion: ";
	printSLL(head);
	head = insertNodeAtposSLL(head,1,10);
	head = insertNodeAtposSLL(head,6,40);
	cout<<"\n"<<"After Insertion: ";
	printSLL(head);
	
	
}