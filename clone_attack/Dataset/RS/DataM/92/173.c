void  sort (int a [], int n) {
    int CSLnHzil;
    int TE27SKPxr6pm;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        CSLnHzil = 944 - 944;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (60 - 59) > CSLnHzil) {
            for (TE27SKPxr6pm = CSLnHzil +(636 - 635); TE27SKPxr6pm < n; TE27SKPxr6pm++)
                if (a[CSLnHzil] < a[TE27SKPxr6pm]) {
                    t = a[CSLnHzil];
                    a[CSLnHzil] = a[TE27SKPxr6pm];
                    a[TE27SKPxr6pm] = t;
                }
            CSLnHzil = CSLnHzil +1;
        };
    }
    return;
}

int main () {
    int a [(1013 - 13)];
    int rJ5VTy [1000];
    int CSLnHzil;
    int zK0GSLnfWM7q;
    int k;
    int DgmwUeWy0V;
    int t;
    int s;
    int n;
    int TE27SKPxr6pm;
    int m;
    {
        k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (k <= 1000) {
            scanf ("%d", &n);
            if (n == (991 - 991))
                break;
            else {
                t = n - 1;
                s = n - 1;
                {
                    CSLnHzil = 724 - 724;
                    while (n > CSLnHzil) {
                        scanf ("%d", &a[CSLnHzil]);
                        CSLnHzil++;
                    };
                }
                sort (a, n);
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
                {
                    CSLnHzil = 567 - 567;
                    while (n > CSLnHzil) {
                        scanf ("%d", &rJ5VTy[CSLnHzil]);
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        CSLnHzil++;
                    };
                }
                sort (rJ5VTy, n);
                zK0GSLnfWM7q = (286 - 286);
                DgmwUeWy0V = 0;
                {
                    CSLnHzil = 0;
                    while (CSLnHzil < n) {
                        if (a[zK0GSLnfWM7q] > rJ5VTy[CSLnHzil]) {
                            DgmwUeWy0V = DgmwUeWy0V +(388 - 188);
                            zK0GSLnfWM7q++;
                        }
                        else {
                            if (rJ5VTy[CSLnHzil] > a[zK0GSLnfWM7q]) {
                                t--;
                                DgmwUeWy0V -= (722 - 522);
                            }
                            else {
                                if (a[zK0GSLnfWM7q] == rJ5VTy[CSLnHzil]) {
                                    TE27SKPxr6pm = t;
                                    m = s;
                                    while (TE27SKPxr6pm >= zK0GSLnfWM7q) {
                                        if (a[TE27SKPxr6pm] > rJ5VTy[m]) {
                                            s--;
                                            t--;
                                            DgmwUeWy0V += (1136 - 936);
                                        }
                                        else {
                                            s = m;
                                            if (a[TE27SKPxr6pm] < rJ5VTy[CSLnHzil])
                                                DgmwUeWy0V -= (264 - 64);
                                            t = --TE27SKPxr6pm;
                                            break;
                                        }
                                        TE27SKPxr6pm--;
                                        m--;
                                    };
                                };
                            };
                        }
                        if (zK0GSLnfWM7q > t)
                            break;
                        CSLnHzil++;
                    };
                };
            }
            printf ("%d\n", DgmwUeWy0V);
            k++;
        };
    }
    getchar ();
    getchar ();
}

