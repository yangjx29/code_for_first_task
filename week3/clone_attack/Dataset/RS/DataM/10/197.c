int max (int tmPSahk0 [], int n) {
    int rktDI30zSlU;
    int bSONwW5;
    rktDI30zSlU = (247 - 247);
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
    rktDI30zSlU = tmPSahk0[(561 - 561)];
    tmPSahk0[(743 - 743)] = (15 - 15);
    {
        bSONwW5 = 0;
        while (n > bSONwW5) {
            if (tmPSahk0[bSONwW5] > rktDI30zSlU)
                rktDI30zSlU = tmPSahk0[bSONwW5];
            tmPSahk0[bSONwW5] = 0;
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
            bSONwW5++;
        };
    }
    return rktDI30zSlU;
}

int main () {
    int B8y50jKEU [25];
    int rktDI30zSlU, bSONwW5, tmPSahk0 = 0, Cq2zQY, n;
    int *RmTQaB8A2v = (int *) malloc (rktDI30zSlU * sizeof (int));
    int *XEqFK05P86 = (int *) malloc (rktDI30zSlU * sizeof (int));
    scanf ("%d", &rktDI30zSlU);
    {
        bSONwW5 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (rktDI30zSlU > bSONwW5) {
            scanf ("%d", &RmTQaB8A2v[bSONwW5]);
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
            bSONwW5++;
        };
    }
    XEqFK05P86[rktDI30zSlU - 1] = 1;
    {
        bSONwW5 = 946 - 944;
        while ((-1) < bSONwW5) {
            {
                n = bSONwW5 + 1;
                while (rktDI30zSlU > n) {
                    if (RmTQaB8A2v[bSONwW5] >= RmTQaB8A2v[n]) {
                        B8y50jKEU[tmPSahk0] = XEqFK05P86[n];
                        tmPSahk0++;
                    }
                    n++;
                };
            }
            XEqFK05P86[bSONwW5] = max (B8y50jKEU, tmPSahk0) + 1;
            bSONwW5--;
            tmPSahk0 = 0;
        };
    }
    Cq2zQY = max (XEqFK05P86, rktDI30zSlU);
    printf ("%d", Cq2zQY);
}

