int main () {
    double  e = 0;
    double  d = 0;
    double  b = 0;
    int i = 0;
    int n = 0;
    int a [100] = {0};
    double  c = 0;
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
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            if (a[i] >= 1 && a[i] <= 18) {
                b = b + 1;
            }
            if (a[i] >= 19 && a[i] <= 35) {
                c = c + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
            if (a[i] >= 36 && a[i] <= (666 - 606)) {
                d = d + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (a[i] >= 61) {
                e = e + 1;
            }
            i++;
        };
    }
    printf ("1-18: %.2f%%\n", 100 * b / (1.0 * n));
    printf ("19-35: %.2f%%\n", 100 * c / (1.0 * n));
    printf ("36-60: %.2f%%\n", 100 * d / (1.0 * n));
    printf ("60??: %.2f%%", 100 * e / (1.0 * n));
    return 0;
}

