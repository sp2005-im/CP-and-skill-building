//Sri Rama Jayam

#include<iostream>

using namespace std;

class Node{
	public:
	int value;
	Node* next;
	Node (int val){
		value = val;
		next = nullptr;
	}
};

//To insert an element at the front:
//Step 1 : Create a new node with the given value
//Step 2 : Link this node with the current head of the linked list
//Step 3 : Set this new node as the head of the linked list

class LinkedList{
	public:
	Node* head;
	void insertAtFront(int value){
		Node* newNode = new Node(value);
		newNode -> next = head;
		head = newNode;
	}
	
	int getValue(){
		if (head == NULL){
			return -1;
		}
		return head->value;
	}
};

int main(){
	int value;
	cin>>value;
	LinkedList List;
	List.insertAtFront(value);
	cout<<"The value inserted is "<<List.getValue()<<endl;
	return 0;
}
