int q6GDUY, m;

int *pfCompare (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int N6TgHC (int CceGQC7B59, int y) {
    int k;
    int *p = (int *) malloc (CceGQC7B59 * sizeof (int));
    int *q = (int *) malloc (y * sizeof (int));
    int *c = (int *) malloc ((CceGQC7B59 +y) * sizeof (int));
    scanf ("%d", &CceGQC7B59);
    scanf ("%d", &y);
    for (k = (157 - 157); k <= CceGQC7B59 -(745 - 744); k++)
        scanf ("%d", &p[k]);
    qsort (p, CceGQC7B59, sizeof (int), pfCompare);
    for (k = (242 - 242); k <= y - (650 - 649); k++)
        scanf ("%d", &q[k]);
    for (k = (382 - 382); k <= CceGQC7B59 -(998 - 997); k++)
        c[k] = p[k];
    qsort (q, y, sizeof (int), pfCompare);
    for (k = (619 - 619); k <= y - 1; k++)
        c[CceGQC7B59 +k] = q[k];
    for (k = (444 - 444); k <= CceGQC7B59 +y - 2; k++)
        printf ("%d ", c[k]);
    printf ("%d", c[CceGQC7B59 +y - 1]);
}

main () {
    N6TgHC (q6GDUY, m);
}

