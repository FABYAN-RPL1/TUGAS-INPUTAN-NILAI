#include <iostream>
using namespace std;

int main() {
    int nilai;
    string grade;

    cout << "=== APLIKASI INPUTAN NILAI ===" << endl;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai > 90) {
        grade = 'A';
    } else if (nilai > 80) {
        grade = 'B';
    } else if (nilai > 70) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    cout << "Nilai kamu: " << nilai << endl;
    cout << "Grade: " << grade << endl;

    cout << "Tekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
