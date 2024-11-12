int main () {
    int a [20000], i, n, k, t;
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - 1) {
            cin >> a[i];
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
            i = i + 1;
        };
    }
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
    cout << a[0];
    {
        i = 1;
        while (i <= n - 1) {
            t = 0;
            {
                k = 0;
                while (k <= i - 1) {
                    if (a[i] == a[k])
                        t = 1;
                    k = k + 1;
                };
            }
            if (t == 0)
                cout << " " << a[i];
            i = i + 1;
        };
    }
    return 0;
}

