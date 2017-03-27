#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//basic ADT of link list
//linked list node
struct node
{
  int data;
  struct node *next;
};
void printList(struct node* head)
{
    struct node* current = head;
    while(current != NULL)
    {
      printf("%d  ",current->data);
      current = current->next;
    }
}
void addAtFront(struct node** head_ref, int data)
{
  struct node* new_node = malloc(sizeof(struct node));
  new_node->data = data;

}
//__________________________________________________________________
int main()
{
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;
  //allocates 3 nodes in headp
  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
  /* Three blocks have been allocated  dynamically.
    We have pointers to these three blocks as first, second and third
      head           second           third
       |                |               |
       |                |               |
   +---+-----+     +----+----+     +----+----+
   | #  | #  |     | #  | #  |     |  # |  # |
   +---+-----+     +----+----+     +----+----+

  # represents any random value.
  Data is random because we haven’t assigned anything yet  */


  head->data =1;
  head->next = second;
  /* data has been assigned to data part of first block (block
    pointed by head).  And next pointer of first block points to
    second.  So they both are linked.

       head          second         third
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | *----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+
  */
  second->data = 2;
  second->next = third;
  /* data has been assigned to data part of second block (block pointed by
    second). And next pointer of the second block points to third block.
   So all three blocks are linked.

      head         second         third
       |             |             |
       |             |             |
   +---+---+     +---+---+     +----+----+
   | 1  | *----->| 2 | *-----> |  # |  # |
   +---+---+     +---+---+     +----+----+      */

   third->data = 3;
   third->next = NULL;
   /* data has been assigned to data part of third block (block pointed
   by third). And next pointer of the third block is made NULL to indicate
   that the linked list is terminated here.

    We have the linked list ready.

          head
            |
            |
       +---+---+     +---+---+       +----+------+
       | 1  | *----->|  2  | *-----> |  3 | NULL |
       +---+---+     +---+---+       +----+------+


   Note that only head is sufficient to represent the whole list.  We can
   traverse the complete list by following next pointers.    */
   printList(head);
   return 0;
}
