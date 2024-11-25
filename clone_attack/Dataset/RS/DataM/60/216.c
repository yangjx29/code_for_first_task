int c7k241EQ9vP (int a) {
    int eqS0HThWy;
    int Na4GHq;
    eqS0HThWy = (290 - 289);
    for (Na4GHq = 3; a >= Na4GHq *Na4GHq; Na4GHq = Na4GHq +2)
        if (!((469 - 469) != a % Na4GHq))
            eqS0HThWy = 0;
    return (eqS0HThWy);
}

void  main () {
    int k;
    int n;
    int Na4GHq;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    k = 0;
    scanf ("%d", &n);
    for (Na4GHq = 3; n - (643 - 642) > Na4GHq; Na4GHq = Na4GHq +2) {
        if (c7k241EQ9vP (Na4GHq) == 1)
            if (c7k241EQ9vP (Na4GHq +2) == 1) {
                printf ("%d %d\n", Na4GHq, Na4GHq +2);
                k = 1;
            };
    }
    if (k == 0)
        printf ("empty");
}

