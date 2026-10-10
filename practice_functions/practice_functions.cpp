#include <iostream>
using namespace std;
const int SIZEE = 10;
void number1(int n, int k);
void number2(int fact);
bool number3(int number);
int number4(int numer);
void number5(int num1, int num2);
bool number6(int numberr);
void number7(const int arr[], int size);
int number8(int arr[]);
int number9(int arr[], int size);

int main()
{
    //for number 1
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    number1(n,k);

    //for number 2
    int fact;
    cout << "Enter your number: ";
    cin >> fact;
    number2(fact);


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


    //for number 4
    int numer;
    cout << "Enter number: ";
    cin >> numer;
    cout << number4(numer) <<'\n';



    //for number 5
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin>> num2;
    number5(num1, num2);


    //for number 6
    int numberr;
    cout << "Enter number: ";
    cin >> numberr;
    cout<< number6(numberr);


    //for number 7
    const int arrayy[SIZEE] = { 0,1,2,3,4,5,7,8,9,10 };
    number7(arrayy,SIZEE);


    //for number 8
    int array[SIZEE] = { 0,1,2,3,4,5,6,7,8,9 };
    cout << number8(array, SIZEE);

	//for number 9
	int arr[SIZEE] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	cout << "Number of prime numbers in the array: " << number9(arr, SIZEE) << '\n';
	return 0;
}

void number1(int n, int k) {
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


bool number3(int number) {
    if (number <= 1) return false;

    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int number4(int numer) {
    return numer * numer * numer;
}



void number5(int num1, int num2) {
    if (num1 > num2) {
        cout << "number one " << num1 << " is bigger\n";
    }
    else if (num1 < num2) {
        cout << "number two " << num2 << " is bigger\n";
    }
    else {
        cout << "numbers are equal\n";
    }
}

bool number6(int numberr) {
    if (numberr >= 0) {
        return true;
    }
    else {
        return false;
    }
}

void number7(const int arr[], int size) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }

    cout << min << ' ' << max << '\n';
}


int number8(int arr[], int size) {
    short count = 0;
    for (int i = SIZEE - 1;i >= 0;i--) {
        cout << arr[i] << " ";
        count++;
    }
    return count;
}

int number9(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (number3(arr[i])) {
            count++;
        }
    }

    return count;
}
