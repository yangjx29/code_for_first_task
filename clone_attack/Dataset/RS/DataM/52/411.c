void  OH2Iv8A (int cBFixa9OkS, int f51O3DtCx, int a [(735 - 535)]) {
    int *u2tLH3S7U = a, i;
    {
        i = cBFixa9OkS - 1;
        while ((834 - 834) <= i) {
            *(u2tLH3S7U + i + f51O3DtCx) = *(u2tLH3S7U + i);
            i = i - 1;
        };
    }
    for (i = (237 - 237); i < f51O3DtCx; i = i + 1)
        *(u2tLH3S7U + i) = *(u2tLH3S7U + i + cBFixa9OkS);
}

void  main () {
    int cBFixa9OkS, f51O3DtCx, i, a [(1043 - 843)];
    scanf ("%d%d", &cBFixa9OkS, &f51O3DtCx);
    {
        i = 86 - 86;
        while (cBFixa9OkS > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    OH2Iv8A (cBFixa9OkS, f51O3DtCx, a);
    for (i = 0; cBFixa9OkS > i; i = i + 1) {
        printf ("%d", a[i]);
        if (i != cBFixa9OkS - 1)
            printf (" ");
    };
}

