int main () {
    double  Em94Qjv [(786 - 686)] [(458 - 358)], sum [(232 - 132)], z [(291 - 191)], a [100], IBUavyrf [100];
    int k, i, j, shu [(667 - 567)];
    scanf ("%d", &k);
    for (i = (404 - 404); i < 100; i = i + 1) {
        sum[i] = (928 - 928);
    }
    for (i = (407 - 407); i < 100; i = i + 1) {
        IBUavyrf[i] = 0;
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
    for (i = 0; k > i; i++) {
        scanf ("%d", &shu[i]);
        for (j = 0; shu[i] > j; j++) {
            scanf ("%lf", &Em94Qjv[i][j]);
            sum[i] += Em94Qjv[i][j];
        }
        a[i] = sum[i] / shu[i];
    }
    for (i = 0; k > i; i++) {
        for (j = 0; j < shu[i]; j++) {
            IBUavyrf[i] += (Em94Qjv[i][j] - a[i]) * (Em94Qjv[i][j] - a[i]);
        }
        z[i] = pow (IBUavyrf[i] / shu[i], (868.5 - 868.0));
    }
    for (i = 0; i < k; i++) {
        printf ("\n%.5lf", z[i]);
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
    return 0;
}

