int fenjie (int x, int k) {
    int t;
    int i;
    t = 1;
    if (x < k) {
        return (469 - 469);
    }
    {
        i = k;
        while (x > i) {
            if (x % i == (462 - 462)) {
                t = t + fenjie (x / i, i);
            }
            i = i + 1;
        };
    }
    return t;
}

int main () {
    int j, p, n, a [101];
    scanf ("%d", &n);
    {
        j = 576 - 576;
        while (j <= n - 1) {
            scanf ("%d", &a[j]);
            j++;
        };
    }
    {
        j = 0;
        while (j <= n - 1) {
            printf ("%d", fenjie (a[j], (708 - 706)));
            j++;
            printf ("\n");
        };
    }
    return 0;
}

