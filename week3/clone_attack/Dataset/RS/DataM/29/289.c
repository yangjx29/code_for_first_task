int main () {
    int m;
    int i;
    scanf ("%d", &m);
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
    for (i = 0; i < m; i = i + 1) {
        int n;
        int a;
        int EzucOJ;
        int k;
        int e;
        a = (329 - 327);
        EzucOJ = 1;
        double  sum;
        sum = 0;
        scanf ("%d", &n);
        for (k = 1; k <= n; k = k + 1) {
            sum = sum + (double ) a / EzucOJ;
            e = a;
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
            a = a + EzucOJ;
            EzucOJ = e;
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

