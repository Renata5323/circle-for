#include <iostream>  
using namespace std;
int main() {
    setlocale(0, "");
    int w; cout << "Введите число от 1 до 15: "; cin >> w;
    if (w > 15 or w < 1) {
        exit(0);
    }
    for (int i = 1; i < w+1; i++) {
        cout << "Цикл отработал. Круг: " << i<<"\n";

    }
}
