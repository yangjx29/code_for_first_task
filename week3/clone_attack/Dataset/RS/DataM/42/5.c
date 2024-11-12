int n, k;
int a [(100553 - 544)];

int main () {
    cin >> n;
    {
        int i = (894 - 893);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
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
            ++i;
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
    cin >> k;
    for (int i = (885 - 884);
    i <= n; ++i) {
        if (a[i] == k) {
            memmove (&a[i], &a[i + 1], (n-- - i) * sizeof (*a));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i - 1;
        };
    }
    for (int i = 1;
    i <= n; ++i) {
        cout << a[i] << (i == n ? '\n' : ' ');
    };
}

