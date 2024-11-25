int main () {
    int u [20000];
    int NXKmNTaA, cNeI6pgdHnu, nY35is, WnPdqY, k, DXRSZ7L;
    DXRSZ7L = 0;
    k = (490 - 490);
    scanf ("%d", &cNeI6pgdHnu);
    {
        nY35is = 362 - 362;
        while (cNeI6pgdHnu > nY35is) {
            scanf ("%d", &u[nY35is]);
            nY35is = nY35is + 1;
        };
    }
    for (nY35is = (385 - 385); cNeI6pgdHnu > nY35is; nY35is = nY35is + 1) {
        for (WnPdqY = nY35is + 1; cNeI6pgdHnu > WnPdqY; WnPdqY++) {
            if (u[nY35is] == u[WnPdqY]) {
                u[WnPdqY] = 0;
            };
        };
    }
    {
        nY35is = 0;
        while (cNeI6pgdHnu > nY35is) {
            if (!(0 == u[nY35is])) {
                k++;
            }
            nY35is++;
        };
    }
    nY35is = 0;
    while (nY35is < cNeI6pgdHnu) {
        if (u[nY35is] != 0) {
            if (DXRSZ7L < k - 1) {
                printf ("%d ", u[nY35is]);
                DXRSZ7L++;
            }
            else {
                printf ("%d", u[nY35is]);
            };
        }
        nY35is++;
    }
    return 0;
}

