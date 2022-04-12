#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
void printSll(Node *head){
	if (head==NULL){
		cout<<"Linked List is empty";
	}
	while(head!=NULL){
		cout<<(head->data)<<" ";
		head=head->next;
		
	}
}

int main() {
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printSll(head);
	return 0;
}
