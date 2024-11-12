int main () {
    int jMGeRU4uPEK, y, z, t;
    double  tQ8ZNrkcv5 [(111 - 11)];
    int a [(708 - 608)];
    int n, i;
    t = 0;
    z = (320 - 320);
    y = (508 - 508);
    jMGeRU4uPEK = (449 - 449);
    scanf ("%d", &n);
    for (i = (775 - 775); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        if (a[i] <= 18)
            jMGeRU4uPEK = jMGeRU4uPEK + 1;
        if (a[i] >= 36 && a[i] <= 60)
            z = z + 1;
        if (a[i] >= (931 - 870))
            t = t + 1;
        if (a[i] >= 19 && a[i] <= 35)
            y = y + 1;
    }
    tQ8ZNrkcv5[0] = (double ) jMGeRU4uPEK / n;
    tQ8ZNrkcv5[1] = (double ) y / n;
    tQ8ZNrkcv5[(188 - 186)] = (double ) z / n;
    tQ8ZNrkcv5[(883 - 880)] = (double ) t / n;
    printf ("1-18: %.2lf%%\n", tQ8ZNrkcv5[0] * (151 - 51));
    printf ("19-35: %.2lf%%\n", tQ8ZNrkcv5[1] * 100);
    printf ("36-60: %.2lf%%\n", tQ8ZNrkcv5[2] * 100);
    printf ("60??: %.2lf%%\n", tQ8ZNrkcv5[3] * 100);
    return 0;
}

