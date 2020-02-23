//6210450431 Kanita Wansang
#include <stdio.h>
#include <stdlib.h>

typedef struct list{
  int size;
  struct node* next;
}List;

typedef struct node{
  int data;
  struct node* next;
}Node;

List *newList(){
  List *ls = (List*)malloc(sizeof(List*));
  ls->size = 0;
  ls->next = NULL;
  return ls;
}

void addNode(List *ls,int data){
  Node *node = (Node*)malloc(sizeof(Node*));
  node->data = data;
  node->next = NULL;
  if(ls->size == 0){
    ls->next = node;
  }else{
    Node *nodeTar = ls->next;
    Node *nextNode = NULL;
    while(nodeTar != NULL){
      nextNode = nodeTar->next;
      if(nodeTar->data >= data){
        node->next = nodeTar;
        ls->next = node;
        break;
      }
      if(nextNode == NULL){
        nodeTar->next = node;
        break;
      }
      if(nextNode->data >= data){
        node->next = nextNode;
        nodeTar->next = node;
        break;
      }
      nodeTar = nodeTar->next;
    }
  }
  ls->size++;
}

void printList(List *ls){
  Node *tmp;
  Node *head = ls->next;
  for(tmp = head; tmp; tmp = tmp->next){
    printf("%d\n",tmp->data);
  }
}

int main(void) {
  List *ls = newList();
  int input;
  while(scanf("%d",&input) == 1){
    if(input <= -1){
      printList(ls);
      break;
    }
    addNode(ls,input);
  }
}