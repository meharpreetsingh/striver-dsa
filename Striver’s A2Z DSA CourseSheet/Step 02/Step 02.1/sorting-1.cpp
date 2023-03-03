#include <iostream>
using namespace std;

void selectionSort( int arr[], int size ) {
  for ( int i = 0; i < size - 1; i++ ) {
    int min = i;
    for ( int j = i + 1; j < size; j++ ) {
      min = ( arr[min] > arr[j] ) ? j : min;
    }
    swap( arr[min], arr[i] );
  }
}

void bubbleSort( int arr[], int size ) {
  for ( int i = 0; i < size; i++ ) {
    for ( int j = 0; j < size - i - 1; j++ ) {
      if ( arr[j] > arr[j + 1] ) {
        swap( arr[j], arr[j + 1] );
      }
    }
  }
}

void insertionSort( int arr[], int size ) {
  for ( int i = 0; i < size; i++ ) {
    int j = i;
    while ( j > 0 && arr[j - 1] > arr[j] ) {
      swap( arr[j], arr[j - 1] );
      j--;
    }
  }
}

int main() {
  int arr[30] = { 4, 6, 7, 5, 7, 8, 4, 6, 9, 3, 8, 7, 9, 5, 7, 3, 8, 9, 4, 7, 8, 9, 4, 3, 7, 3, 3, 4, 7, 4 };
  for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ ) {
    cout << arr[i] << "  ";
  }
  cout << endl;
  insertionSort( arr, ( sizeof( arr ) / sizeof( arr[0] ) ) );
  for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ ) {
    cout << arr[i] << "  ";
  }
  return 0;
}