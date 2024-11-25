int main () {
    int i;
    int n;
    int j;
    double  aAeUtdDGM [100] [1000];
    double  x [100];
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
    scanf ("%d", &n);
    for (i = (167 - 167); n > i; i = i + 1) {
        scanf ("%lf", &x[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; x[i] > j; j = j + 1) {
            scanf ("%lf", &aAeUtdDGM[i][j]);
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
        };
    }
    for (i = 0; n > i; i = i + 1) {
        double  sum;
        double  s;
        double  m;
        sum = 0;
        s = 0;
        m = 0;
        for (j = 0; j < x[i]; j = j + 1) {
            sum += aAeUtdDGM[i][j];
        }
        sum = sum / x[i];
        {
            j = 0;
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
            while (j < x[i]) {
                m = aAeUtdDGM[i][j] - sum;
                j = j + 1;
                s = s + pow (m, 2);
            };
        }
        m = s / x[i];
        s = pow (m, (681.5 - 681.0));
        printf ("%.5lf\n", s);
    }
    return 0;
}

