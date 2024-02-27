#include <bits/stdc++.h>
using namespace std;

class Box {
   public:
      static int objectCount;
      //same for all objects
      double length;  
      double breadth; 

      void print(int i) {
        cout << "Printing int: " << i << endl;
      }//function overloading
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }//function overloading

      double getVolume(void); // member function
      void setHeight( int hei ); // member function
      friend void printWidth( Box box ); // friend function
      Box(double len);  // Constructor
      ~Box(); // Destructor

      Box operator+(const Box& b) {
         Box box(10.0);
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }// Overload + operator to add two Box objects.
      
      Box operator-(){
         length = -length;
         return *this;
      } //overloading unary operator

      friend ostream &operator<<( ostream &output, const Box &D ) { 
         output << "Breadth : " << D.breadth;
         return output;            
      } //overloading << operator

      friend istream &operator>>( istream  &input, Box &D ) { 
         input >> D.breadth;
         return input;            
      } //overloading >> operator


   private:
      int height;
   protected:
      int width;
};

// Derived class
class Rectangle: public Box {
   public:
      int getWidth() { 
         return (width); 
      }
};



Box::Box(double len): length(len) {
   cout << "Object is being created" << endl;
   cout << len<< endl;
   //length = len;
} // constuctor

Box::~Box(void) {
   cout << "Object is being deleted" << endl;
}// destructor

void printWidth( Box box ) {
   cout << "Width of box : " << box.width <<endl;
}// friend function

double Box::getVolume(void) {
   return length ;
}// member function

void Box::setHeight( int hei ) {
   height = hei;
}// member function





int main(){
   Box Box1(10.0), Box2(12.0);   // Declare Box1 of type Box
   Box Box3(10.0);               // Declare Box2 of type Box
   Box1.length = 6.0;            // same as Box1.setLength(6.0);

   Box3 = Box1 + Box2;           // same as Box3 = Box1.operator+(Box2);
   Box1.print(10);               // function overloading
   Box1.print(10.0);             // function overloading

   -Box1;                        //overloading unary operator
   cout<<Box1.getVolume()<<endl; //member function
   
   return 0;
}