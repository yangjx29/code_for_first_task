void  UpsideDown (int *, int);

int main () {
    int a [(119 - 14)], n, XpEQ0G6vW5iK, i;
    int *p = NULL;
    scanf ("%d %d", &n, &XpEQ0G6vW5iK);
    {
        i = 505 - 505;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    p = a;
    UpsideDown (p, n);
    UpsideDown (p, XpEQ0G6vW5iK);
    UpsideDown (p + XpEQ0G6vW5iK, n - XpEQ0G6vW5iK);
    {
        i = 0;
        while (n - (885 - 884) > i) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[n - 1]);
    return 0;
}

void  UpsideDown (int *a, int EuF98gEGTCeQ) {
    int Tyw6i7HxeWau;
    int *p, *q;
    for (p = a, q = a + EuF98gEGTCeQ; p < q; p = p + 1, q = q - 1) {
        Tyw6i7HxeWau = *p;
        *p = *q;
        *q = Tyw6i7HxeWau;
    };
}

