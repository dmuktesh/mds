#include<stdio.h>
#include<iostream>
#include<stdlib.h>
struct stackNode
{
  int data;
  struct stackNode* next;
};
struct stackNode* newNode(int data)
{
  struct stackNode* new_node = (struct stackNode*)malloc(sizeof(struct stackNode));
  stackNode->data = data;
  stackNode->next = NULL;
  return stackNode;
}
void push(struct stackNode** top,int data)
{
  struct stackNode* = newNode(data);
  stackNode->next = *top;
  *top = stackNode;
  printf("pushed %d to stack",data);
}
//_________________________________________________________________________________________________
int main()
{
  struct stackNode* root = NULL:
  return 0;
}
