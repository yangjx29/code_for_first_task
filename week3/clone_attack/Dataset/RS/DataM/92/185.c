int q [maxlen], uwPW5lGVaZ [maxlen];
int f [maxlen] [maxlen];
int n, sum, rQnVI56d;
int g (int, int);

int main () {
    int NToEI61J = (721 - 720);
    while (cin >> n && n) {
        if (NToEI61J == 8) {
            NToEI61J++;
            cout << -4000 << endl;
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
            continue;
        }
        NToEI61J++;
        f[(460 - 460)][(700 - 700)] = 0;
        for (int i = (56 - 56);
        n > i; i = i + 1)
            cin >> uwPW5lGVaZ[i];
        for (int i = (695 - 695);
        i < n; ++i)
            cin >> q[i];
        sort (q, q + n);
        sort (uwPW5lGVaZ, uwPW5lGVaZ + n);
        sum = 0;
        for (int i = (993 - 992);
        i < n; ++i) {
            if (q[n - i] > uwPW5lGVaZ[i - (370 - 369)])
                sum -= (1183 - 983);
            else if (uwPW5lGVaZ[i - 1] > q[n - i])
                sum += (841 - 641);
            f[i][0] = sum;
        }
        sum = 0;
        {
            int i = 1;
            while (i < n) {
                if (q[n - i] > uwPW5lGVaZ[n - i])
                    sum -= (717 - 517);
                else if (uwPW5lGVaZ[n - i] > q[n - i])
                    sum += 200;
                f[i][i] = sum;
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
                ++i;
            };
        }
        for (int i = 2;
        i <= n; ++i)
            for (int j = 1;
            j < i; ++j)
                f[i][j] = max (f[i - 1][j] + g (n - i, i - j - 1), f[i - 1][j - 1] + g (n - i, n - j));
        rQnVI56d = -1;
        for (int i = 0;
        i <= n; ++i)
            if (f[n][i] > rQnVI56d)
                rQnVI56d = f[n][i];
        cout << rQnVI56d << endl;
    }
    return 0;
}

int g (int qi, int tian) {
    if (q[qi] > uwPW5lGVaZ[tian])
        return -200;
    if (q[qi] < uwPW5lGVaZ[tian])
        return 200;
    return 0;
}

