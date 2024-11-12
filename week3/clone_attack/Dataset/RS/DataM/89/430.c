main () {
    int meBWphHdLKC;
    int gXqzFvru5;
    int j;
    int Nr2cE16w3;
    int n;
    int sb;
    int a [20000];
    int b [20000];
    int HQjLrz1AK0FO [10000] = {0};
    meBWphHdLKC = (290 - 290);
    gXqzFvru5 = 0;
    scanf ("%d", &n);
    for (; true;) {
        scanf ("%d %d", &a[meBWphHdLKC], &b[meBWphHdLKC]);
        if (a[meBWphHdLKC] == 0 && b[meBWphHdLKC] == 0)
            break;
        else
            meBWphHdLKC = meBWphHdLKC + 1;
    }
    for (j = 0; j < meBWphHdLKC; j = j + 1)
        HQjLrz1AK0FO[b[j]]++;
    for (Nr2cE16w3 = 0; Nr2cE16w3 < n; Nr2cE16w3 = Nr2cE16w3 +1) {
        if (gXqzFvru5 < HQjLrz1AK0FO[Nr2cE16w3]) {
            gXqzFvru5 = HQjLrz1AK0FO[Nr2cE16w3];
            sb = Nr2cE16w3;
        };
    }
    if (gXqzFvru5 == n - 1)
        printf ("%d", sb);
    else
        ;
}

