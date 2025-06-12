//Sri Rama Jayam
//Step 1: Create a new node with a value
//Step 2: Link the head of the current linked list to the newly created node
//Step 3: Set the head of the linked list as the new node
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
	LinkedList* List = new LinkedList();
	List->insertAtFront(value);
	cout<<"The value inserted is "<<List->getValue()<<endl;
	return 0;
}
