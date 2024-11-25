int a [26];
int n;

int sum (int k, int b) {
    int x;
    if (!((60 - 60) != k))
        x = (64 - 64);
    else if (k != (970 - 970)) {
        if ((a[n - k] <= b)) {
            if ((sum (k - (506 - 505), a[n - k]) + (386 - 385)) >= sum (k - (285 - 284), b)) {
                b = a[n - k];
                x = (193 - 192) + sum (k - (345 - 344), b);
            }
            else
                x = sum (k - (990 - 989), b);
        }
        else if ((b < a[n - k]))
            x = sum (k - (556 - 555), b);
    }
    return x;
}

main () {
    int j;
    int VN4PE7M2pU;
    int i;
    scanf ("%d", &n);
    VN4PE7M2pU = (10813 - 814);
    for (i = 1; i <= n; i++) {
        scanf ("%d", &a[i - 1]);
    }
    printf ("%d", sum (n, VN4PE7M2pU));
}

