#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	//constructor
	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtTail(node*&head, int data) {
	if(head == NULL) {
		node* n = new node(data);
		return;
	}
	node * tail = head;
	while(tail -> next != NULL) {
		tail = tail -> next;
	}
	tail -> next = new node(data);
	return;
}

Node* even_odd(Node* head, int data) {

  Node* even = NULL;
  Node* odd  = NULL;

  if(head == NULL and head -> next == NULL) {
  	return head;
  }

  Node* curr = head;
  if(head%2 == 0) {

  } 

}





void buidList(node*&head, int delim) {
	int data;
	cin>>data;

	while(data <= delim) {
		insertAtTail(head, data);
		cin>>data;
	}

}

void print(node*&head) {
	node* temp = head;
	while(temp -> next != NULL) {
		cout<<temp -> data<<"->";
		temp = temp -> next;
	}
}

int main() {

    node * head = NULL;
	
	print(head);


	return 0;
}