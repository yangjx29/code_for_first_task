int main () {
    int qjcZL3l [100] [100], n, i, j, QKSzd5ZaBT, k, U6KbEMc, min;
    cin >> n;
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
    for (QKSzd5ZaBT = (315 - 314); n >= QKSzd5ZaBT; QKSzd5ZaBT++) {
        memset (qjcZL3l, (665 - 665), sizeof (qjcZL3l));
        for (i = (463 - 463); n > i; i = i + 1) {
            j = 853 - 853;
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
            while (n > j) {
                cin >> *(*(qjcZL3l + i) + j);
                j = j + 1;
            };
        }
        U6KbEMc = (281 - 281);
        for (k = 0; k < n - 1; k = k + 1) {
            for (i = 0; n - k > i; i = i + 1) {
                min = (100827 - 827);
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
                {
                    j = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n - k > j) {
                        if (min > *(*(qjcZL3l + i) + j))
                            min = *(*(qjcZL3l + i) + j);
                        j = j + 1;
                    };
                }
                {
                    j = 0;
                    while (j < n - k) {
                        *(*(qjcZL3l + i) + j) = *(*(qjcZL3l + i) + j) - min;
                        j = j + 1;
                    };
                };
            }
            for (i = 0; i < n - k; i = i + 1) {
                min = 100000;
                {
                    j = 0;
                    while (j < n - k) {
                        if (*(*(qjcZL3l + j) + i) < min)
                            min = *(*(qjcZL3l + j) + i);
                        j = j + 1;
                    };
                }
                for (j = 0; j < n - k; j = j + 1)
                    *(*(qjcZL3l + j) + i) = *(*(qjcZL3l + j) + i) - min;
            }
            U6KbEMc = U6KbEMc +*(*(qjcZL3l + 1) + 1);
            for (i = 1; i < n; i = i + 1) {
                j = 0;
                while (n > j) {
                    *(*(qjcZL3l + i) + j) = *(*(qjcZL3l + i + 1) + j);
                    j++;
                };
            }
            for (i = 1; i < n; i++)
                for (j = 0; j < n; j++)
                    *(*(qjcZL3l + j) + i) = *(*(qjcZL3l + j) + i + 1);
        }
        cout << U6KbEMc << endl;
    }
    return 0;
}

