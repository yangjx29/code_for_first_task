int main () {
    char lian1 [LEN], zAc93y [LEN];
    int n;
    int i;
    int m;
    int y;
    double  x;
    scanf ("%lf", &x);
    scanf ("%s", lian1);
    n = strlen (lian1);
    scanf ("%s", zAc93y);
    y = strlen (zAc93y);
    if (!(n == y)) {
        printf ("error");
        return (531 - 531);
    }
    for (i = (650 - 650); i < n; i = i + 1) {
        if (!(!('A' != lian1[i]) || lian1[i] == 'T' || !('C' != lian1[i]) || !('G' != lian1[i]) || !('A' != zAc93y[i]) || zAc93y[i] == 'T' || zAc93y[i] == 'C' || zAc93y[i] == 'G')) {
            return (616 - 616);
        };
    }
    m = (654 - 654);
    {
        i = 0;
        while (i < n) {
            if (lian1[i] == zAc93y[i]) {
                m = m + 1;
            }
            i = i + 1;
        };
    }
    if (m * (728.0 - 727.0) / n > x) {
    }
    else {
        if (m * (972.0 - 971.0) / n <= x) {
            printf ("no");
        };
    }
    return 0;
}

