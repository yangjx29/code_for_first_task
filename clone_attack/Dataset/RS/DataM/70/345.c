int main () {
    double  x [(892 - 692)], eRT0YOu [(892 - 692)], l [200] [200], max;
    int i, j, ewPImKLWARS1;
    cin >> ewPImKLWARS1;
    for (i = (740 - 740); i < ewPImKLWARS1; i = i + 1)
        cin >> x[i] >> eRT0YOu[i];
    for (i = (593 - 593); ewPImKLWARS1 - 1 > i; i++) {
        j = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ewPImKLWARS1 > j) {
            l[i][j] = pow (abs (x[i] - x[j]), 2) + pow (abs (eRT0YOu[i] - eRT0YOu[j]), 2);
            j = j + 1;
        };
    }
    max = l[0][1];
    for (i = 0; ewPImKLWARS1 - 1 > i; i++)
        for (j = i + 1; j < ewPImKLWARS1; j = j + 1) {
            if (l[i][j] > max)
                max = l[i][j];
        }
    cout << sqrt (max) << endl;
    return 0;
}

