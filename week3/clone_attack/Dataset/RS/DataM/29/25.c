int main () {
    int cLKJs5OPx, NygT3luo, Mnog3cGVhf9e, EsH4iCujf7dk;
    double  rTEGIc6Zlz [100] = {1, 2};
    double  b [100];
    double  sum = 0;
    for (NygT3luo = 2; NygT3luo < 100; NygT3luo = NygT3luo +1) {
        rTEGIc6Zlz[NygT3luo] = rTEGIc6Zlz[NygT3luo -1] + rTEGIc6Zlz[NygT3luo -2];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
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
    scanf ("%d", &cLKJs5OPx);
    for (NygT3luo = 0; NygT3luo < 99; NygT3luo = NygT3luo +1) {
        b[NygT3luo] = rTEGIc6Zlz[NygT3luo +1] / rTEGIc6Zlz[NygT3luo];
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
        NygT3luo = 0;
        while (NygT3luo < cLKJs5OPx) {
            NygT3luo = NygT3luo +1;
            scanf ("%d", &EsH4iCujf7dk);
            for (Mnog3cGVhf9e = 0; Mnog3cGVhf9e < EsH4iCujf7dk; Mnog3cGVhf9e = Mnog3cGVhf9e +1) {
                sum = sum + b[Mnog3cGVhf9e];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%.3lf\n", sum);
            sum = 0;
        };
    }
    return 0;
}

