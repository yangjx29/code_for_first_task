int main () {
    int j1G0wLl6J, FmLiIcG = 1, ePAmEJ1i8Y, j, uoTOdPrCm, max = 0;
    int kuyKUnW [50000], zd [50000], EbDkOyRfjtIF [50000] = {0};
    scanf ("%d", &j1G0wLl6J);
    for (ePAmEJ1i8Y = 0; j1G0wLl6J > ePAmEJ1i8Y; ePAmEJ1i8Y++) {
        scanf ("%d %d", &kuyKUnW[ePAmEJ1i8Y], &zd[ePAmEJ1i8Y]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    uoTOdPrCm = kuyKUnW[0];
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
    for (ePAmEJ1i8Y = 0; j1G0wLl6J > ePAmEJ1i8Y; ePAmEJ1i8Y++) {
        if (uoTOdPrCm > kuyKUnW[ePAmEJ1i8Y]) {
            uoTOdPrCm = kuyKUnW[ePAmEJ1i8Y];
        }
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
        if (max < zd[ePAmEJ1i8Y]) {
            max = zd[ePAmEJ1i8Y];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (ePAmEJ1i8Y = 0; ePAmEJ1i8Y < j1G0wLl6J; ePAmEJ1i8Y++) {
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
        for (j = kuyKUnW[ePAmEJ1i8Y]; zd[ePAmEJ1i8Y] > j; j++) {
            EbDkOyRfjtIF[j] = 1;
        };
    }
    for (ePAmEJ1i8Y = uoTOdPrCm; ePAmEJ1i8Y < max; ePAmEJ1i8Y++) {
        FmLiIcG = FmLiIcG *(EbDkOyRfjtIF[ePAmEJ1i8Y]);
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
    }
    if (FmLiIcG == 0) {
        printf ("no");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        printf ("%d %d", uoTOdPrCm, max);
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
        };
    }
    return 0;
}

