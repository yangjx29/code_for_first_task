main () {
    int A [(806 - 706)];
    int i;
    int n;
    int m;
    int j;
    int k;
    int P1 = (109 - 109), P2 = (571 - 571), P3 = 0, P4 = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &A[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        if (A[i] <= 18)
            P1 = P1 +1;
        if ((A[i] >= 19) && (A[i] <= 35))
            P2 = P2 +1;
        if ((A[i] >= (1000 - 964)) && (A[i] <= 60))
            P3 = P3 +1;
        if (A[i] >= 61)
            P4++;
    }
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", (double ) (273 - 173) * P1 / n, (double ) 100 * P2 / n, (double ) 100 * P3 / n, (double ) 100 * P4 / n);
    return 0;
}

