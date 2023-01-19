#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int main(){
	//level 1
	Node* root = createNode(1);

	//level 2
	root->left = createNode(2);
	root->right = createNode(3);
	//level 3
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	//level 4
	root->left->right->left = createNode(9);
	root->right->right->left = createNode(15);

	cin.get();
}