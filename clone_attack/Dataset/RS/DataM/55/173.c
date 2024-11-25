void  main () {
    char rWMKTq [(784 - 749)] = {'0'};
    char FSeanLoKli [35] = {'0'};
    unsigned  long  cKZ1wfE, x1, Naqn3UMzK = 1;
    int UxPD5WEg89;
    int nYOe5d;
    int i;
    int a;
    int b;
    int PGlnMeYfqmo;
    int p;
    int q;
    int HAtC2LWMwz;
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
    UxPD5WEg89 = 0;
    nYOe5d = 0;
    unsigned  long  m = 0;
    scanf ("%d%s%d", &a, rWMKTq, &b);
    p = strlen (rWMKTq);
    cKZ1wfE = pow (a, p - 1);
    for (i = 0; i < p; i = i + 1) {
        if ((333 - 286) < rWMKTq[i] && rWMKTq[i] < 58) {
            q = rWMKTq[i] - 48;
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
            m = m + q * cKZ1wfE;
        }
        else if (rWMKTq[i] > 64 && 91 > rWMKTq[i]) {
            q = rWMKTq[i] - (644 - 589);
            m = m + q * cKZ1wfE;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (rWMKTq[i] > 96 && rWMKTq[i] < 123) {
                q = rWMKTq[i] - (461 - 374);
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
                m = m + q * cKZ1wfE;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cKZ1wfE = cKZ1wfE / a;
    }
    for (; (m / b) > Naqn3UMzK;) {
        nYOe5d = nYOe5d + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        Naqn3UMzK = b * Naqn3UMzK;
    }
    PGlnMeYfqmo = 0;
    for (i = nYOe5d; i >= 0; i = i - 1) {
        HAtC2LWMwz = m % b;
        if (HAtC2LWMwz < 10)
            FSeanLoKli[i] = HAtC2LWMwz +48;
        else
            FSeanLoKli[i] = HAtC2LWMwz +55;
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
        m = (m - HAtC2LWMwz) / b;
    }
    printf ("%s", FSeanLoKli);
}

