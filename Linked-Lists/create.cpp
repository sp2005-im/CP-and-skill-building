//Sri Rama Jayam

#include<iostream>
#include<string>
using namespace std;
struct Node{
	string data;
	Node* next;
	Node (string value){
		data = value;
		next = nullptr;
	}
};

int main(){
	string value = "Hello World";
	Node* newNode = new Node(value);
	cout<<"The value of the node is "<<newNode -> data<<endl;
	return 0;
}
