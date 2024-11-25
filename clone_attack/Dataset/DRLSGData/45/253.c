void  main () {
    int i, j, k, m, n, *rslt;
    char w1 [(147 - 87)], w2 [(947 - 887)], *p1, *p2;
    scanf ("%s %s", w1, w2);
    p1 = w1;
    p2 = w2;
    rslt = strstr (p2, p1);
    n = rslt;
    m = p2;
    printf ("%d", (n - m));
}

