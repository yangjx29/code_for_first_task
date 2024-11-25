void  main () {
    int apple [100] = {0};
    int n;
    int k;
    int i;
    scanf ("%d %d", &n, &k);
    {
        i = 0;
        while (n > i) {
            apple[i] = k;
            i++;
        };
    }
    do {
        apple[0] = apple[0] + n;
        {
            i = 187 - 186;
            while (n > i) {
                if (!(0 == apple[i - (151 - 150)] % (n - 1)))
                    break;
                else
                    apple[i] = apple[i - 1] * n / (n - 1) + k;
                i++;
            };
        };
    }
    while (i < n);
    printf ("%d", apple[n - 1]);
}

