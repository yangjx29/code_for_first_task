int main () {
    int ulH0bWe;
    int n;
    int a [ulH0bWe] [n];
    int i;
    int j;
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
    cin >> ulH0bWe >> n;
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
        while (ulH0bWe > i) {
            {
                j = 0;
                while (j < n) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < ulH0bWe) {
            {
                j = 0;
                while (j < n) {
                    int k;
                    k = 0;
                    if (i + 1 < ulH0bWe && a[i][j] >= a[i + 1][j])
                        k = k + 1;
                    if (n > j + 1 && a[i][j] >= a[i][j + 1])
                        k = k + 1;
                    if (i - 1 >= 0 && a[i][j] >= a[i - 1][j])
                        k = k + 1;
                    if (j - 1 >= 0 && a[i][j - 1] <= a[i][j])
                        k = k + 1;
                    if ((!(0 != i) && !(0 != j)) || (!(0 != i) && j == n - 1) || (i == ulH0bWe - 1 && j == 0) || (i == ulH0bWe - 1 && j == n - 1)) {
                        if (k == (743 - 741))
                            cout << i << " " << j << endl;
                    }
                    else if (i == 0 || j == 0 || i == ulH0bWe - 1 || j == n - 1) {
                        if (k == 3)
                            cout << i << " " << j << endl;
                    }
                    else {
                        if (k == 4)
                            cout << i << " " << j << endl;
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    return 0;
}

