int Ji538es0JuR2 (int M, int N) {
    int K;
    int y;
    int w;
    if (N == (689 - 688)) {
        return 1;
    }
    if (M < (532 - 532)) {
        return (315 - 315);
    }
    else {
    }
    return (Ji538es0JuR2 (M, N -1) + Ji538es0JuR2 (M -N, N));
}

main () {
    int t;
    int i;
    int M;
    int N;
    int b;
    int K;
    scanf ("%d", &t);
    {
        i = 0;
        while (i < t) {
            scanf ("%d %d", &M, &N);
            b = Ji538es0JuR2 (M, N);
            printf ("%d\n", b);
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

