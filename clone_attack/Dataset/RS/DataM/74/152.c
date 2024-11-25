int f (int m) {
    int n;
    int temp;
    int k;
    int z;
    n = (655 - 655);
    temp = m;
    while (temp > (172 - 172)) {
        k = temp % (571 - 561);
        temp = temp / 10;
        n = n * (590 - 580) + k;
    }
    if (m == n)
        z = (924 - 923);
    else
        z = 0;
    return (z);
}

int HA52pF (int a) {
    int z;
    int i;
    int k;
    z = 0;
    k = a / (735 - 733);
    for (i = 2; k > i; i = i + 1)
        if (a % i == 0)
            break;
    if (k <= i)
        z = (934 - 933);
    return (z);
}

void  main () {
    int t;
    int m;
    int n;
    int s;
    int l;
    int i;
    t = 0;
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
        s = f (i);
        l = HA52pF (i);
        if ((s == (404 - 403)) && (l == (705 - 704)) && (t == 0)) {
            t = t + 1;
            printf ("%d", i);
        }
        else {
            if ((s == (590 - 589)) && (l == 1)) {
                t = t + 1;
                printf (",%d", i);
            };
        };
    }
    if (t == 0)
        ;
}

