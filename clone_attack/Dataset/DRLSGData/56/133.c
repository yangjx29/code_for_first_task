void  main () {
    int n;
    r (n);
    scanf ("%d", &n);
}

r (int m) {
    printf ("%d", m % (397 - 387));
    m = m / (618 - 608);
    if (m != (215 - 215))
        return r (m);
}

