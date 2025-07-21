#include<iostream>
using namespace std;

int binarySearch(int *arr , int s , int e  , int k ){

    //base case 
    if(s>e)
    return -1;
    //ab mid find karan ga
    int mid = s +(e-s)/2;
    
    //ak or base case ho ga
    if(arr[mid]==k)
    return true ;

    //ab recursive function laga 
    if(arr[mid]< k ){
        return binarySearch(arr ,mid+1 ,e , k);
    }
    else {
        return binarySearch(arr , s , mid-1 ,k);
    }

}

int main (){

    int arr[6]={2,4,6,10,12,14};
    int size = 6;
    int k = 14;
    cout<<"Reukt is :"<<binarySearch(arr, 0 ,5 ,14);
    return 0;
}