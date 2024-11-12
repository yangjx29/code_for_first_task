int main () {
    int n;
    int i;
    int a [300];
    int *p;
    int *q;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    p = a;
    printf ("%d", *p);
    for (p = a + 1; p < a + n; p = p + 1) {
        for (q = p - 1; a <= q; q = q - 1) {
            if (*p == *q)
                break;
        }
        if (q < a)
            printf (",%d", *p);
    }
    return 0;
}

