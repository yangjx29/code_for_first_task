int main () {
    int a [100] [100] = {(610 - 610)};
    int b [100] [100] = {(400 - 400)};
    int c [100] [100] = {(930 - 930)};
    int I;
    int J;
    int P;
    int Q;
    I = (724 - 724);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    J = (584 - 584);
    P = 0;
    Q = 0;
    cin >> I >> J;
    for (int i = 0;
    I > i; i = i + 1)
        for (int j = 0;
        J > j; j = j + 1)
            cin >> a[i][j];
    cin >> P >> Q;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < P) {
            {
                int j = 0;
                while (Q > j) {
                    cin >> b[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    for (int i = 0;
    I > i; i = i + 1)
        for (int j = 0;
        Q > j; j = j + 1)
            for (int q = 0;
            q < J; q = q + 1)
                c[i][j] = c[i][j] + a[i][q] * b[q][j];
    for (int i = 0;
    i < I; i++)
        for (int q = 0;
        Q > q; q++) {
            if (q < Q -1)
                cout << c[i][q] << " ";
            if (q == Q -1)
                cout << c[i][q] << endl;
        }
    return 0;
}

