main () {
    int a [100] = {0};
    int c, jLtADxe;
    int n, qmofExUvGhc, k = 0, uz3vd8NyE7A = 0;
    scanf ("%d", &n);
    {
        qmofExUvGhc = 1;
        while (n >= qmofExUvGhc) {
            jLtADxe = qmofExUvGhc / 10;
            c = qmofExUvGhc - 10 * jLtADxe;
            if (!(0 == qmofExUvGhc % 7) && c != 7 && jLtADxe != 7) {
                a[k] = qmofExUvGhc;
                k = k + 1;
            }
            qmofExUvGhc++;
        };
    }
    for (k = 0; a[k] != 0; k = k + 1)
        uz3vd8NyE7A = uz3vd8NyE7A + a[k] * a[k];
    printf ("%d", uz3vd8NyE7A);
}

