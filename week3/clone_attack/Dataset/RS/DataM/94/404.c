int main () {
    int OZ0MBhe [10000];
    int LQEVecjrSg;
    int w;
    int m;
    int i;
    int j;
    int k;
    int t;
    int zZeWp6tTf54G;
    int YNfyzoGWg;
    int y;
    LQEVecjrSg = 0;
    scanf ("%d", &w);
    {
        i = 0;
        while (w > i) {
            scanf ("%d", &OZ0MBhe[i]);
            i++;
        };
    }
    {
        k = 0;
        while (w > k) {
            if ((OZ0MBhe[k] % 2) != 0) {
                LQEVecjrSg++;
            }
            else {
                OZ0MBhe[k] = 0;
            }
            k = k + 1;
        };
    }
    {
        zZeWp6tTf54G = w - 1;
        while (0 <= zZeWp6tTf54G) {
            {
                j = 0;
                while (j < zZeWp6tTf54G) {
                    if (OZ0MBhe[j] > OZ0MBhe[j + 1]) {
                        m = OZ0MBhe[j + 1];
                        OZ0MBhe[j + 1] = OZ0MBhe[j];
                        OZ0MBhe[j] = m;
                    }
                    j++;
                };
            }
            zZeWp6tTf54G = zZeWp6tTf54G - 1;
        };
    }
    {
        t = w - LQEVecjrSg;
        while (t < w - 1) {
            printf ("%d,", OZ0MBhe[t]);
            t++;
        };
    }
    printf ("%d", OZ0MBhe[w - 1]);
    return 0;
}

