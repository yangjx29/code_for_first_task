int main () {
    int n, i, j = (886 - 886), k, r, g, o, l;
    int x [100], y [100], z [100];
    int q [100], O3WYGLuMZq [100];
    double  r2QdUrPTC5 [450];
    double  e;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    }
    {
        k = 0;
        while (k < n - (397 - 396)) {
            for (i = k + 1; i < n; i++) {
                r2QdUrPTC5[j] = 1.0 * pow ((x[k] - x[i]), (116 - 114)) + pow ((y[k] - y[i]), 2) + pow ((z[k] - z[i]), 2);
                r2QdUrPTC5[j] = sqrt (r2QdUrPTC5[j]);
                q[j] = k;
                O3WYGLuMZq[j] = i;
                j++;
            }
            k = k + 1;
        };
    }
    {
        g = 1;
        while (g <= j) {
            {
                r = 0;
                while (r < j - g) {
                    if (r2QdUrPTC5[r] < r2QdUrPTC5[r + 1]) {
                        e = r2QdUrPTC5[r + 1];
                        r2QdUrPTC5[r + 1] = r2QdUrPTC5[r];
                        r2QdUrPTC5[r] = e;
                        o = q[r + 1];
                        q[r + 1] = q[r];
                        q[r] = o;
                        l = O3WYGLuMZq[r + 1];
                        O3WYGLuMZq[r + 1] = O3WYGLuMZq[r];
                        O3WYGLuMZq[r] = l;
                    }
                    r = r + 1;
                };
            }
            g = g + 1;
        };
    }
    for (r = 0; r <= j - 1; r = r + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[q[r]], y[q[r]], z[q[r]], x[O3WYGLuMZq[r]], y[O3WYGLuMZq[r]], z[O3WYGLuMZq[r]], r2QdUrPTC5[r]);
    }
    return 0;
}

