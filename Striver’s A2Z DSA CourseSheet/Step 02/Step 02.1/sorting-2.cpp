#include <iostream>
using namespace std;

void mergeSort( int arr[], int low, int high ) {
  if ( low >= high )
    return;

  int mid = ( low + high ) / 2;
  mergeSort( arr, low, mid );
  mergeSort( arr, mid + 1, high );
}

int main() {
  int arr[30] = { 4, 6, 7, 5, 7, 8, 4, 6, 9, 3, 8, 7, 9, 5, 7, 3, 8, 9, 4, 7, 8, 9, 4, 3, 7, 3, 3, 4, 7, 4 };

  for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ ) {
    cout << arr[i] << "  ";
  }

  cout << endl;

  mergeSort( arr, 0, ( sizeof( arr ) / sizeof( arr[0] ) ) );

  for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ ) {
    cout << arr[i] << "  ";
  }

  return 0;
}