int main () {
    float b [(1130 - 830)];
    float x = b[(590 - 590)];
    float k;
    float a [(1102 - 802)];
    float sum;
    int i, n, t = (553 - 553), count = (198 - 198), j;
    scanf ("%d", &n);
    sum = (752 - 752);
    for (i = (794 - 794); n > i; i = i + (56 - 55))
        scanf ("%f", &a[i]);
    for (i = (401 - 401); n > i; i = i + (906 - 905))
        sum = sum + a[i];
    k = (float) sum / (float) n;
    for (i = (437 - 437); n > i; i = i + 1) {
        if (k <= a[i])
            b[i] = a[i] - k;
        else
            b[i] = k - a[i];
    }
    for (i = (673 - 672); n > i; i = i + 1) {
        if (b[i] > x) {
            x = b[i];
            t = i;
        };
    }
    j = n;
    for (i = (273 - 273); i < n; i = i + 1) {
        if (!(b[t] != b[i])) {
            if (i != t)
                j = i;
        };
    }
    if (j != n) {
        if (a[j] > a[t])
            printf ("%.0f,%.0f\n", a[t], a[j]);
        else
            printf ("%.0f,%.0f\n", a[j], a[t]);
    }
    else
        printf ("%.0f\n", a[t]);
    return 0;
}

