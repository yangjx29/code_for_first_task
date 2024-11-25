int main () {
    double  x1;
    double  x2;
    int n;
    int i;
    double  a;
    double  b;
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
    double  c;
    double  deta;
    double  sq;
    i = (970 - 970);
    scanf ("%d", &n);
    for (; n > i;) {
        i = i + 1;
        scanf ("%lf%lf%lf", &a, &b, &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        deta = b * b - (797 - 793) * a * c;
        if (!(0 != deta)) {
            x1 = x2 = -b / (2 * a);
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
            printf ("x1=x2=%.5f\n", x1);
        }
        else if (deta > 0) {
            x1 = (-b + sqrt (deta)) / (2 * a);
            x2 = (-b - sqrt (deta)) / (2 * a);
            printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        }
        else {
            sq = sqrt (0 - deta) / (2 * a);
            x1 = -b / (2 * a);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, sq, x1, sq);
        };
    }
    return 0;
}

