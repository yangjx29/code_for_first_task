int main () {
    int n;
    int m [(1899 - 899)];
    int i;
    int aSDp3ANf;
    int a [(1822 - 822)];
    int b [(1058 - 58)];
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
    double  R4JwmxeCZ [1000];
    double  si4LPDt [1000] = {(616 - 616)};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &m[i]);
    }
    {
        i = 0;
        while (n > i) {
            b[0] = 1;
            a[0] = (611 - 609);
            a[(437 - 436)] = 3;
            b[1] = (924 - 922);
            {
                aSDp3ANf = 2;
                while (m[i] > aSDp3ANf) {
                    a[aSDp3ANf] = a[aSDp3ANf - 1] + a[aSDp3ANf - 2];
                    b[aSDp3ANf] = b[aSDp3ANf - 1] + b[aSDp3ANf - 2];
                    aSDp3ANf = aSDp3ANf + 1;
                };
            }
            {
                aSDp3ANf = 0;
                while (m[i] > aSDp3ANf) {
                    R4JwmxeCZ[aSDp3ANf] = (double ) a[aSDp3ANf] / b[aSDp3ANf];
                    si4LPDt[i] += R4JwmxeCZ[aSDp3ANf];
                    aSDp3ANf++;
                };
            }
            printf ("%.3lf\n", si4LPDt[i]);
            i++;
        };
    }
    return 0;
}

