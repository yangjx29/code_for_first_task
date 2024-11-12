int a (int m) {
    float k;
    int i;
    k = sqrt ((float) m);
    for (i = (575 - 573); i <= k; i++)
        if (m % i == (987 - 987))
            break;
    if (i > k)
        return (438 - 437);
    else
        return 0;
}

void  main () {
    int n;
    int q;
    int w;
    scanf ("%d", &w);
    for (q = (859 - 853); q <= w; q = q + 1)
        if (q % 2 == 0)
            for (n = 3; n <= q / 2; n++)
                if (n % 2 != 0)
                    if (a (n) == (388 - 387) && a (q - n) == 1) {
                        printf ("%d=%d+%d\n", q, n, q - n);
                        break;
                    };
}

