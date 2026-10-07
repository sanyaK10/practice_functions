#include <iostream>
using namespace std;
void number1(int n, int k);
void number2(int fact);
void number3(int number);
int number4(int numer);

int main()
{
    //for number 1
    //int n, k;
    //cout << "Enter n: ";
    //cin >> n;
    //cout << "Enter k: ";
    //cin >> k;
    //number1(n,k);

    //for number 2
    //int fact;
    //cout << "Enter your number: ";
    //cin >> fact;
    //number2(fact);


    //for nhumber 3
    int number;
    cout << "Enter your number: ";
    cin >> number;
    number3(number);
    if (number3) {
        cout << "prime number";
    }
    else {
        cout << "not prime number";
    }

}

void number1(int n , int k) {
    for (int i = 0;i < n;++i) {
        for (int j = 0;j < k;++j) {
            cout << 's';
        }
        cout << '\n';
    }
}


void number2(int fact) {
    int facte = 1;
    for (int i = 1;i <= fact;++i) {
        facte *= i;
    }
    cout << "factorial of your number is: " << facte << '\n';
}


//void number3(int number) {
//    if (number <= 1) return;
//  
//    for (int i = 2;i < number;++i) {
//        if (number % i != 0) {
//            continue;
//        }
//        else {
//            break;
//        }
//    }
//}дороби

int number4(int numer) {
    
}