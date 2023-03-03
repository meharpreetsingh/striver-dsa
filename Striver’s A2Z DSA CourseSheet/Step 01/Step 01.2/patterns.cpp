#include <bits/stdc++.h>
using namespace std;

void pattern1( int n ) {
  /*
  Time Complexity: n^2
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern2( int n ) {
  /*
  Time Complexity: O(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j <= i; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3( int n ) {
  /*
  Time Complexity: O(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 1; j <= i + 1; j++ ) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern4( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 1; j <= i + 1; j++ ) {
      cout << i + 1;
    }
    cout << endl;
  }
}

void pattern5( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = n; i > 0; i-- ) {
    for ( int j = 0; j < i; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern6( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = n; i > 0; i-- ) {
    for ( int j = 0; j < i; j++ ) {
      cout << j + 1;
    }
    cout << endl;
  }
}

void pattern7( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n - i - 1; j++ ) {
      cout << "-";
    }
    for ( int k = 0; k < i * 2 + 1; k++ ) {
      cout << "*";
    }
    for ( int j = 0; j < n - i - 1; j++ ) {
      cout << "-";
    }
    cout << "\t\tline-end" << endl;
  }
}

void pattern8( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < i; j++ ) {
      cout << "-";
    }
    for ( int k = 0; k < ( n - i ) * 2 - 1; k++ ) {
      cout << "*";
    }
    for ( int j = 0; j < i; j++ ) {
      cout << "-";
    }
    cout << "\t\tline-end" << endl;
  }
}

void pattern10( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 1; i <= n * 2 - 1; i++ ) {
    int stars = i;
    if ( i > n )
      stars = 2 * n - i;
    for ( int j = 0; j < stars; j++ ) {
      cout << "*";
    }
    cout << "\t\tline-end" << endl;
  }
}

void pattern11( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << ( j + i + 1 ) % 2;
    }
    cout << "\t\tline-end" << endl;
  }
}
void pattern12( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  int space = 2 * ( n - 1 );
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << j;
    }
    for ( int k = 0; k < space; k++ ) {
      cout << " ";
    }

    for ( int l = i; l >= 1; l-- ) {
      cout << l;
    }
    cout << endl;
    space -= 2;
  }
}

void pattern13( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  int count = 1;
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= i; j++ ) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}
void pattern14( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( char j = 'A'; j < 'A' + i; j++ ) {
      cout << j;
    }
    cout << endl;
  }
}
void pattern15( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    for ( char j = 'A'; j < 'A' + n - i; j++ ) {
      cout << j;
    }
    cout << endl;
  }
}
void pattern16( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    char currentCharacter = 'A' + i;
    for ( char j = 0; j <= i; j++ ) {
      cout << currentCharacter;
    }
    cout << endl;
  }
}
void pattern17( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    // Space
    for ( int k = n - 1; k > i; k-- ) {
      cout << "-";
    }
    // Character - 1
    for ( char j = 'A'; j <= 'A' + i; j++ ) {
      cout << j;
    }
    // Character - 2
    for ( char l = 'A' + i - 1; l >= 'A'; l-- ) {
      cout << l;
    }

    cout << endl;
  }
}

void pattern18( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n; i++ ) {
    // Character
    char currentCharacter = 'E' - i;
    for ( int j = 0; j <= i; j++ ) {
      cout << char( currentCharacter + j );
    }
    cout << endl;
  }
}

void pattern19( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  int stars = n;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < stars - i; j++ ) {
      cout << "*";
    }
    for ( int k = 0; k < i * 2; k++ ) {
      cout << "-";
    }
    for ( int j = 0; j < stars - i; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  int spaces = n * 2 - 2;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j <= i; j++ ) {
      cout << "*";
    }
    for ( int k = 0; k < spaces; k++ ) {
      cout << "-";
    }
    spaces -= 2;
    for ( int j = 0; j <= i; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern20( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  int space = n * 2 - 2;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j <= i; j++ ) {
      cout << "*";
    }
    for ( int k = 0; k < space; k++ ) {
      cout << "-";
    }
    space -= 2;
    for ( int j = 0; j <= i; j++ ) {
      cout << "*";
    }
    cout << endl;
  }
  space = 2;
  for ( int i = 0; i < n - 1; i++ ) {
    for ( int j = n - 1; j > i; j-- ) {
      cout << "*";
    }
    for ( int k = 0; k < space; k++ ) {
      cout << "-";
    }
    space += 2;
    for ( int j = n - 1; j > i; j-- ) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern21( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 1; i <= n; i++ ) {
    if ( i == 1 || i == n ) {
      for ( int j = 1; j <= n; j++ ) {
        cout << '*';
      }
    } else {
      cout << '*';
      for ( int k = 1; k <= n - 2; k++ ) {
        cout << " ";
      }
      cout << '*';
    }
    cout << endl;
  }
}

void pattern22( int n ) {
  /*
  Time Complexity: o(n^2)
  */
  for ( int i = 0; i < n * 2 - 1; i++ ) {
    for ( int j = 0; j < n * 2 - 1; j++ ) {
      int top = i;
      int left = j;
      int right = ( 2 * n - 2 ) - j;
      int bottom = ( 2 * n - 2 ) - i;
      cout << ( n - min( min( top, bottom ), min( left, right ) ) );
    }
    cout << endl;
  }
}

int main() {
  int n = 5;
  pattern10( n );
  return 0;
}