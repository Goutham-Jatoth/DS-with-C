// // C program to Insert at the beginning of the list
// #include <stdio.h>
// #include <stdlib.h>

// // Structure of a linked list node
// struct node {
// 	int info;
// 	struct node* next;
// };

// // Pointer to last node in the list
// struct node* last = NULL;

// // Function to insert a node in the
// // starting of the list
// void insertAtFront(int data)
// {
// 	// Initialize a new node
// 	struct node* temp;
// 	temp = (struct node*)malloc(sizeof(struct node));

// 	// If the new node is the only
// 	// node in the list
// 	if (last == NULL) {
// 		temp->info = data;
// 		temp->next = temp;
// 		last = temp;
// 	}

// 	// Else last node contains the
// 	// reference of the new node and
// 	// new node contains the reference
// 	// of the previous first node
// 	else {
// 		temp->info = data;
// 		temp->next = last->next;

// 		// last node now has reference
// 		// of the new node temp
// 		last->next = temp;
// 	}
// }

// // Function to print the list
// void viewList()
// {
// 	// If list is empty
// 	if (last == NULL)
// 		printf("\nList is empty\n");

// 	// Else print the list
// 	else {
// 		struct node* temp;
// 		temp = last->next;

// 		// While first node is not
// 		// reached again, print,
// 		// since the list is circular
// 		do {
// 			printf("\nData = %d", temp->info);
// 			temp = temp->next;
// 		} while (temp != last->next);
// 	}
// }

// // Driver Code
// int main()
// {
// 	// Function Call
// 	insertAtFront(10);
// 	insertAtFront(20);
// 	insertAtFront(30);

// 	// Print list
// 	viewList();

// 	return 0;
// }







// // C program to insert at the end of the list
// #include <stdio.h>
// #include <stdlib.h>

// // Structure of a linked list node
// struct node {
// 	int info;
// 	struct node* next;
// };

// // Pointer to last node in the list
// struct node* last = NULL;

// // Function to add a new node at the
// // end of the list
// void addatlast(int data)
// {
// 	// Initialize a new node
// 	struct node* temp;
// 	temp = (struct node*)malloc(sizeof(struct node));

// 	// If the new node is the
// 	// only node in the list
// 	if (last == NULL) {
// 		temp->info = data;
// 		temp->next = temp;
// 		last = temp;
// 	}

// 	// Else the new node will be the
// 	// last node and will contain
// 	// the reference of head node
// 	else {
// 		temp->info = data;
// 		temp->next = last->next;
// 		last->next = temp;
// 		last = temp;
// 	}
// }

// // Function to print the list
// void viewList()
// {
// 	// If list is empty
// 	if (last == NULL)
// 		printf("\nList is empty\n");

// 	// Else print the list
// 	else {
// 		struct node* temp;
// 		temp = last->next;
// 		do {
// 			printf("\nData = %d", temp->info);
// 			temp = temp->next;
// 		} while (temp != last->next);
// 	}
// }

// // Driver Code
// int main()
// {
// 	// Function Call
// 	addatlast(10);
// 	addatlast(20);
// 	addatlast(30);

// 	// Print list
// 	viewList();

// 	return 0;
// }








// // C program for the above operation
// #include <stdio.h>
// #include <stdlib.h>

// // Structure of a linked list node
// struct node {
// 	int info;
// 	struct node* next;
// };

// // Pointer to last node in list
// struct node* last = NULL;

// // Function to add a new node
// // at the end of the list
// void addatlast()
// {
// 	// Stores number to be inserted
// 	int data;

// 	// Initialize a new node
// 	struct node* temp;
// 	temp = (struct node*)malloc(sizeof(struct node));

// 	// Input data
// 	printf("\nEnter data to be inserted : \n");
// 	scanf("%d", &data);

// 	// If the new node is the
// 	// only node in the list
// 	if (last == NULL) {
// 		temp->info = data;
// 		temp->next = temp;
// 		last = temp;
// 	}

