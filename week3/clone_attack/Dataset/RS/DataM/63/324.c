int main () {
    int x1;
    int LOY3U5;
    int x2;
    int y2;
    int a [(869 - 769)] [(395 - 295)];
    int b [100] [100];
    int c [100] [100];
    cin >> x1 >> LOY3U5;
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
    cout << endl;
    {
        int i = (245 - 245);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            {
                int j = (155 - 155);
                while (j < LOY3U5) {
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
            cout << endl;
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
    cin >> x2 >> y2;
    cout << endl;
    {
        int i = (574 - 574);
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
        while (i < x2) {
            cout << endl;
            {
                int j = (795 - 795);
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
                while (y2 > j) {
                    cin >> b[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
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
    {
        int i = 0;
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
        while (x1 > i) {
            {
                int j = 0;
                while (y2 > j) {
                    c[i][j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (x1 > i) {
            {
                int j = 0;
                while (j < y2) {
                    {
                        int k = 0;
                        while (k < x2) {
                            c[i][j] += a[i][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < x1) {
            {
                int j = 0;
                while (j < y2 - 1) {
                    cout << c[i][j] << " ";
                    j++;
                };
            }
            cout << c[i][y2 - 1];
            i++;
            cout << endl;
        };
    }
    return 0;
}

