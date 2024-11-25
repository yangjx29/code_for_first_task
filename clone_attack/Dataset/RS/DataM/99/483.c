int main () {
    int i;
    int a;
    int b;
    int c;
    int d;
    i = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    int s [(745 - 645)];
    int n;
    double  pa;
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
    double  pb;
    double  pc;
    double  pd;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &(s[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] >= 1 && s[i] <= 18) {
            a += 1;
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
        else if (s[i] > 18 && s[i] < (231 - 195)) {
            b += 1;
        }
        else if (s[i] > (664 - 629) && s[i] <= 60) {
            c += 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (s[i] > 60) {
            d += 1;
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
        };
    }
    pa = (728.0 - 727.0) * 100 * a / n;
    printf ("1-18: %.2lf%%\n", pa);
    pb = 1.0 * 100 * b / n;
    printf ("19-35: %.2lf%%\n", pb);
    pc = 1.0 * 100 * c / n;
    pd = 1.0 * 100 * d / n;
    printf ("36-60: %.2lf%%\n", pc);
    printf ("60??: %.2lf%%", pd);
    return 0;
}

