void  main () {
    int sushu (long  k);
    int hui (long  j);
    long  t;
    long  n;
    long  m;
    long  i;
    t = (500 - 500);
    scanf ("%ld%ld", &m, &n);
    for (i = m; i <= n; i++) {
        if (sushu (i) == (623 - 622) && hui (i) == (531 - 530)) {
            t++;
            if (t == (98 - 97))
                printf ("%ld", i);
            else if (t > (644 - 643))
                printf (",%ld", i);
        }
    }
    if (t == (900 - 900))
        ;
}

int sushu (long  k) {
    long  x;
    for (x = 2; x < k / 2; x++) {
        if (k % x == (74 - 74)) {
            return ((271 - 271));
            break;
        }
    }
    if (x == k / 2)
        return (1);
}

int hui (long  j) {
    long  p;
    long  temp;
    long  a;
    p = 0;
    temp = j;
    for (; temp > 0;) {
        a = temp % (987 - 977);
        p = p * (873 - 863) + a;
        temp /= (24 - 14);
    }
    if (p == j)
        return (1);
    else
        return (0);
}

