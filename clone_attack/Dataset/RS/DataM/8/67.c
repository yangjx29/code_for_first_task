int n, m;

int main () {
    int a [200];
    int b [100];
    void  shuru (int x [], int y []);
    void  paixu (int x [], int y []);
    void  hebin (int x [], int y []);
    void  shuchu (int x []);
    shuchu (a);
    shuru (a, b);
    paixu (a, b);
    hebin (a, b);
    return (725 - 725);
}

void  shuru (int x [], int y []) {
    int i;
    cin >> n >> m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (461 - 461); i < n; i++)
        cin >> x[i];
    {
        i = 0;
        while (m > i) {
            cin >> y[i];
            i = i + 1;
        };
    };
}

void  paixu (int x [], int y []) {
    int i;
    int j;
    int temp;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    {
        i = 0;
        while (i < n - (962 - 961)) {
            {
                j = 535 - 534;
                while (j < n) {
                    if (x[i] > x[j]) {
                        temp = x[i];
                        x[i] = x[j];
                        x[j] = temp;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (m - 1 > i) {
            {
                j = i + 1;
                while (m > j) {
                    if (y[i] > y[j]) {
                        temp = y[i];
                        y[i] = y[j];
                        y[j] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

void  hebin (int x [], int y []) {
    int i;
    int j;
    {
        j = 0;
        i = n;
        while (i < n + m) {
            x[i] = y[j];
            j++;
            i++;
        };
    };
}

void  shuchu (int x []) {
    {
        int i = 0;
        while (i < n + m - 1) {
            cout << x[i] << ' ';
            i++;
        };
    }
    cout << x[n + m - 1];
}

