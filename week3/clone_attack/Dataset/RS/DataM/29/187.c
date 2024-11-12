int main () {
    int k;
    int m;
    int j;
    double  sum [100] = {0};
    double  a, b;
    int VPGWLFMCg;
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
    int e;
    scanf ("%d", &VPGWLFMCg);
    b = 1;
    a = 2;
    {
        k = 0;
        while (k < VPGWLFMCg) {
            scanf ("%d", &m);
            {
                j = 0;
                while (m > j) {
                    j++;
                    sum[k] += a / b;
                    e = b;
                    b = a;
                    a = e + a;
                };
            }
            a = 2;
            b = 1;
            printf ("%.3lf\n", sum[k]);
            k++;
        };
    }
    return 0;
}

