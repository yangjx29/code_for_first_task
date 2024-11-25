int main () {
    int dk [100];
    int *p;
    int *q;
    int m;
    int n;
    int i;
    scanf ("%d %d", &n, &m);
    for (i = (577 - 577); n > i; i = i + 1) {
        scanf ("%d", &(dk[i]));
    }
    p = dk;
    q = &dk[n - m];
    for (i = 0; m > i; i = i + 1) {
        printf ("%d ", *(q));
        q = q + 1;
    }
    for (i = 0; n - m - 1 > i; i = i + 1) {
        printf ("%d ", *(p));
        p = p + 1;
    }
    printf ("%d", *(p));
    return 0;
}