// 	// Else the new node will be
// 	// last node and will contain
// 	// the reference of head node
// 	else {
// 		temp->info = data;
// 		temp->next = last->next;
// 		last->next = temp;
// 		last = temp;
// 	}
// }

// // Function to delete an element at a specified index in the list
// void deleteAtIndex()
// {
// 	// Stores the index at which
// 	// the element is to be deleted
// 	int pos, i = 1;
// 	struct node *temp, *position;
// 	temp = last->next;

// 	// If list is empty
// 	if (last == NULL)
// 		printf("\nList is empty.\n");

// 	// Else
// 	else {

// 		// Input Data
// 		printf("\nEnter index : ");
// 		scanf("%d", &pos);

// 		// Traverse till the node to
// 		// be deleted is reached
// 		while (i <= pos - 1) {
// 			temp = temp->next;
// 			i++;
// 		}

// 		// After the loop ends, temp
// 		// points at a node just before
// 		// the node to be deleted

// 		// Reassigning links
// 		position = temp->next;
// 		temp->next = position->next;

// 		free(position);
// 	}
// }

// // Function to print the list
// void viewList()
// {
// 	// If list is empty
// 	if (last == NULL)
// 		printf("\nList is empty\n");

// 	// Else print the list
// 	else {
// 		struct node* temp;
// 		temp = last->next;
// 		do {
// 			printf("\nData = %d", temp->info);
// 			temp = temp->next;
// 		} while (temp != last->next);
// 	}
// }

// // Driver Code
// int main()
// {
// 	// Initialize the list
// 	addatlast();
// 	addatlast();
// 	addatlast();

// 	// Function Call
// 	deleteAtIndex();

// 	// Print the list
// 	viewList();

// 	return 0;
// }






// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
// 	int data;
// 	struct Node* next;
// };

// struct Node* head = NULL;

// void display() {
// 	if (head == NULL) {
// 		printf("List is Empty");
// 		return;
// 	}

// 	struct Node* temp = head;
// 	printf("Circular Linked List : ");

// 	do {
// 		printf("%d->",temp->data);
// 		temp=temp->next;
// 	}
// 	while (temp != head);
// 	printf("(head)\n");
// }


// void insertAtBeginning(int element) {
// 	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// 	newNode->data = element;

// 	if (head == NULL) {
// 		head = newNode;
// 		newNode->next = head;
// 	}
// 	else {
// 		struct Node* temp = head;
// 		while (temp->next != head);
		
// 		while (temp->next != head) {
// 			temp = temp->next;
// 		}

// 		newNode->next = head;
// 		head = newNode;
// 		temp->next = head;
// 	}
// }

// void insertAtEnd(int element) {
// 	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// 	newNode->data = element;

// 	if (head = NULL) {
// 		head = newNode;
// 		newNode->next = head;
// 	}
// 	else {
// 		struct Node* temp = head;
// 		while (temp->next != head) {
// 			temp = temp->next;
// 		}

// 		temp->next = newNode;
// 		newNode->next = head;
// 	}
// }


// void insertAtPosition(int element, int position) {
// 	if (position == 1) {
// 		insertAtBeginning(element);
// 		return;
// 	}

// 	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// 	newNode->data = element;

// 	if (head == NULL) {
// 		printf("List is Empty");
// 		free(newNode);
// 		return;
// 	}

// 	struct Node* temp = head;

// 	int count = 1;
// 	while (temp->next != head && count < position - 1) {
// 		count++;
// 	}

// 	if (count != position -1) {
// 		printf("Invalid Position");
// 		free(newNode);
// 		return;
// 	}

// 	newNode->next = temp->next;
// 	temp->next = newNode;
// }


// void deleteAtPosition(int position) {
// 	if (head == NULL) {
// 		printf("List is Empty");
// 		return;
// 	}

