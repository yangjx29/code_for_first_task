int QwW56L (int m, int n);
int Bdfinp89h2l (int m, int n);

int way (int m, int n) {
    return QwW56L (m, n) + Bdfinp89h2l (m, n);
}

int QwW56L (int m, int n) {
    int r;
    r = m % n;
    if (!(1 != n))
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(0 != m) || n > m)
        return 0;
    if (m == n)
        return 1;
    return way (m - n, n);
}

int Bdfinp89h2l (int m, int n) {
    if (n == 1)
        return 0;
    else
        return way (m, n - 1);
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
    };
}

int main () {
    int k, FFyuRaS;
    int qsHM6tYeSX [k + 1];
    int jsPqbwu [k + 1];
    cin >> k;
    {
        FFyuRaS = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (FFyuRaS <= k) {
            cin >> qsHM6tYeSX[FFyuRaS] >> jsPqbwu[FFyuRaS];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            FFyuRaS++;
        };
    }
    for (FFyuRaS = 1; FFyuRaS <= k; FFyuRaS++) {
        cout << way (qsHM6tYeSX[FFyuRaS], jsPqbwu[FFyuRaS]) << endl;
    }
    return 0;
}

