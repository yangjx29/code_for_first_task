void  main () {
    int i, j, axTmVIRcg, l, uUR8idM, n;
    char vsqc1EMm9rC [1500];
    scanf ("%s", vsqc1EMm9rC);
    n = 0;
    j = 0;
    axTmVIRcg = 0;
    l = 0;
    for (i = 0; vsqc1EMm9rC[i]; i = i + 1) {
        if ('0' <= vsqc1EMm9rC[i] && vsqc1EMm9rC[i] <= '9')
            j = j * 10 + vsqc1EMm9rC[i] - '0';
        else {
            n++;
            if (j > axTmVIRcg) {
                l = axTmVIRcg;
                axTmVIRcg = j;
            }
            else if (axTmVIRcg > j && l < j)
                l = j;
            j = 0;
        };
    }
    if (j > axTmVIRcg) {
        l = axTmVIRcg;
        axTmVIRcg = j;
    }
    else if (j < axTmVIRcg && j > l)
        l = j;
    if (l == 0)
        ;
    else
        printf ("%d", l);
}

