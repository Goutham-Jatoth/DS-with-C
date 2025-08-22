// #include <stdio.h>
//  #define MAX_SIZE 100
//  int array[MAX_SIZE];
//  int size = 0;
//  void displayArray() {
//  if (size == 0) {
//  printf("Array is empty\n");
//  return;
//  }
//  printf("Array elements: ");
//  for (int i = 0; i < size; i++) {
//  printf("%d ", array[i]);
//  }
//  printf("\n");
//  }
//  void insertAtBeginning(int element) {
//  if (size >= MAX_SIZE) {
//  printf("Array is full. Cannot insert element.\n");
//  return;
//  }
//  for (int i = size; i > 0; i--) {
//  array[i] = array[i- 1];
//  }
//  array[0] = element;
//  size++;
//  }
//  void insertAtEnd(int element) {
//  if (size >= MAX_SIZE) {
//  printf("Array is full. Cannot insert element.\n");
//  return;
//  }
// array[size] = element;
//  size++;
//  }
//  void insertAtPosition(int element, int position) {
//  if (size >= MAX_SIZE) {
//  printf("Array is full. Cannot insert element.\n");
//  return;
//  }
//  if (position < 0 || position > size) {
//  printf("Invalid position for insertion.\n");
//  return;
//  }
//  for (int i = size; i > position; i--) {
//  array[i] = array[i- 1];
//  }
//  array[position] = element;
//  size++;
//  }
//  void deleteAtBeginning() {
//  if (size == 0) {
//  printf("Array is empty. Cannot delete.\n");
//  return;
//  }
//  for (int i = 0; i < size- 1; i++) {
//  array[i] = array[i + 1];
//  }
//  size--;
//  }
//  void deleteAtEnd() {
//  if (size == 0) {
//  printf("Array is empty. Cannot delete.\n");
// return;
//  }
//  size--;
//  }
//  void deleteAtPosition(int position) {
//  if (size == 0) {
//  printf("Array is empty. Cannot delete.\n");
//  return;
//  }
//  if (position < 0 || position >= size) {
//  printf("Invalid position for deletion.\n");
//  return;
//  }
//  for (int i = position; i < size- 1; i++) {
//  array[i] = array[i + 1];
//  }
//  size--;
//  }
//  int main() {
//  int choice, element, position;
//  do {
//  printf("\nArray Operations Menu:\n");
//  printf("1. Insert at beginning\n");
//  printf("2. Insert at end\n");
//  printf("3. Insert at any position\n");
//  printf("4. Delete at beginning\n");
//  printf("5. Delete at end\n");
//  printf("6. Delete at any position\n");
//  printf("7. Display array\n");
//  printf("8. Exit\n");
//  printf("Enter your choice: ");
//  scanf("%d", &choice);
// switch (choice) {
//  case 1:
//  printf("Enter element to insert at the beginning: ");
//  scanf("%d", &element);
//  insertAtBeginning(element);
//  break;
//  case 2:
//  printf("Enter element to insert at the end: ");
//  scanf("%d", &element);
//  insertAtEnd(element);
//  break;
//  case 3:
//  printf("Enter element to insert: ");
//  scanf("%d", &element);
//  printf("Enter position for insertion: ");
//  scanf("%d", &position);
//  insertAtPosition(element, position);
//  break;
//  case 4:
//  deleteAtBeginning();
//  break;
//  case 5:
//  deleteAtEnd();
//  break;
//  case 6:
//  printf("Enter position for deletion: ");
//  scanf("%d", &position);
//  deleteAtPosition(position);
//  break;
//  case 7:
//  displayArray();
//  break;
//  case 8:
// printf("Exiting...\n");
//  break;
//  default:
//  printf("Invalid choice. Please enter a valid option.\n");
//  }
//  } while (choice != 8);
//  return 0;
//  }





// Array Implementation 


#include<stdio.h>

#define MAX_SIZE 100

int array[MAX_SIZE];
int size = 0;

void displayArray() {
    if (size == 0) {
        printf("Array is Empty\n");
        return;
    }

    printf("Array Elements : ");

    for (int i=0;i<size;i++) {
        printf("%d", array[i]);
    }

    printf("\n");

}


void insertAtBeginning(int element) {
    if (size >= MAX_SIZE) {
        printf("Array is Full. Cannot insert elements anymore\n");
        return;
    }

    for (int i = size; i>0; i--) {
        array[i] = array[i-1];
    }

    array[0] = element;
    size++;
}

void insertAtEnd(int element) {
    if (size >= MAX_SIZE) {
        printf("Array is Full. Cannot insert here !");
        return;
    }

    array[size] = element;
    size++;
}

void insertAtPosition(int element, int position) {
    if (size>=MAX_SIZE) {
        printf("Array is Full. Cannot insert elements\n");
        return;
    }

    if (position<0 || position>size) {
        printf("Invalid Position for Insertion\n");
        return;
    }

    for (int i=size; i>position; i--) {
        array[i] = array[i-1];
    }

    array[position] = element;
    size++;
}


void deleteAtBeginning() {
    if (size == 0) {
        printf("Array is Empty. Cannot Delete\n");
        return;
    }

    for (int i=0; i<size-1; i++) {
        array[i] = array[i+1];
    }

    size--;
}


void deleteAtEnd() {
    if (size == 0) {
        printf("Array is Empty. Cannot delete anymore\n");
        return;
    }
    size--;
}

void deleteAtPosition(int position) {
    if (size == 0) {
        printf("Array is Empty\n");
        return;
    }

    if (position<0 || position>=size) {
        printf("Invalid Position for deletion");
        return;
    }


    for (int i=position; i<size-1; i++) {
        array[i] = array[i+1];
    }

    size--;
}


int main() {
    int choice, element, position;

    do {
        printf("\n ----Array Operations---- \n");
        printf("1. Insert at the Beginning\n");
        printf("2. Insert at the Ending\n");
        printf("3. Insert at any Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at Ending\n");
        printf("6. Delete at any Position\n");
        printf("7. Display the array\n");
        printf("8. Exit\n");

        printf("Enter the choice for the operation you want to perform : \n");
        scanf("%d", &choice);
         
        switch(choice) {
            case 1:
            printf("Enter the element to insert at the beginnig of the array : \n");
            scanf("%d", &element);
            insertAtBeginning(element);
            break;


            case 2:
            printf("Enter the elements to insert at the Ending : \n");
            scanf("%d", &element);
            insertAtEnd(element);
            break;

            case 3:
            printf("Enter the element to Insert at specific Position : \n");
            scanf("%d", &element);
            printf("Enter the Position to insert : \n");
            scanf("%d", &position);
            insertAtPosition(element, position);
            break;

            case 4:
            deleteAtBeginning();
            break;

            case 5:
            deleteAtEnd();
            break;

            case 6:
            printf("Enter the element position to delete : \n");
            scanf("%d", &position);
            deleteAtPosition(position);
            break;

            case 7:
            displayArray();
            break;

            case 8:
            printf("Exiting \n ");
            break;

            default:
            printf("Invalid Choice entered \n Please try again !");
        }
    } while (choice != 8);
    return 0;
}