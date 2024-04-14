#include<iostream>
using namespace std;
int firstocuurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key> arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastocuurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key> arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

// int main(){
//     int eve[5]={1,2,3,3,4};
//     cout<<"first occurence of 3 is"<<firstocuurence(eve,5,3)<<endl;
//     cout<<"last occurence of 3 is "<<lastocuurence(eve,5,3)<<endl;
//     return 0;
// }