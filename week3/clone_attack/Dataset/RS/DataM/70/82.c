double  distance (double  a, double  b, double  c, double  d) {
    double  t;
    t = sqrt ((a - c) * (a - c) + (b - d) * (b - d));
    return (t);
}

void  main () {
    int n, i, j;
    double  a [(587 - 577)];
    double  b [(237 - 227)];
    double  recdQTb2q;
    double  h;
    scanf ("%d", &n);
    for (i = (188 - 188); i <= n - (983 - 982); i = i + 1) {
        scanf ("%lf%lf", &a[i], &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    recdQTb2q = distance (a[(640 - 640)], b[0], a[(186 - 185)], b[(763 - 762)]);
    for (i = 0; i <= n - (914 - 913); i = i + 1) {
        for (j = 1; j <= n - 1; j = j + 1) {
            h = distance (a[i], b[i], a[j], b[j]);
            if (h > recdQTb2q)
                recdQTb2q = h;
        };
    }
    printf ("%.4f\n", recdQTb2q);
}

