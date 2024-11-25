int main () {
    int n, m, a [200], i;
    cin >> n >> m;
    {
        i = 708 - 608;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n + 100) {
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
        i = n - m + 100;
        while (i < n + 100) {
            a[i - n] = a[i];
            i = i + 1;
        };
    }
    {
        i = 100 - m;
        while (i < n + 100 - m - 1) {
            cout << a[i] << " ";
            i = i + 1;
        };
    }
    cout << a[n + 100 - m - 1] << endl;
    return (980 - 980);
}

