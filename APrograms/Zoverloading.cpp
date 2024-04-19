#include <iostream>
#include <vector>
using namespace std;


class Obj {
   static int i, j;
   
public:
   void f() const { cout << i++ << endl; }
   void g() const { cout << j++ << endl; }
};
// Create class

int Obj::i = 10;
int Obj::j = 12;
// Static members


class ObjContainer {
   vector<Obj*> a;

   public:
      void add(Obj* obj) { 
         a.push_back(obj);
      }
      friend class SmartPointer;
};
// container for the Obj class

// implement smart pointer to access member of Obj class.
class SmartPointer {
   ObjContainer oc;
   int index;
   
   public:
      SmartPointer(ObjContainer& objc) { 
         oc = objc;
         index = 0;
      }
   
      // Return value indicates end of list:
      bool operator++() { 
         if(index >= oc.a.size()) return false;
         if(oc.a[++index] == 0) return false;
         return true;
      }
   
      bool operator++(int) {
         return operator++();
      }
   
      // overload operator->
      Obj* operator->() const {
         if(!oc.a[index]) {
            cout << "Zero value";
            return (Obj*)0;
         }
      
         return oc.a[index];
      }
};

int main() {
   const int sz = 10;
   Obj o[sz];
   ObjContainer oc;
   
   for(int i = 0; i < sz; i++) {
      oc.add(&o[i]);
   }
   
   SmartPointer sp(oc); // Create an iterator
   do {
      sp->f(); // smart pointer call
      sp->g();
   } while(sp++);
   
   return 0;
}