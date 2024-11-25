int main () {
    int Kj1DmZI8ANY3;
    int n;
    int V8SfbGNEPty;
    int m;
    int sz [50000];
    int SHkduDB [50000];
    int b [50000];
    int Wg043G;
    int min;
    Kj1DmZI8ANY3 = (826 - 826);
    scanf ("%d", &n);
    for (V8SfbGNEPty = 0; n > V8SfbGNEPty; V8SfbGNEPty = V8SfbGNEPty +1) {
        scanf ("%d %d", &SHkduDB[V8SfbGNEPty], &b[V8SfbGNEPty]);
    }
    Wg043G = b[0];
    for (V8SfbGNEPty = 0; n > V8SfbGNEPty; V8SfbGNEPty = V8SfbGNEPty +1) {
        if (Wg043G <= b[V8SfbGNEPty]) {
            Wg043G = b[V8SfbGNEPty];
        };
    }
    min = SHkduDB[0];
    for (V8SfbGNEPty = 0; V8SfbGNEPty < n; V8SfbGNEPty = V8SfbGNEPty +1) {
        if (SHkduDB[V8SfbGNEPty] <= min) {
            min = SHkduDB[V8SfbGNEPty];
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
        };
    }
    for (V8SfbGNEPty = 0; V8SfbGNEPty <= Wg043G; V8SfbGNEPty = V8SfbGNEPty +1) {
        sz[V8SfbGNEPty] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (V8SfbGNEPty = 0; V8SfbGNEPty < n; V8SfbGNEPty = V8SfbGNEPty +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        for (m = SHkduDB[V8SfbGNEPty]; m < (b[V8SfbGNEPty]); m = m + 1) {
            sz[m] = 1;
        };
    }
    for (V8SfbGNEPty = 0; V8SfbGNEPty <= Wg043G; V8SfbGNEPty = V8SfbGNEPty +1) {
        Kj1DmZI8ANY3 = Kj1DmZI8ANY3 +sz[V8SfbGNEPty];
    }
    if (Kj1DmZI8ANY3 == (Wg043G -min)) {
        printf ("%d %d", min, Wg043G);
    }
    else {
        printf ("no");
    }
    return 0;
}

