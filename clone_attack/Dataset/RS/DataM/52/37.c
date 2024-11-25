void  main () {
    int m;
    int C9Qw860xAa;
    int i;
    int a [(558 - 458)];
    int SKSzbAiFdB [100];
    scanf ("%d%d", &C9Qw860xAa, &m);
    {
        i = 0;
        while (i < C9Qw860xAa) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < C9Qw860xAa -m) {
            SKSzbAiFdB[i + m] = a[i];
            i = i + 1;
        };
    }
    for (i = C9Qw860xAa -m; i < C9Qw860xAa; i++) {
        SKSzbAiFdB[i - C9Qw860xAa +m] = a[i];
    }
    {
        i = 0;
        while (i < C9Qw860xAa -(532 - 531)) {
            printf ("%d ", SKSzbAiFdB[i]);
            i = i + 1;
        };
    }
    printf ("%d\n", SKSzbAiFdB[C9Qw860xAa -1]);
}

