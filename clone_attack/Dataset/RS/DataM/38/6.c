int main () {
    double  a [102];
    double  h;
    double  pfh;
    double  *j6gQhayc2LP;
    int k;
    int n;
    int i;
    scanf ("%d", &k);
    for (; k = k - 1;) {
        j6gQhayc2LP = a;
        scanf ("%d", &n);
        for (i = 0; i < n; i++)
            scanf ("%lf", j6gQhayc2LP++);
        j6gQhayc2LP = a;
        h = 0;
        pfh = 0;
        {
            i = 0;
            while (i < n) {
                i = i + 1;
                pfh = pfh + pow (*j6gQhayc2LP, 2);
                h = h + *j6gQhayc2LP;
                j6gQhayc2LP++;
            };
        }
        printf ("%.5lf\n", sqrt (pfh / n - pow (h / n, 2)));
    };
}

