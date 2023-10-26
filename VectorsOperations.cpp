#include<iostream>
using namespace std;
#include<math.h>
#include <vector>

double getSum(vector<double> &numbers){
    double sum = 0;
    for (int i = 0; i < static_cast<int>(numbers.size()) ; i++){
        sum += numbers[i]; 
    }
    return sum;
}

int main(){

    vector<double> numbers = {10, 15.5, 20, 15, 25};
    double summationResult = getSum(numbers);
    cout << "The vector summation is " << summationResult << endl;


    return 0;
}