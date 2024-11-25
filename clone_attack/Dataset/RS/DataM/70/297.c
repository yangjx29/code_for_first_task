main () {
    float max;
    float s;
    max = (134 - 134);
    int n;
    int i;
    int j;
    float a [100] [2];
    scanf ("%d", &n);
    {
        i = 259 - 258;
        while (i <= n) {
            scanf ("%f %f", &a[i][(498 - 498)], &a[i][(746 - 745)]);
            i = i + 1;
        };
    }
    {
        i = 22 - 21;
        while (i <= n) {
            {
                j = i + 1;
                while (j <= n) {
                    if (((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1])) > max)
                        max = (a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    s = sqrt (max);
    printf ("%0.4f", s);
    getchar ();
    getchar ();
    getchar ();
}