// 	if (position == 1) {
// 		if (head->next == head) {
// 			free(head);
// 			head = NULL;
// 		}
// 		else {
// 			struct Node* temp = head;
// 			while (temp->next != head) {
// 				temp = temp->next;

// 				struct Node* del = head;
// 				head = head->next;
// 				temp->next = head;
// 				free(del);
// 			}
// 		}
// 	}
// 		else {
// 			struct Node* temp = head;
// 			int count = 1;
// 			struct Node* prev = NULL;

// 			while (temp->next != head && count < position) {
// 				prev = temp;
// 				temp = temp->next;
// 				count++;
// 			}
// 		}
// 		if (count != position) {
// 			printf("Invalid Position");
// 			return;
// 		}
		
// 		prev->next = temp->next;
// 		free(temp);
// 	}
// }


// void deleteAtEnd() {
// 	if (head == NULL) {
// 		printf("List is Empty");
// 		return;
// 	}

// 	if (head->next == head) {
// 		free(head);
// 		head = NULL;
// 	} else {
// 		struct Node* temp = head;

// 		struct Node* prev = NULL;

// 		while (temp->next != head) {
// 			prev = temp;
// 			temp = temp->next;
// 		}

// 		prev->next = head;
// 		free(temp);
// 	}
// }


// void deleteAtBeginning() {
// 	if (head == NULL) {
// 		printf("List is Empty");
// 		return;
// 	}

// 	if (head->next == head) {
// 		free(head);
// 		head = NULL;
// 	} else {
// 		struct Node* temp = head;

// 		while(temp->next != head) {
// 			temp = temp->next;
// 		}

// 		struct Node* del = head;
// 		head = head->next;
// 		temp->next = head;
// 		free(del);
// 	}
// }


// int main() {
// 	int choice, element, position;

// 	do {
// 		printf("\n Circular Linked List Operations : ");

// 		printf("1. Insert at Beginning");
// 		printf("2. Insert at End");
// 		printf("3. Insert at any Position");
// 		printf("4. Delete at any Position");
// 		printf("5. Delete at end");
// 		printf("6. Delete at beginning");
// 		printf("Displat\n");
// 		printf("8. EXIT");

// 		printf("Enter your Choice : ");
// 		scanf("%d", &choice);

// 		switch (choice) {
// 			case 1:
// 			printf("Enter the element to insert at the beginning : ");
// 			scanf("%d",&element);
// 			insertAtBeginning(element);
// 			break;

// 			case 2:
// 			printf("Enter the element to insert at end : ");
// 			scanf("%d",&element);
// 			insertAtEnd(element);
// 			break;

// 			case 3:
// 			printf("Enter the element to insert : ");
// 			scanf("%d",&element);
// 			printf("Enter the positon to insert : ");
// 			scanf("%d",&position);
// 			insertAtPosition(element, position);
// 			break;

// 			case 4:
// 			printf("Enter the element for Deletion : ");
// 			scanf("%d",&position);
// 			deleteAtPosition(position);
// 			break;

// 			case 5:
// 			deleteAtEnd();
// 			break;

// 			case 6:
// 			deleteAtBeginning();
// 			break;

// 			case 7:
// 			display();
// 			break;

// 			case 8:
// 			printf("Exiting");
// 			break;


// 			default:
// 			printf("Invalid Choice");
// 		}
// 	} while (choice != 8);
// 	return 0;
// }





