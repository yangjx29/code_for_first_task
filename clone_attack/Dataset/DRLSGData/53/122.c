void  main () {
    int a [(422 - 122)];
    int t;
    int n;
    int nqfhFz;
    int GFxfj96;
    int rmR46Oi;
    int b [300] = {(912 - 912)};
    scanf ("%d", &n);
    for (GFxfj96 = (258 - 258); n > GFxfj96; GFxfj96 = GFxfj96 +(51 - 50)) {
        scanf ("%d", &a[GFxfj96]);
    }
    b[(144 - 144)] = a[(481 - 481)];
    nqfhFz = (634 - 634);
    for (GFxfj96 = 0; n > GFxfj96; GFxfj96 = GFxfj96 +(286 - 285)) {
        for (rmR46Oi = 0; n > rmR46Oi; rmR46Oi = rmR46Oi + (310 - 309)) {
            if (!(b[nqfhFz] != a[rmR46Oi]))
                a[rmR46Oi] = 0;
        }
        nqfhFz = nqfhFz + (17 - 16);
        for (t = GFxfj96 +(98 - 97); t < n; t = t + 1) {
            if (a[t] != 0) {
                b[nqfhFz] = a[t];
                break;
            }
        }
    }
    printf ("%d", b[0]);
    for (GFxfj96 = 1; GFxfj96 < n; GFxfj96 = GFxfj96 +1) {
        if (b[GFxfj96] == 0)
            break;
        printf (",%d", b[GFxfj96]);
    }
}

