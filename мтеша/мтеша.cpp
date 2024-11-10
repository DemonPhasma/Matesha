#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_ITERATIONS = 1000; // Максимальное количество итераций
const double EPSILON = 0.01; // Точность

void solveSystem(double& x1, double& x2, double& x3) {
    for (int i = 0; i < MAX_ITERATIONS; i++) {
        double x1_new = (7.29 + 0.24 * x2 + 6.10 * x3) / 16.63;
        double x2_new = (-3.41 - 3.45 * x1 + 1.11 * x3) / -23.13;
        double x3_new = (-8.19 + 8.72 * x2 + 3.76 * x1) / -27.01;

        // Проверка сходимости
        if (fabs(x1_new - x1) < EPSILON && fabs(x2_new - x2) < EPSILON && fabs(x3_new - x3) < EPSILON) {
            x1 = x1_new;
            x2 = x2_new;
            x3 = x3_new;
            break;
        }

        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    double x1 = 0, x2 = 0, x3 = 0;

    solveSystem(x1, x2, x3);

    cout << fixed << setprecision(4);
    cout << "Решение системы:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_ITERATIONS = 1000; // Максимальное количество итераций
const double EPSILON = 0.0001; // Точность

void solveSystem(double& x1, double& x2, double& x3) {
    for (int i = 0; i < MAX_ITERATIONS; i++) {
        double x1_new = (7.29 + 0.24 * x2 + 6.10 * x3) / 16.63;
        double x2_new = (-3.41 - 3.45 * x1_new + 1.11 * x3) / -23.13;
        double x3_new = (-8.19 + 8.72 * x2_new + 3.76 * x1_new) / -27.01;

        // Проверка сходимости
        if (fabs(x1_new - x1) < EPSILON && fabs(x2_new - x2) < EPSILON && fabs(x3_new - x3) < EPSILON) {
            x1 = x1_new;
            x2 = x2_new;
            x3 = x3_new;
            break;
        }

        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
    }
}

int main() {
    double x1 = 0, x2 = 0, x3 = 0;

    solveSystem(x1, x2, x3);

    cout << fixed << setprecision(4);
    cout << "Решение системы методом Зейделя:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;

    return 0;
}