int main () {
    int geshu [100];
    int RY1Ahk6FW5z;
    int i, j, k;
    double  shu [100];
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
    double  sum, Qbm7s5Du1, sss, ans [100];
    scanf ("%d", &RY1Ahk6FW5z);
    for (i = 0; i < RY1Ahk6FW5z; i++) {
        Qbm7s5Du1 = 0.0;
        sum = 0.0;
        sss = 0.0;
        scanf ("%d", &geshu[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < geshu[i]; j++) {
            scanf ("%lf", &shu[j]);
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
            sum = sum + shu[j];
        }
        Qbm7s5Du1 = sum / geshu[i];
        for (k = 0; k < geshu[i]; k = k + 1) {
            sss = sss + (shu[k] - Qbm7s5Du1) * (shu[k] - Qbm7s5Du1);
        }
        ans[i] = (sqrt (sss / geshu[i]));
    }
    for (i = 0; i < RY1Ahk6FW5z; i++) {
        printf ("%.5lf\n", ans[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

