#include<iostream>
#include<string>
using namespace std;
int linearsearch(int arr[],int size,int n){
    for(int i =0; i<size;i++){
        if(arr[i]==n){
            cout<<arr[i]<<""<<"at index\t"<<i;
            break;
        }
        else{continue;}
    }
    return 0;
}
int main(){
    int arr[10] = {1,3,45,34,76,8,0,12,45,90};
    linearsearch(arr,10,90);
    return 0;
}
