#include<iostream>
#include<queue>
using namespace std;

class Node{
public:	
	int data;
	Node* left;
	Node* right;

	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

//Accepts the old root node and returns the new root node

Node* insertInBst(Node* root, int data) {
	if(root == NULL) {
		return new Node(d);
	}
    
    //In this we have to check if the data is less than the root -> data if this 
    //is the case then wew have to put it in the left otherwise in the right 
	if(data <= root -> data) {
		root -> left = insertInBst(root -> left, data);
	}else{
		root -> right = insertInBst(root -> right, data);
	}
	return  root;
}

Node* build() {
	int d;
	cin>>d;

	Node* root = NULL;

	while(d!=-1) {
	  root =insertInBst(root, d);
	  cin>>d;
	}
	return root;
}

void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

void inorder(Node* root){
	if(root == NULL) {
		return;
	}

	inorder(root -> left);
    cout<<root->data<<",";
    inorder(root -> right);
}



int main() {
  
  Node* root = build();
  // inorder(root);
  bfs(root);

  return 0;
}