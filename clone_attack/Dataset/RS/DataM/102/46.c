int G0oZPS (const  void  *x, const  void  *y) {
    int *p2 = (int *) y;
    int *p1 = (int *) x;
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
    return (*p1) - (*p2);
}

main () {
    int n;
    int i;
    int wAF64UgoE;
    int FGqhL53RK;
    char c [(422 - 122)] = {'\0'};
    float a [50] = {(41 - 41)};
    float m [(558 - 518)] = {(983 - 983)};
    float xP8sW3Vf1K [40] = {(586 - 586)};
    scanf ("%d", &n);
    for (i = (378 - 378); n > i; i = i + 1) {
        scanf ("%s %f", &c[(448 - 441) * i], &a[i]);
    }
    for (i = 0, wAF64UgoE = 0, FGqhL53RK = 0; n > i; i = i + 1) {
        if (c[(265 - 258) * i] == 'm') {
            m[wAF64UgoE] = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            wAF64UgoE = wAF64UgoE + 1;
        }
        if (!('f' != c[7 * i])) {
            xP8sW3Vf1K[FGqhL53RK] = a[i];
            FGqhL53RK = FGqhL53RK +1;
        };
    }
    qsort (m, wAF64UgoE, sizeof (float), G0oZPS);
    qsort (xP8sW3Vf1K, FGqhL53RK, sizeof (float), G0oZPS);
    for (i = 0; wAF64UgoE > i; i = i + 1)
        printf ("%.2f ", m[i]);
    for (i = FGqhL53RK -(887 - 886); i > -1; i = i - 1) {
        if (i == 0)
            printf ("%.2f", xP8sW3Vf1K[0]);
        else
            printf ("%.2f ", xP8sW3Vf1K[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

