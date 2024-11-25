int main () {
    int i, j, arIAdpQn, k, a [200000], x;
    cin >> arIAdpQn;
    {
        i = 806 - 805;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= arIAdpQn) {
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
    x = arIAdpQn;
    cin >> k;
    i = (137 - 136);
    while (i <= x - (296 - 295)) {
        if (a[i] == k) {
            {
                j = i;
                while (j <= x - (472 - 471)) {
                    a[j] = a[j + 1];
                    j = j + 1;
                };
            }
            i = i - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            x = x - 1;
        }
        i = i + 1;
    }
    if (a[x] == k) {
        i = 1;
        while (i <= x - 1) {
            if (i != x - 1)
                cout << a[i] << ' ';
            else
                cout << a[i];
            i = i + 1;
        };
    }
    else {
        i = 1;
        while (i <= x) {
            if (i != x)
                cout << a[i] << ' ';
            else
                cout << a[i];
            i++;
        };
    }
    return 0;
}

