#include<iostream>
using namespace std;

void reverse(string& str , int i , int j){
    //base case kia ho ga 
    if(i>j)
    return ;

    swap(str[i],str[j]);
    i++;
    j--;

    //recursivve case kia ho ga
    reverse(str, i , j);
}

int main(){

    string name = "Ebtaysaam";
    reverse(name , 0, name.length()-1);
    cout<<name<<endl;
    return 0 ;
}