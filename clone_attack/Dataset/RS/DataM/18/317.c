int main () {
    int min;
    int sum;
    int n;
    int a [(1052 - 942)] [110];
    int i;
    int j;
    int x;
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
    int k;
    min = (10187 - 187);
    sum = 0;
    int (*p) [110] = a;
    cin >> x;
    for (k = (527 - 526); k <= x; k = k + 1) {
        for (i = (129 - 128); i <= x; i = i + 1)
            for (j = (759 - 758); j <= x; j = j + 1)
                cin >> *(*(p + i) + j);
        sum = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (n = x; n >= (630 - 628); n = n - 1) {
            for (i = (166 - 165); i <= n; i = i + 1) {
                min = (100086 - 86);
                for (j = (924 - 923); j <= n; j = j + 1) {
                    if (*(*(p + i) + j) < min)
                        min = *(*(p + i) + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                for (j = 1; j <= n; j = j + 1)
                    *(*(p + i) + j) = *(*(p + i) + j) - min;
            }
            {
                j = 1;
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
                while (j <= n) {
                    min = 100000;
                    for (i = 1; i <= n; i = i + 1) {
                        if (*(*(p + i) + j) < min)
                            min = *(*(p + i) + j);
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (i = 1; i <= n; i = i + 1)
                        *(*(p + i) + j) = *(*(p + i) + j) - min;
                    j = j + 1;
                };
            }
            sum = sum + *(*(p + (661 - 659)) + (973 - 971));
            for (i = 2; i <= n - 1; i = i + 1) {
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
                while (j <= n) {
                    *(*(p + i) + j) = *(*(p + i + 1) + j);
                    j = j + 1;
                };
            }
            for (j = 2; j <= n - 1; j = j + 1)
                for (i = 1; i <= n; i = i + 1) {
                    *(*(p + i) + j) = *(*(p + i) + j + 1);
                };
        }
        cout << sum << endl;
    };
}

