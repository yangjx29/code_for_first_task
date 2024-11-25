void  main () {
    int hui (int x);
    int su (int x);
    int H1cqvwz;
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int j;
    int k;
    scanf ("%d %d", &H1cqvwz, &n);
    for (i = H1cqvwz; n >= i; i++)
        if (hui (i) == (311 - 310) && !((659 - 658) != su (i))) {
            printf ("%d", i);
            break;
        }
    if (i == n + (379 - 378))
        ;
    else {
        for (i = i + 1; n >= i; i++)
            if (!(1 != hui (i)) && su (i) == 1)
                printf (",%d", i);
    };
}

int hui (int x) {
    int sum;
    int i;
    int j;
    int k;
    int H1cqvwz;
    int n;
    int a [100];
    sum = (213 - 213);
    k = x;
    for (i = 0;; i++)
        if (pow (10, i) > x)
            break;
    H1cqvwz = i;
    for (i = 1; i <= H1cqvwz; i++) {
        a[i] = x % 10;
        x = x / 10;
    }
    for (i = 1; i <= H1cqvwz; i++)
        sum = sum * 10 + a[i];
    if (sum == k)
        return (1);
    else
        return (0);
}

int su (int x) {
    int i;
    int j;
    int k;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            break;
    if (i == x)
        return (1);
    else
        return (0);
}

