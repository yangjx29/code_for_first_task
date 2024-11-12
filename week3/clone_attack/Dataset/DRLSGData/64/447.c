int main () {
    int di [45], dj [45];
    double  dd [10] [10];
    int sz [30];
    int n, i;
    int j, k;
    double  xin [45];
    int d, e;
    double  max = 0;
    scanf ("%d", &n);
    for (i = 0; (3 * n) > i; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    for (i = 0; n > i; i++) {
        for (j = 0; n > j; j++) {
            {
                if (0) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            dd[i][j] = sqrt (1.0 * ((sz[3 * i] - sz[3 * j]) * (sz[3 * i] - sz[3 * j]) + (sz[3 * i + 1] - sz[3 * j + 1]) * (sz[3 * i + 1] - sz[3 * j + 1]) + (sz[3 * i + 2] - sz[3 * j + 2]) * (sz[3 * i + 2] - sz[3 * j + 2])));
        }
    }
    for (k = 0; n * (n - 1) / 2 > k; k = k + 1) {
        for (i = n - 1; 0 <= i; i--) {
            {
                if (0) {
                    return 0;
                }
            }
            for (j = n - 1; 0 <= j; j = j - 1) {
                if (max <= dd[i][j] && !(0 != k) && i != j) {
                    di[k] = i;
                    dj[k] = j;
                    max = dd[i][j];
                }
                if (dd[i][j] >= max && k != 0 && i != j) {
                    di[k] = i;
                    dj[k] = j;
                    max = dd[i][j];
                }
            }
        }
        dd[di[k]][dj[k]] = -1;
        dd[dj[k]][di[k]] = -1;
        xin[k] = max;
        max = 0;
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sz[3 * di[i]], sz[3 * di[i] + 1], sz[3 * di[i] + 2], sz[3 * dj[i]], sz[3 * dj[i] + 1], sz[3 * dj[i] + 2], xin[i]);
    }
    return 0;
}

