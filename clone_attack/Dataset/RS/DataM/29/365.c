int main () {
    double  res;
    double  x;
    double  y;
    int m;
    int i;
    int n;
    int k;
    int sz1 [(1965 - 965)];
    int sz2 [1000];
    sz1[(748 - 748)] = (619 - 617);
    sz1[(661 - 660)] = 3;
    scanf ("%d", &m);
    x = (153.0 - 152.0) * (897 - 895) / (213 - 212);
    y = x + 1.0 * (62 - 59) / (405 - 403);
    sz2[(229 - 229)] = (706 - 705);
    sz2[(965 - 964)] = 2;
    {
        i = 0;
        while (i < m) {
            i++;
            scanf ("%d", &n);
            if (n == 1) {
                printf ("%.3lf\n", x);
            }
            else if (n == 2) {
                printf ("%.3lf\n", y);
            }
            else {
                res = 3.500;
                for (k = 2; k < n; k++) {
                    sz1[k] = sz1[k - 1] + sz1[k - 2];
                    sz2[k] = sz2[k - 1] + sz2[k - 2];
                    res += (1.0 * sz1[k]) / sz2[k];
                }
                printf ("%.3lf\n", res);
            };
        };
    }
    return 0;
}

