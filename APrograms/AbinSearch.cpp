#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> &hlavny,int lookinFor){
    int start=0;
    int end=hlavny.size()-1;

    while(start+1<end){
    int mid=(start+end)/2;
    if (hlavny[mid]==lookinFor){
        start=mid;
        break;
    }   
    else if (hlavny[mid]>lookinFor)
        end=mid;
    else
        start=mid;
    }
    if(hlavny[start]==lookinFor)
        return start;
    else if(hlavny[end]==lookinFor)
        return end;
    else
        return -1;
}

int main(){
    vector<int> hlavny = {1, 3, 5, 7, 9},vedlajsi;
    int q=hlavny.size();
    int lookFor=3;
    if(binSearch(hlavny,lookFor)!=-1)
        cout<<"A"<<endl;
    else
        cout<<"N"<<endl;
    

}
// Print A if the number is in the array, N if it is not.
// Time complexity: O(log(n))