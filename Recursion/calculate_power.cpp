#include<iostream>
using namespace std; 

int power(int a , int b ){
    // Base case
    if(b == 0)
        return 1;
    if(b == 1)
        return a;

    // Recursive call
    int ans = power(a, b / 2);

    // If exponent is even
    if(b % 2 == 0){
        return ans * ans;
    }
    // If exponent is odd
    else{
        return a * ans * ans;
    }
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << endl;

    int ans = power(a , b);
    cout << "Answer is: " << ans << endl;
    return 0;
}
