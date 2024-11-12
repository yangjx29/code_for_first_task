int main () {
    double  Q5qu1h36GZsv, rv2BOn, i4LKtY, h;
    double  a, Zbu1nMgkzjP6, c;
    int n;
    int JnkzlB0Ip;
    scanf ("%d", &n);
    {
        JnkzlB0Ip = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= JnkzlB0Ip) {
            JnkzlB0Ip = JnkzlB0Ip +1;
            scanf ("%lf %lf %lf", &a, &Zbu1nMgkzjP6, &c);
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
            if (0 <= Zbu1nMgkzjP6 *Zbu1nMgkzjP6-4 * a * c) {
                Q5qu1h36GZsv = (-Zbu1nMgkzjP6+sqrt (Zbu1nMgkzjP6 *Zbu1nMgkzjP6-4 * a * c)) / (2 * a);
                rv2BOn = (-Zbu1nMgkzjP6-sqrt (Zbu1nMgkzjP6 *Zbu1nMgkzjP6-4 * a * c)) / (2 * a);
                if (Q5qu1h36GZsv == rv2BOn)
                    printf ("x1=x2=%.5lf\n", Q5qu1h36GZsv, rv2BOn);
                else
                    printf ("x1=%.5lf;x2=%.5lf\n", Q5qu1h36GZsv, rv2BOn);
            }
            if (Zbu1nMgkzjP6 *Zbu1nMgkzjP6-4 * a * c < 0) {
                Q5qu1h36GZsv = (-Zbu1nMgkzjP6+sqrt (-Zbu1nMgkzjP6*Zbu1nMgkzjP6+4 * a * c)) / (2 * a);
                rv2BOn = (-Zbu1nMgkzjP6-sqrt (-Zbu1nMgkzjP6*Zbu1nMgkzjP6+4 * a * c)) / (2 * a);
                h = -Zbu1nMgkzjP6 / (2 * a);
                i4LKtY = sqrt (-Zbu1nMgkzjP6*Zbu1nMgkzjP6+4 * a * c) / (2 * a);
                if (Q5qu1h36GZsv == rv2BOn)
                    printf ("x1=x2=%.5lf+%.5lfi\n", h, i4LKtY);
                else
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", h, i4LKtY, h, i4LKtY);
            };
        };
    }
    return 0;
}

