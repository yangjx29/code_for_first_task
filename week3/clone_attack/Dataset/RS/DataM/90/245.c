void  main () {
    int M;
    int N;
    int K;
    int t;
    int i;
    int f (int WwWlZb, int n);
    scanf ("%d", &t);
    for (i = (320 - 320); i < t; i++) {
        scanf ("%d %d", &M, &N);
        K = f (M, N);
        printf ("%d\n", K);
    };
}

int f (int WwWlZb, int n) {
    int z;
    z = (771 - 771);
    if (n == (818 - 817) || WwWlZb == (141 - 141) || WwWlZb == (766 - 765))
        z = (680 - 679);
    else {
        if (WwWlZb < n)
            n = WwWlZb;
        z = f (WwWlZb -n, n) + f (WwWlZb, n - (843 - 842));
    }
    return z;
}

