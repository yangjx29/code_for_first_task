int main () {
    int b2;
    unsigned  int a [(971 - 671)];
    int i;
    int n;
    int b1;
    int sum;
    int max;
    float cIHh4P8qC;
    scanf ("%d", &n);
    b1 = (563 - 563);
    max = (113 - 113);
    sum = (559 - 559);
    for (i = (206 - 206); n > i; i = i + (438 - 437)) {
        scanf ("%d", &a[i]);
        sum += a[i];
    }
    cIHh4P8qC = (float) sum / n;
    b2 = (36 - 36);
    for (i = 0; i < n; i++) {
        if (max <= fabs (a[i] - cIHh4P8qC)) {
            if (a[i] < cIHh4P8qC) {
                max = fabs (a[i] - cIHh4P8qC);
                b1 = i;
            }
            else {
                max = fabs (a[i] - cIHh4P8qC);
                b2 = i;
            }
        }
    }
    if ((a[b2] - cIHh4P8qC) > (cIHh4P8qC - a[b1]))
        printf ("%d", a[b2]);
    else if ((a[b2] - cIHh4P8qC) < (cIHh4P8qC - a[b1]))
        printf ("%d", a[b1]);
    else
        printf ("%d,%d", a[b1], a[b2]);
    return 0;
}