#include <stdio.h>
 #include <stdlib.h>
 struct Node {
 int data;
 struct Node* next;
 };
 struct Node* head = NULL;
 void displayList() {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 struct Node* temp = head;
 printf("Circular Linked List: ");
 do {
 printf("%d-> ", temp->data);
 temp = temp->next;
 } while (temp != head);
 printf(" (head)\n");
 }
 void insertAtBeginning(int element) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = element;
 if (head == NULL) {
 head = newNode;
 newNode->next = head;
 } else {
 struct Node* temp = head;
 while (temp->next != head) {
 temp = temp->next;
 }
 newNode->next = head;
 head = newNode;
 temp->next = head;
 }
 }
 void insertAtEnd(int element) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = element;
 if (head == NULL) {
 head = newNode;
 newNode->next = head;
 } else {
 struct Node* temp = head;
 while (temp->next != head) {
 temp = temp->next;
 }
 temp->next = newNode;
 newNode->next = head;
 }
 }
 void insertAtPosition(int element, int position) {
 if (position == 1) {
 insertAtBeginning(element);
 return;
 }
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = element;
 if (head == NULL) {
 printf("List is empty. Invalid position for insertion\n");
 free(newNode);
 return;
 }
 struct Node* temp = head;
 int count = 1;
 while (temp->next != head && count < position- 1) {
 temp = temp->next;
 count++;
 }
 if (count != position- 1) {
 printf("Invalid position for insertion\n");
 free(newNode);
 return;
 }
 newNode->next = temp->next;
 temp->next = newNode;
 }
void deleteAtPosition(int position) {
 if (head == NULL) {
 printf("List is empty. Cannot delete.\n");
 return;
 }
 if (position == 1) {
 if (head->next == head) {
 free(head);
 head = NULL;
 } else {
 struct Node* temp = head;
 while (temp->next != head)
 temp = temp->next;
 struct Node* del = head;
 head = head->next;
 temp->next = head;
 free(del);
 }
 } else {
 struct Node* temp = head;
 int count = 1;
 struct Node* prev = NULL;
 while (temp->next != head && count < position) {
 prev = temp;
 temp = temp->next;
 count++;
 }
 if (count != position) {
 printf("Invalid position for deletion\n");
 return;
 }
 prev->next = temp->next;
 free(temp);
 }
 }
 void deleteAtEnd() {
 if (head == NULL) {
 printf("List is empty. Cannot delete.\n");
 return;
 }
if (head->next == head) {
 free(head);
 head = NULL;
 } else {
 struct Node* temp = head;
 struct Node* prev = NULL;
 while (temp->next != head) {
 prev = temp;
 temp = temp->next;
 }
 prev->next = head;
 free(temp);
 }
 }
 void deleteAtBeginning() {
 if (head == NULL) {
 printf("List is empty. Cannot delete.\n");
 return;
 }
 if (head->next == head) {
 free(head);
 head = NULL;
 } else {
 struct Node* temp = head;
 while (temp->next != head) {
 temp = temp->next;
 }
 struct Node* del = head;
 head = head->next;
 temp->next = head;
 free(del);
 }
 }
 int main() {
 int choice, element, position;
 do {
 printf("\nCircular Linked List Operations Menu:\n");
 printf("1. Insert at beginning\n");
 printf("2. Insert at end\n");
 printf("3. Insert at any position\n");
 printf("4. Delete at any position\n");
printf("5. Delete at end\n");
 printf("6. Delete at beginning\n");
 printf("7. Display list\n");
 printf("8. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter element to insert at the beginning: ");
 scanf("%d", &element);
 insertAtBeginning(element);
 break;
 case 2:
 printf("Enter element to insert at the end: ");
 scanf("%d", &element);
 insertAtEnd(element);
 break;
 case 3:
 printf("Enter element to insert: ");
 scanf("%d", &element);
 printf("Enter position for insertion: ");
 scanf("%d", &position);
 insertAtPosition(element, position);
 break;
 case 4:
 printf("Enter position for deletion: ");
 scanf("%d", &position);
 deleteAtPosition(position);
 break;
 case 5:
 deleteAtEnd();
 break;
 case 6:
 deleteAtBeginning();
 break;
 case 7:
 displayList();
 break;
case 8:
 printf("Exiting...\n");
 break;
 default:
 printf("Invalid choice. Please enter a valid option.\n");
 }
 } while (choice != 8);
 return 0;
 }