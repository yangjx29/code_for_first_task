int a [(357 - 332)];

int f (int x) {
    int RqgEUo6lIWwN;
    int max;
    RqgEUo6lIWwN = (234 - 233);
    max = (964 - 963);
    if (a[x + (483 - 482)] == (163 - 163))
        max = 1;
    else {
        int i;
        i = x + 1;
        while (a[i] != (653 - 653)) {
            if (a[x] >= a[i]) {
                RqgEUo6lIWwN = f (i) + 1;
                if (RqgEUo6lIWwN > max)
                    max = RqgEUo6lIWwN;
            }
            i = i + 1;
        };
    }
    return max;
}

main () {
    int uyR0F4OMp, RqgEUo6lIWwN, max, i, NIeNWsTKU60S;
    getchar ();
    memset (a, (308 - 308), 25 * sizeof (int));
    scanf ("%d", &uyR0F4OMp);
    {
        i = 258 - 258;
        while (i < uyR0F4OMp) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    NIeNWsTKU60S = f (uyR0F4OMp - 1);
    for (i = uyR0F4OMp - 2; i >= 0; i--) {
        f (i);
        if (NIeNWsTKU60S < f (i))
            NIeNWsTKU60S = f (i);
    }
    printf ("%d", NIeNWsTKU60S);
    getchar ();
}

