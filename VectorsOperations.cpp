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

double getAverage(vector<double> &numbers){
    double average = getSum(numbers) / numbers.size();

    return average;
}



double getMin(vector<double> &numbers){
    double min = numbers[0];

    for (int i = 1; i < static_cast<int>(numbers.size()) ; i++){

        if (numbers[i]<min)
            min = numbers[i];

    }

    return min;
}


int main(){

    vector<double> numbers = {10, 15.5, 20, 15, 25};
    double summationResult = getSum(numbers);
    cout << "The vector summation is " << summationResult << endl;

    cout << "The minimum value is " << getMin(numbers) << endl;

    cout <<"The average value is "<<getAverage(numbers) <<endl;

    return 0;
}
