//Sri Rama Jayam

#include<iostream>

using namespace std;

class Node{
	public:
	int value;
	Node* next;
	Node(int val){
		value = val;
		next = nullptr;
	}
};

class LinkedList{
	public:
	Node* head;
	void insertAtEnd(int value){
		Node* newNode = new Node(value);
		Node* current = head;
		if (head == NULL){
			head = newNode;
			return;
		}
		while (current -> next != NULL){
			current = current -> next;
		}
		current -> next = newNode;
	}

	int getLastValue(){
		if (head == NULL){
			return -1;
		}
		else{
			Node* current = head;
			while (current -> next != NULL){
				current = current -> next;
			}
			return current -> value;
		}
	}
};

int main(){
	int n;
	cin>>n;
	LinkedList* List = new LinkedList();
	int value;
	for (int i = 0; i < n; ++i){
		cin>>value;
		List -> insertAtEnd(value);
		cout<<"The value inserted at the end is "<<List->getLastValue()<<endl;
	}
	return 0;
}
