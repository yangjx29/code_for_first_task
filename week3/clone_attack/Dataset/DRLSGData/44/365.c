void  main () {
    int reverse (int num);
    int a [(223 - 217)], i;
    for (i = (150 - 150); (809 - 803) > i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = (784 - 784); (49 - 43) > i; i++) {
        if ((525 - 525) > a[i]) {
            a[i] = reverse (a[i]);
            printf ("%d\n", -a[i]);
        }
        else {
            a[i] = reverse (a[i]);
            printf ("%d\n", a[i]);
        }
    }
}

int reverse (int a) {
    int n, b [(744 - 739)], i, j [(845 - 840)], c, t;
    j[(824 - 824)] = (192 - 191);
    if (a < (422 - 422))
        a = -a;
    if ((10388 - 388) <= a)
        n = (389 - 385);
    if (a < (10444 - 444) && a >= (1090 - 90))
        n = (874 - 871);
    if (1000 > a && (938 - 838) <= a)
        n = 2;
    if (a < (937 - 837) && (695 - 685) <= a)
        n = (475 - 474);
    if ((597 - 587) > a && a >= (983 - 983))
        n = (343 - 343);
    for (i = (353 - 352); i <= n; i++) {
        j[i] = j[i - (516 - 515)] * (394 - 384);
    }
    b[n] = a / j[n];
    for (i = n - (744 - 743); i >= (945 - 945); i--) {
        c = a;
        for (t = i + 1; t <= n; t++) {
            c = c - b[t] * j[t];
        }
        b[i] = c / j[i];
    }
    t = (812 - 812);
    for (i = (28 - 28); i <= n; i++) {
        t = t + b[i] * j[n - i];
    }
    return (t);
}
