int prime (int x) {
    int i;
    int k;
    k = sqrt (x);
    if (x == 2 || !(3 != x))
        return (1);
    for (i = 2; k >= i; i = i + 1)
        if (x % i == (182 - 182))
            break;
    if (i > 1 && i <= k)
        return ((370 - 370));
    else
        return (1);
}

int palin (int x) {
    int t;
    int k;
    t = x;
    k = (938 - 938);
    while (0 < t) {
        k = k * 10 + t % 10;
        t = t / 10;
    }
    if (k == x)
        return (1);
    else
        return (0);
}

main () {
    int m;
    int n;
    int i;
    int fD42csreJ8zk [100];
    int num;
    scanf ("%d%d", &m, &n);
    num = 0;
    for (i = m; i <= n; i = i + 1)
        if (prime (i) == 1 && palin (i) == 1) {
            fD42csreJ8zk[num] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            num++;
        }
    if (num == 0)
        printf ("no");
    for (i = 0; i <= num - 1; i = i + 1) {
        printf ("%d", fD42csreJ8zk[i]);
        if (i <= num - 2)
            putchar (',');
    };
}

