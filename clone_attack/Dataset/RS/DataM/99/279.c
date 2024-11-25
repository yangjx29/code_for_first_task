int main () {
    int i;
    int x [N];
    int n, a = 0, b = 0, c = 0, d = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &x[i]);
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
        while (i < n) {
            if (x[i] <= 18) {
                a = a + 1;
            }
            else {
                if (x[i] >= 19 && x[i] <= 35) {
                    b = b + 1;
                }
                else {
                    if (x[i] >= 36 && x[i] <= 60) {
                        c = c + 1;
                    }
                    else {
                        d = d + 1;
                    };
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    printf ("1-18: %.2lf%\n", 1.0 * a / n * 100);
    printf ("19-35: %.2lf%\n", 1.0 * b / n * 100);
    printf ("36-60: %.2lf%\n", 1.0 * c / n * 100);
    printf ("60??: %.2lf%\n", 1.0 * d / n * 100);
    return 0;
}

