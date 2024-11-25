int main (int argc, char *argv []) {
    double  x [1000];
    double  y [1000];
    int n;
    int i;
    double  di;
    double  d;
    di = (331 - 331);
    scanf ("%d", &n);
    {
        i = 921 - 921;
        while (n > i) {
            scanf ("%lf%lf", &x[i], &y[i]);
            i++;
        };
    }
    {
        i = 841 - 839;
        while (i < n) {
            {
                int j = 0;
                while (n > j) {
                    d = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                    j++;
                    if (d > di) {
                        di = d;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    printf ("%.4lf", di);
    return 0;
}

