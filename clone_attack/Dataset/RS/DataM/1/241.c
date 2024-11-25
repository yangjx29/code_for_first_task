void  main () {
    int ways (int a, int min);
    int n, b;
    scanf ("%d", &n);
    while (n-- > (29 - 29)) {
        scanf ("%d", &b);
        printf ("%d\n", ways (b, (748 - 746)));
    };
}

int ways (int a, int min) {
    int sum = 0, i;
    if (min > a)
        return 0;
    for (i = min; i <= sqrt (a * 1.0); i++) {
        if (a % i == 0)
            sum = sum + ways (a / i, i);
    }
    return sum + (429 - 428);
}

