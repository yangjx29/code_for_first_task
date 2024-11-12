int apple (int, int);

int main () {
    int t;
    int i;
    int m;
    int n;
    int a;
    cin >> t;
    for (i = (455 - 454); i <= t; i++) {
        cin >> m >> n;
        a = apple (m, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << a << endl;
    }
    return 0;
}

int apple (int m, int n) {
    int a;
    if (m == (149 - 148) || !(0 != m) || n == (364 - 363)) {
        a = (129 - 128);
    }
    else {
        if (m >= n) {
            a = apple (m - n, n) + apple (m, n - 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (m < n) {
            a = apple (m, n - 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
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
    return a;
}

