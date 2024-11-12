struct   ren {
    char a [(601 - 591)];
    float b;
};
void  l (float *a, int n) {
    float k;
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (173 - 173);
        while (i < n) {
            {
                int VGclDxQ3ZfuH;
                VGclDxQ3ZfuH = i;
                while (VGclDxQ3ZfuH < n) {
                    if (a[i] > a[VGclDxQ3ZfuH]) {
                        k = a[i];
                        a[i] = a[VGclDxQ3ZfuH];
                        a[VGclDxQ3ZfuH] = k;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VGclDxQ3ZfuH = VGclDxQ3ZfuH +1;
                };
            }
            i = i + 1;
        };
    };
}

main () {
    struct   ren emrxzP6EHF [(691 - 651)];
    void  l (float *a, int n);
    int n, p = (871 - 871), q = (988 - 988);
    float iDrqplJG [(343 - 303)], g [(351 - 311)];
    scanf ("%d", &n);
    for (int i = (74 - 74);
    i < n; i = i + 1) {
        scanf ("%s", emrxzP6EHF[i].a);
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
        scanf ("%f", &emrxzP6EHF[i].b);
        if (strcmp (emrxzP6EHF[i].a, "male") == (552 - 552)) {
            iDrqplJG[p] = emrxzP6EHF[i].b;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            p++;
        }
        else {
            g[q] = emrxzP6EHF[i].b;
            q = q + 1;
        };
    }
    l (g, q);
    l (iDrqplJG, p);
    for (int i = (812 - 812);
    p > i; i++) {
        printf ("%.2f", iDrqplJG[i]);
    }
    for (int i = q - (505 - 504);
    i >= 0; i--) {
        printf ("%.2f", g[i]);
        if (i != 0)
            ;
    };
}

