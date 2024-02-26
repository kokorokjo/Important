#include <bits/stdc++.h>
using namespace std;

class Box {
   public:
      static int objectCount;
      //same for all objects

      double length;   

      double getVolume(void);
      void setWidth( double wid );
      friend void printWidth( Box box );
      Box(double len);  // Constructor
      ~Box(); // Destructor
   private:
      double width;
};
Box::Box(double len): length(len) {
   cout << "Object is being created" << endl;
   cout << len<< endl;
   //length = len;
}
Box::~Box(void) {
   cout << "Object is being deleted" << endl;
}
void printWidth( Box box ) {
   cout << "Width of box : " << box.width <<endl;
}

double Box::getVolume(void) {
   return length ;
}

void Box::setWidth( double wid ) {
   width = wid;
}


int main(){
   Box Box1(10.0);        

   Box1.length = 6.0; 

   
   return 0;
}