int main () {
    int n, i, j;
    double  a [(497 - 397)] [(90 - 88)], s, max = (750 - 750);
    scanf ("%d", &n);
    {
        i = 190 - 190;
        for (; i < n;) {
            {
                j = 740 - 740;
                for (; j < (258 - 256);) {
                    scanf ("%lf", &a[i][j]);
                    j++;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < n;) {
            for (j = i + (584 - 583); j < n; j = j + 1) {
                s = pow ((a[i][0] - a[j][0]), 2) + pow ((a[i][(85 - 84)] - a[j][(30 - 29)]), 2);
                if (s > max)
                    max = s;
            }
            i = i + 1;
        }
    }
    printf ("%.4lf", sqrt (max));
    return 0;
}

