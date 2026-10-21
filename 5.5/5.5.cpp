#include <iostream>
using namespace std;

// Рекурсивне обчислення функції Аккермана
int A(const int m, const int n, const int level, int& maxDepth)
{
    // Оновлення максимальної глибини
    if (level > maxDepth)
        maxDepth = level;

    // Виведення інформації про поточний виклик
    cout << "Level: " << level
        << " | A(" << m << ", " << n << ")" << endl;

    // Перша умова
    if (m == 0)
        return n + 1;

    // Друга умова
    if (n == 0)
        return A(m - 1, 1, level + 1, maxDepth);

    // Третя умова
    int temp = A(m, n - 1, level + 1, maxDepth);

    return A(m - 1, temp, level + 1, maxDepth);
}

int main()
{
    int m, n;

    cout << "m: ";
    cin >> m;

    cout << "n: ";
    cin >> n;

    int maxDepth = 0;

    int answer = A(m, n, 1, maxDepth);

    cout << "Result A(" << m << ", " << n << ") = "
        << answer << endl;

    cout << "Maximum depth = " << maxDepth << endl;

    return 0;
}
