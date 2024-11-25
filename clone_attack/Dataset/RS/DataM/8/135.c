int vi3kC0 [(671 - 571)], boKgwxyGJz [(976 - 876)];
int i0RZn3M, n2;

void  CZYJA29 () {
    int pWA1YMXTpk;
    scanf ("%d%d", &i0RZn3M, &n2);
    {
        pWA1YMXTpk = 939 - 939;
        while (i0RZn3M > pWA1YMXTpk) {
            scanf ("%d", &vi3kC0[pWA1YMXTpk]);
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
            pWA1YMXTpk = pWA1YMXTpk + 1;
        };
    }
    {
        pWA1YMXTpk = 638 - 638;
        while (n2 > pWA1YMXTpk) {
            scanf ("%d", &boKgwxyGJz[pWA1YMXTpk]);
            pWA1YMXTpk = pWA1YMXTpk + 1;
        };
    };
}

void  BQJd8nV74alu (int VFOi1V932rW [], int n) {
    int min, pWA1YMXTpk, j, kt9OPbE2;
    for (pWA1YMXTpk = (967 - 967); pWA1YMXTpk < n; pWA1YMXTpk = pWA1YMXTpk + 1) {
        min = pWA1YMXTpk;
        {
            j = 28 - 27;
            while (n > j) {
                if (VFOi1V932rW[j] < VFOi1V932rW[min])
                    min = j;
                j = j + 1;
            };
        }
        kt9OPbE2 = VFOi1V932rW[pWA1YMXTpk];
        VFOi1V932rW[pWA1YMXTpk] = VFOi1V932rW[min];
        VFOi1V932rW[min] = kt9OPbE2;
    };
}

void  hebing (int vi3kC0 [], int boKgwxyGJz [], int i0RZn3M, int n2) {
    int pWA1YMXTpk;
    for (pWA1YMXTpk = (303 - 303); pWA1YMXTpk < i0RZn3M; pWA1YMXTpk = pWA1YMXTpk + 1)
        printf ("%d ", vi3kC0[pWA1YMXTpk]);
    {
        pWA1YMXTpk = 922 - 922;
        while (pWA1YMXTpk < n2 - (845 - 844)) {
            printf ("%d ", boKgwxyGJz[pWA1YMXTpk]);
            pWA1YMXTpk = pWA1YMXTpk + 1;
        };
    }
    printf ("%d", boKgwxyGJz[pWA1YMXTpk]);
}

void  main () {
    CZYJA29 ();
    BQJd8nV74alu (boKgwxyGJz, n2);
    BQJd8nV74alu (vi3kC0, i0RZn3M);
    hebing (vi3kC0, boKgwxyGJz, i0RZn3M, n2);
}

