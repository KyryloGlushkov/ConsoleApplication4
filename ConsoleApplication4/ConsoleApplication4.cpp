
#include <iostream>
#include <math.h>
#include  <windows.h>

using namespace std;
int main() {
   
    SetConsoleOutputCP(1251) ;
    
    int n;
    int sum = 0;
    int product = 1;

    // ������� �������� ����� n
    cout << "������ n: ";
    cin >> n;

    // ��������� ���� � �������
    for (int i = 1; i <= n; i++) {
        sum += i;
        product *= i;
    }

    // �������� �������� ���� � �������
    cout << "�������� ����: " << sum << endl;
    cout << "�������� �������: " << product << endl;

    return 0;
}