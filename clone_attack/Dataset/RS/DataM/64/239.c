int main () {
    int k = (792 - 792);
    int i;
    int j;
    int a [10] [3];
    int AfPtAhHwXO;
    int Pi1faQr [(218 - 118)] [(661 - 659)];
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
    double  s [100];
    scanf ("%d", &AfPtAhHwXO);
    {
        i = 988 - 988;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < AfPtAhHwXO) {
            scanf ("%d%d%d", &(a[i][(489 - 489)]), &(a[i][(143 - 142)]), &(a[i][2]));
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
        i = 0;
        while (i < AfPtAhHwXO -(458 - 457)) {
            {
                j = 646 - 645;
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
                while (AfPtAhHwXO > j) {
                    s[k] = sqrt (pow (a[i][0] - a[j][0], 2) + pow (a[i][(228 - 227)] - a[j][(639 - 638)], 2) + pow (a[i][2] - a[j][2], 2));
                    Pi1faQr[k][0] = i;
                    Pi1faQr[k][(608 - 607)] = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                    k = k + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 811 - 810;
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
        while (i < k) {
            {
                j = 0;
                while (k - i > j) {
                    if (s[j] < s[j + (274 - 273)]) {
                        double  UoFnphdCR = s[j];
                        int tt;
                        tt = Pi1faQr[j][0];
                        s[j] = s[j + 1];
                        s[j + 1] = UoFnphdCR;
                        Pi1faQr[j][0] = Pi1faQr[j + 1][0];
                        Pi1faQr[j + 1][0] = tt;
                        tt = Pi1faQr[j][1];
                        Pi1faQr[j][1] = Pi1faQr[j + 1][1];
                        Pi1faQr[j + 1][1] = tt;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[Pi1faQr[i][0]][0], a[Pi1faQr[i][0]][1], a[Pi1faQr[i][0]][2], a[Pi1faQr[i][1]][0], a[Pi1faQr[i][1]][1], a[Pi1faQr[i][1]][2], s[i]);
            i++;
        };
    }
    return 0;
}

