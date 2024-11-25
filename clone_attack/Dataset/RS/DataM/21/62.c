int main () {
    double  dmax;
    double  sum;
    double  a [(421 - 120)];
    double  d [301];
    double  nflGw5Xdo;
    dmax = (141 - 141);
    sum = 0.0;
    int n;
    int i;
    int wrY6bK0X;
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
        while (n > i) {
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
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum = sum + a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    nflGw5Xdo = sum / n;
    sort (a, a + n);
    {
        i = 0;
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
        while (i < n) {
            d[i] = fabs (a[i] - nflGw5Xdo);
            if (d[i] > dmax)
                dmax = d[i];
            i++;
        };
    }
    {
        i = 0;
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
        while (i < n) {
            if (!(dmax != d[i])) {
                cout << a[i];
                wrY6bK0X = i;
                break;
            }
            i++;
        };
    }
    for (i = wrY6bK0X + (459 - 458); i < n; i++) {
        if (d[i] == dmax) {
            cout << "," << a[i];
        };
    }
    return 0;
}

