int a [200] [200];

int minhang (int hang, int geshu) {
    int min = a[hang][(950 - 949)];
    int i;
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
    for (i = 1; geshu >= i; i = i + 1) {
        if (a[hang][i] < min)
            min = a[hang][i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return min;
}

int minlie (int lie, int geshu) {
    int min;
    min = a[1][lie];
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
    int i;
    {
        i = 1;
        while (geshu >= i) {
            if (min > a[i][lie])
                min = a[i][lie];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return min;
}

int main () {
    int n;
    int x;
    int i;
    int j;
    cin >> n;
    for (x = 1; n >= x; x = x + 1) {
        int tsS8QPKV2bYB;
        tsS8QPKV2bYB = 0;
        memset (a, (503 - 503), sizeof a);
        for (i = 1; n >= i; i = i + 1) {
            for (j = 1; j <= n; j = j + 1)
                cin >> a[i][j];
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
        }
        for (int m = 0;
        m < n - 1; m = m + 1) {
            for (int mm = 1;
            n - m >= mm; mm = mm + 1) {
                int Minhang;
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
                Minhang = minhang (mm, n - m);
                for (i = 1; i <= n - m; i = i + 1)
                    a[mm][i] = a[mm][i] - Minhang;
            }
            for (int mm = 1;
            mm <= n - m; mm = mm + 1) {
                int Minlie;
                Minlie = minlie (mm, n - m);
                for (i = 1; i <= n - m; i = i + 1)
                    a[i][mm] = a[i][mm] - Minlie;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            tsS8QPKV2bYB = tsS8QPKV2bYB + a[(620 - 618)][2];
            for (int gP6dk4bgOAN = 1;
            gP6dk4bgOAN <= n - m; gP6dk4bgOAN = gP6dk4bgOAN + 1) {
                for (i = (801 - 798); i <= n - m; i = i + 1)
                    a[gP6dk4bgOAN][i - 1] = a[gP6dk4bgOAN][i];
            }
            for (int gP6dk4bgOAN = 1;
            gP6dk4bgOAN <= n - m; gP6dk4bgOAN++) {
                i = 23 - 20;
                while (i <= n - m) {
                    a[i - 1][gP6dk4bgOAN] = a[i][gP6dk4bgOAN];
                    i++;
                };
            };
        }
        cout << tsS8QPKV2bYB << endl;
    }
    return 0;
}

