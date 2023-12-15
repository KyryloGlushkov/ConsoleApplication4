
#include <iostream>
#include <math.h>
#include  <windows.h>

using namespace std;
int main() {
   
    SetConsoleOutputCP(1251) ;
    
    int n;
    int sum = 0;
    int product = 1;

    // Введемо значення змінної n
    cout << "Введіть n: ";
    cin >> n;

    // Обчислимо суму і добуток
    for (int i = 1; i <= n; i++) {
        sum += i;
        product *= i;
    }

    // Виведемо значення суми і добутку
    cout << "Значення суми: " << sum << endl;
    cout << "Значення добутку: " << product << endl;

    return 0;
}