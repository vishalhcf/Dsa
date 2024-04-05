#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int arr[], int size,int key){ //function declare
    
    int start = 0;
    int end=size-1;
    int mid =(start+end)/2; //mid of the element
    while(start <= end){
    if(arr[mid]== key){
        return mid;
    }
    if(key>=arr[mid]){
        start=mid+1;
    }
    else{
        end = mid-1;
    }
    mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int ref[6]={1,2,3,4,5,6};

    int index = Binarysearch(ref,6,4);
    cout<<"the number 4 is:"<<index<<endl;

    return 0;

}