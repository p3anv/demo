
#include<stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {

    // check if swapping occurs
    int swapped = 0;

    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {

      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;

        swapped = 1;
      }
    }

    // no swapping means the array is already sorted
    // so no need for further comparison
    if (swapped == 0) {
      break;
    }

  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main method
int main() {
  int data[5] ;
  int ch=0;
  do{printf("1.Bubble Sort\n2.Selection Sort\n3.Exit");
  scanf("%d",&ch);
  switch (ch)
  {



    case 1: printf("ENTER INTERGERS");
  scanf("%d%d%d%d%d",&data[0],&data[1],&data[2],&data[3],&data[4]);

  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
  break;
    case 2: // Selection sort in C



{
  int data[5];
  printf("ENTER INTERGERS");
  scanf("%d%d%d%d%d",&data[0],&data[1],&data[2],&data[3],&data[4]);
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray1(data, size);
}
    break;
    case 3:
        printf("THANK YOU");

  }
  }while(ch!=3);
}




void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// function to print an array
void printArray1(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
