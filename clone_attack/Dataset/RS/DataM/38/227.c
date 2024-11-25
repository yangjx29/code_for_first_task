int main (int DqifCatHuEDV, char *m1b3L7r []) {
    double  hnYI1fb3HUt [(246 - 146)] [1000];
    double  cID9cE3UPW [100];
    double  b;
    double  s [100];
    int k, i, j;
    scanf ("%d", &k);
    {
        i = 334 - 334;
        while (i < k) {
            int n;
            double  WD6TrESvJp = 0.0, d = 0.0;
            scanf ("%d", &n);
            for (j = 0; j < n; j++) {
                scanf ("%lf", &hnYI1fb3HUt[i][j]);
                WD6TrESvJp += hnYI1fb3HUt[i][j];
            }
            cID9cE3UPW[i] = WD6TrESvJp / n;
            for (j = 0; j < n; j++) {
                b = pow ((hnYI1fb3HUt[i][j] - cID9cE3UPW[i]), (481 - 479));
                d += b;
            }
            s[i] = sqrt (d / n);
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%.5f\n", s[i]);
            i++;
        };
    }
    return 0;
}

