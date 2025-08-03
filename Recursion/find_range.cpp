#include <iostream>
using namespace std;

void calculateSums(int num, int pos, int &oddSum, int &evenSum) {
    if (num == 0) return;

    int digit = num % 10; //is say last digit ay ga

    if (pos % 2 == 0)
        evenSum += digit;  //agrr equal aya to even ma add nh to odd ma
    else
        oddSum += digit;
    //recursive call na har bar number 10 sa divide ho ga postion 1 sa age jay gi or number update
    calculateSums(num / 10, pos + 1, oddSum, evenSum);
}
//yh function check kara ga ka even position or odd position add karna ka baad same ha
bool isValid(int num) {
    int oddSum = 0, evenSum = 0;
    calculateSums(num, 1, oddSum, evenSum); 
    return oddSum == evenSum;
}
//yh statedment print kara ga 
void printValidNumbers(int current) {
    if (current > 999) return;

    if (isValid(current))
        cout << current << endl;

    printValidNumbers(current + 1);
}

int main() {
    cout << "Starting...\n";
    printValidNumbers(100);
    return 0;
}
