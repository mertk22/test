#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int integerInt;
    int WholeIntHolder;
    double narcissisticValue = 0 ;
    string integerNumber;
    cin >> integerNumber;
    for (int i = 0; i <integerNumber.size(); ++i) {
        integerInt =(int)(integerNumber[i] - '0');
        narcissisticValue =narcissisticValue + pow(integerInt , integerNumber.size());
        cout << integerInt << " " ;
        cout << integerNumber.size() << " " ;
        cout << pow(integerInt , integerNumber.size()) << " " ;
        cout << narcissisticValue << endl ;
    }
    stringstream convert(integerNumber);

    convert >> WholeIntHolder;
    cout << WholeIntHolder << endl ;
    cout << narcissisticValue<< endl ;

    if (narcissisticValue == WholeIntHolder){
        cout << "The number is a narcissistic number" ;
    }
    else{
        cout << "Number is not a narcissistic number" ;
    }
    return 0;
}
