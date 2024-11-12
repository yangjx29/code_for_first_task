int main () {
    double  X6eMvY4ho = 0, s2 = 0, s3 = 0, Smrj4t = 0;
    int zOIwuhJd;
    int sz [100];
    int i;
    scanf ("%d", &zOIwuhJd);
    {
        i = 0;
        while (i < zOIwuhJd) {
            scanf ("%d", &sz[i]);
            if (sz[i] <= 18) {
                X6eMvY4ho++;
            }
            if (sz[i] > 18 && 35 >= sz[i]) {
                s2 = s2 + 1;
            }
            if (sz[i] > 35 && sz[i] <= 60) {
                s3 = s3 + 1;
            }
            if (sz[i] > 60) {
                Smrj4t = Smrj4t +1;
            }
            i = i + 1;
        };
    }
    X6eMvY4ho = 1.0 * 100 * X6eMvY4ho / zOIwuhJd;
    s2 = 1.0 * 100 * s2 / zOIwuhJd;
    s3 = 1.0 * 100 * s3 / zOIwuhJd;
    Smrj4t = 1.0 * 100 * Smrj4t / zOIwuhJd;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", X6eMvY4ho, s2, s3, Smrj4t);
    return 0;
}

