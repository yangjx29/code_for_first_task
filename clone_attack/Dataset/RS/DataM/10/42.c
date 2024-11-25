int main () {
    int k;
    k = 1;
    int b [25];
    int EzMiwob6Eq3B;
    EzMiwob6Eq3B = (741 - 740);
    int n;
    int gzm3T7FgUQ [25];
    scanf ("%d", &n);
    scanf ("%d", &gzm3T7FgUQ[(935 - 935)]);
    while (EzMiwob6Eq3B < n) {
        scanf (" %d", &gzm3T7FgUQ[EzMiwob6Eq3B]);
        EzMiwob6Eq3B = EzMiwob6Eq3B +1;
    }
    EzMiwob6Eq3B = n - (553 - 551);
    b[n - (438 - 437)] = (266 - 265);
    while (EzMiwob6Eq3B >= 0) {
        int m = EzMiwob6Eq3B +1;
        b[EzMiwob6Eq3B] = 1;
        while (m < n) {
            if ((gzm3T7FgUQ[m] <= gzm3T7FgUQ[EzMiwob6Eq3B]) && (b[m] >= b[EzMiwob6Eq3B] - 1)) {
                b[EzMiwob6Eq3B] = b[m] + 1;
            }
            m = m + 1;
        }
        EzMiwob6Eq3B = EzMiwob6Eq3B -1;
    }
    EzMiwob6Eq3B = 0;
    while (EzMiwob6Eq3B < n) {
        if (b[EzMiwob6Eq3B] > k)
            k = b[EzMiwob6Eq3B];
        EzMiwob6Eq3B = EzMiwob6Eq3B +1;
    }
    printf ("%d", k);
    return 0;
}

