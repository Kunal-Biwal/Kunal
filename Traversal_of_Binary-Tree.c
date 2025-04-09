#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node*left;
	struct node*right;
 };

struct node*creatNode(int data){
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preOrder(struct node*root){
	if(root!=NULL){
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}




void postOrder(struct node*root){
	if(root!=NULL){
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
    } 
}

void inOrder(struct node*root){
	 if(root!=NULL){
	 inOrder(root->left);
	 printf("%d ",root->data);
	 inOrder(root->right);
	 }
}

int main(){
	struct node*p  = creatNode(4);
	struct node*p1 = creatNode(1);
	struct node*p2 = creatNode(6);
	struct node*p3 = creatNode(5);
	struct node*p4 = creatNode(2);

    //LInk The Nodes
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    printf("PreOrder Traversal:- "); preOrder(p);
    printf("\nInOrder Traversal:- "); inOrder(p);
    printf("\nPostOrder Traversal:- "); postOrder(p);    
	}


