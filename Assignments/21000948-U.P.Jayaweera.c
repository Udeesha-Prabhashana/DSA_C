#include <stdio.h>
#include<stdlib.h>

struct btnode{
  int value;
  struct btnode *l;
  struct btnode *r;
}*root  = NULL, *temp = NULL, *t2, *t1;



void create();
void insert();
void search(struct btnode *);
void inorder(struct btnode *);
void preorder(struct btnode *);


void main(){
  char ch;
  do
  {
      printf("1. To insert a new node in the Binary Tree\n");
      printf("2. To display the nodes of the Binary Tree(via Inorder Traversal).\n");
      printf("3. To display the nodes of the Binary Tree(via Preorder Traversal).\n");
      printf("\nSelect one of the operations: ");

      int choice;
      scanf("%d",&choice);
      switch (choice)
      {
      case 1 :
          insert();
          break;
      case 2 :
          inorder(root);
          break;
  case 3 :
          preorder(root);
          break;
      default :
          printf("Wrong Entry\n");
          break;
      }

      printf("\nDo you want to continue (Type y or n): ");
      scanf(" %c",&ch);
  } while (ch == 'Y'|| ch == 'y');
}



void insert(){
  create();
  if(root == NULL){
	  root = temp;
  }
  else{
	  search(root);
  }
}


void create(){
  int data;

  printf("Enter data of node to be inserted :");
  scanf("%d", &data);
  temp = (struct btnode*)malloc(1*sizeof(struct btnode));
  temp->value = data;
  temp->l=temp->r = NULL;
}




void search(struct btnode *t){
  if ((temp->value > t->value) && (t->r != NULL))
	  search(t->r);

  else if ((temp->value > t->value) && (t->r == NULL)){
	  t->r = temp;
  }

  else if ((temp->value < t->value) && (t->l != NULL)){
	   search(t->l);
  }
  else if ((temp->value < t->value) && (t->l == NULL)){
	  t->l = temp;
  }
}


void inorder(struct btnode *t){
  if (root == NULL) {
	  printf("No elements in a tree to display");
	  return;
  }

  if (t->l != NULL){
	  inorder(t->l);
  }

  printf("%d -> ", t->value);

  if (t->r != NULL) {
	  inorder(t->r);
  }
}


void preorder(struct btnode *t){

  if(root == NULL){
	  printf("No element in a tree to display");
	  return;
  }

  printf("%d -> ", t->value);

  if(t->l != NULL){
	  preorder(t->l);
  }

  if(t->r != NULL){
	  preorder(t->r);
  }
}
