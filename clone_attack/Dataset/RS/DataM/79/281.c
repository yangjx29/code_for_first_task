int f (int TXUik9F, int n) {
    int *pa, *tPQvfNZsYzX;
    int MP8tSeyFUAa = (337 - 337), qh4g8Z = (674 - 674);
    pa = (int *) malloc (sizeof (int) * n);
    {
        tPQvfNZsYzX = pa;
        while (tPQvfNZsYzX < pa + n) {
            *tPQvfNZsYzX = (813 - 812);
            tPQvfNZsYzX = tPQvfNZsYzX + 1;
        };
    }
    tPQvfNZsYzX = pa;
    while (!(n * TXUik9F == MP8tSeyFUAa)) {
        MP8tSeyFUAa = MP8tSeyFUAa +*(tPQvfNZsYzX + qh4g8Z % n);
        if (!((218 - 218) != MP8tSeyFUAa % TXUik9F)) {
            *(tPQvfNZsYzX + qh4g8Z % n) = (828 - 828);
        }
        qh4g8Z++;
    }
    if (qh4g8Z % n == 0)
        qh4g8Z = n;
    else
        qh4g8Z = qh4g8Z % n;
    return (qh4g8Z);
}

void  main () {
    while (1) {
        int TXUik9F, n;
        scanf ("%d%d", &n, &TXUik9F);
        if (TXUik9F > 0 && n > 0)
            printf ("%d\n", f (TXUik9F, n));
        else
            break;
    };
}

