#include<iostream>
using namespace std;

int recursiveLinearSearch(int arr[], int size , int target , int index = 0){
//base  case ho agrr array 
if(index >= size)
return -1;
//or recursive case yh ha ka
if(arr[index]==target)
return index;

return recursiveLinearSearch(arr,size,target,index+1);
}

int main(){

    int arr[6]={10, 25, 30, 45, 60, 75};
    int size=6;
    int target = 60;

    int result = recursiveLinearSearch(arr,size,target);
    if(result != -1){
    cout<<"Element Found at the index : "<<result<<endl;
    }
    else
    {
        cout<<"Element Not found in the array"<<endl;

    }
    return 0;

}