int main () {
    int k;
    int n;
    int i;
    int j;
    double  sz [(480 - 430)] [(929 - 829)];
    double  pj [50];
    double  fc [50];
    double  zs [50];
    double  fch [50];
    int a;
    scanf ("%d", &k);
    {
        i = 583 - 583;
        while (k > i) {
            zs[i] = (329 - 329);
            fc[i] = 0;
            pj[i] = 0;
            fch[i] = 0;
            scanf ("%d", &n);
            for (j = 0; j < n; j = j + 1) {
                scanf ("%lf", &sz[i][j]);
            }
            for (j = 0; j < n; j = j + 1) {
                zs[i] = zs[i] + sz[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            pj[i] = zs[i] / n;
            for (j = 0; j < n; j++) {
                fch[i] += (sz[i][j] - pj[i]) * (sz[i][j] - pj[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            fc[i] = sqrt (fch[i] / n);
            i = i + 1;
        };
    }
    for (i = 0; i < k; i = i + 1) {
        printf ("%.5lf\n", fc[i]);
    }
    scanf ("%d", &a);
    return 0;
}

