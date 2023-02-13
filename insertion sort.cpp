#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void insertbegin (struct Node **head, int data)
{
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}

void insertEnd (struct Node **head, int data)
{

  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  newNode->data = data;
  newNode->next = NULL;
  if (*head == NULL)
    {
      *head = newNode;
      return;
    }
  struct Node *temp = *head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
}
int getCurrSize (struct Node *node)
{
  int size = 0;

  while (node != NULL)
    {
      node = node->next;
      size++;
    }
  return size;
}

void insertPosition (int pos, int data, struct Node **head)
{
  int size = getCurrSize (*head);
  if (pos < 1 || pos > size)
    printf ("Invalid position to insert");

  else
    {
      struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
      newNode->data = data;
      newNode->next = NULL;
      struct Node *temp = *head;
      while (--pos)
	temp = temp->next;
      newNode->next = temp->next;
      temp->next = newNode;
    }
}

void display (struct Node *node)
{
	printf("the linked list is:");

  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

int main ()
{
  struct Node *head = NULL;
  printf("for the insertion at begining:");
  insertbegin (&head, 1);
  insertbegin (&head, 2);
  insertbegin (&head, 3);
  display (head);
  
   printf("for the insertion at end:");
  insertEnd (&head, 5);
  insertEnd (&head, 6);
  insertEnd (&head, 7);

  display (head);
  printf("for the insertion at any position:");
  insertPosition (3, 4, &head);

  display (head);
  return 0;
}
