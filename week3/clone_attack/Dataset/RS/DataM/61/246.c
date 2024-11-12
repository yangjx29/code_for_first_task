int main () {
    int i;
    int j;
    int n;
    int m;
    int f [25];
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
    cin >> m;
    f[1] = 1;
    f[(716 - 714)] = 1;
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= m) {
            j = j + 1;
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
            cin >> n;
            if ((!(1 != n)) || (n == 2)) {
                cout << f[n] << endl;
            }
            else {
                for (i = 3; i <= n; i++) {
                    f[i] = f[i - 1] + f[i - 2];
                }
                cout << f[n] << endl;
            };
        };
    }
    return 0;
}

