#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    if(size == 0)
     return 0; //mtlb jb size 0 ho ga to add kuch nh ho ga or zero return ho jay mtlb array
    //recussive step ma  add kara ga lasst element and add sum of the rest

     return arr[size -1 ] + sumArray(arr , size -1);


}


int main() {
    int size = 5;
    int arr[5]={2,3,4,5,6};

    int result = sumArray(arr,size);
    cout<<"Sum of the Array is " <<result;
    return 0 ;


}