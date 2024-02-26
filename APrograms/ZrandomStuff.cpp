#include<bits/stdc++.h>
using namespace std;

#define LENGTH 10   
#define NEWLINE '\n'

int main(){
    typedef int feet;
    feet distance = 5;
    // feet is an alias for int
    enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    week today;
    today = Wednesday;
    //today is equal to Wednesday or 3
    const int  WIDTH  = 5;
    int area=LENGTH*WIDTH;
    cout << NEWLINE;
    // define a constant 
    int var = 20;
    int y = 10;
    var = (y < 10) ? 30 : 40;
    if(y < 10) { 
    var = 30;
    } else {
    var = 40;
    }
    // both same
    int i, j;
    j = 10;
    i = (j++, j+100, 999+j);
    // i = 1010
    double a = 21.09399;
    int c ;
    c = (int) a;
    // c = 21
    LOOP:do {
      if( a == 15) {
         // skip the iteration.
         a = a + 1;
         goto LOOP;
      }
      cout << "value of a: " << a << endl;
      a = a + 1;
    } 
    while( a < 20 );
    // goto statement
}