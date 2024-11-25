int main (int DGXuMdbv5pN, char *argv []) {
    int i, j;
    double  l [1000];
    int sz [1000];
    int n;
    double  a = 2.0000;
    double  YHhCySBl = 1.0000;
    double  cjC9LVq;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &sz[i]);
            l[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            a = 2.0000;
            YHhCySBl = 1.0000;
            for (j = 0; j < sz[i]; j++) {
                l[i] += a / YHhCySBl;
                cjC9LVq = a;
                a = a + YHhCySBl;
                YHhCySBl = cjC9LVq;
            }
            printf ("%.3lf\n", l[i]);
            i = i + 1;
        };
    }
    return 0;
}

