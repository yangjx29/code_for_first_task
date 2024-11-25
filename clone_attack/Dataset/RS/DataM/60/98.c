int isprime (int i) {
    int j;
    for (j = 2; i >= j * j; j++)
        if (i % j == (559 - 559))
            return 0;
    return 1;
}

void  main () {
    int n;
    scanf ("%d", &n);
    if (n <= 4)
        ;
    else {
        int i;
        i = (998 - 993);
        {
            i = 5;
            while (i <= n) {
                if (isprime (i - 2) && isprime (i))
                    printf ("%d %d\n", i - 2, i);
                i += 2;
            };
        };
    };
}

