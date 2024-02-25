#include<iostream>
#include<vector>

using namespace std;

void countingSort(vector<int> &hlavny){
    int max = hlavny[0];
    for(int i=0; i<hlavny.size(); i++){
        if(hlavny[i]>max) max = hlavny[i];
    }
    vector<int> pomocny(max+1);
    for(int i=0; i<hlavny.size(); i++){
        pomocny[hlavny[i]]++;
    }
    int index = 0;
    for(int i=0; i<pomocny.size(); i++){
        for(int j=0; j<pomocny[i]; j++){
            hlavny[index] = i;
            index++;
        }
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> hlavny(n);
    for(int i=0; i<n; i++){
        cin>>hlavny[i];
    }
    countingSort(hlavny);
    for(int i=0; i<n; i++){
        cout<<hlavny[i];
        if(i<n-1) cout<<" ";
    }

}