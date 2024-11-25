int main () {
    int n;
    int cnt;
    int kobe;
    int a [200] [200] = {0};
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
    cnt = n;
    for (; cnt = cnt - 1;) {
        long  min;
        int sum;
        int i;
        int j;
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
        kobe = n;
        p = a;
        for (i = 0; i < n; i = i + 1)
            for (j = 0; n > j; j = j + 1)
                cin >> *(*(p + i) + j);
        for (int k = 0;
        k < n - (958 - 957); k++) {
            for (i = 0; kobe > i; i++) {
                min = 999999999;
                for (j = 0; kobe > j; j = j + 1)
                    if (min > *(*(p + i) + j))
                        min = *(*(p + i) + j);
                for (j = 0; j < kobe; j = j + 1)
                    *(*(p + i) + j) = *(*(p + i) + j) - min;
            }
            for (j = 0; j < kobe; j++) {
                min = 999999999;
                for (i = 0; kobe > i; i++)
                    if (*(*(p + i) + j) < min)
                        min = *(*(p + i) + j);
                for (i = 0; kobe > i; i++)
                    *(*(p + i) + j) -= min;
            }
            sum = sum + *(*(p + 1) + 1);
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
            for (i = 1; i < kobe; i++)
                for (j = 0; j < kobe; j++)
                    *(*(p + i) + j) = *(*(p + i + 1) + j);
            for (j = 1; j < kobe; j++)
                for (i = 0; i < kobe; i++)
                    *(*(p + i) + j) = *(*(p + i) + j + 1);
            kobe = kobe - 1;
        }
        cout << sum << endl;
    }
    return 0;
}

