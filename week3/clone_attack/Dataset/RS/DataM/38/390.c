double  VqyLMK (double  [], int);

int main () {
    int n;
    int r92s7Debj;
    int j;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (r92s7Debj = (992 - 992); n > r92s7Debj; r92s7Debj = r92s7Debj + 1) {
        double  X [105];
        cin >> m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (774 - 774); j < m; j = j + 1)
            cin >> X[j];
        cout << fixed << setprecision ((558 - 553));
        cout << VqyLMK (X, m) << endl;
    }
    return (961 - 961);
}

double  VqyLMK (double  X [105], int n) {
    double  sum;
    double  V;
    sum = 0;
    V = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    int r92s7Debj;
    {
        r92s7Debj = 0;
        while (n > r92s7Debj) {
            sum += X[r92s7Debj];
            r92s7Debj = r92s7Debj + 1;
        };
    }
    sum = sum / n;
    for (r92s7Debj = 0; n > r92s7Debj; r92s7Debj = r92s7Debj + 1)
        V += pow (X[r92s7Debj] - sum, 2);
    return sqrt (V / n);
}

