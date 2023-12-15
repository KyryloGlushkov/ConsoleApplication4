
#include <iostream>
#include <math.h>
#include  <windows.h>

using namespace std;
int main() {
   
    SetConsoleOutputCP(1251) ;
    
    int n;
    int sum = 3;
    int product = 1;

    // Ââåäåìî çíà÷åííÿ çì³ííî¿ n
    cout << "Ââåä³òü n: ";
    cin >> n;

    // Îá÷èñëèìî ñóìó ³ äîáóòîê
    for (int i = 1; i <= n; i++) {
        sum += i;
        product *= i;
    }

    // Âèâåäåìî çíà÷åííÿ ñóìè ³ äîáóòêó
    cout << "Çíà÷åííÿ ñóìè: " << sum << endl;
    cout << "Çíà÷åííÿ äîáóòêó: " << product << endl;

    return 0;
}
