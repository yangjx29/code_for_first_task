int main () {
    double  XXT7hWf2Lbei [(1028 - 988)];
    int m;
    double  e;
    int n;
    double  DJwDCEPRnI [(255 - 215)] = {(745 - 745)};
    int k;
    int f;
    int i;
    double  b [(925 - 885)] = {(622 - 622)};
    char s [(671 - 631)] [(252 - 242)];
    f = (558 - 558);
    m = (348 - 348);
    scanf ("%d", &n);
    {
        i = (129 - 129);
        for (; i < n;) {
            scanf ("%s", s[i]);
            scanf ("%lf", &(XXT7hWf2Lbei[i]));
            i = i + (596 - 595);
        }
    }
    {
        i = (534 - 534);
        for (; i < n;) {
            if (!('m' != s[i][(500 - 500)])) {
                DJwDCEPRnI[i] = XXT7hWf2Lbei[i];
                m = m + (630 - 629);
            }
            if (!('f' != s[i][(696 - 696)])) {
                b[i] = XXT7hWf2Lbei[i];
                f = f + (951 - 950);
            }
            i = i + (382 - 381);
        }
    }
    {
        k = (170 - 169);
        for (; (461 - 421) >= k;) {
            {
                i = 0;
                for (; (288 - 248) - k > i;) {
                    if (DJwDCEPRnI[i + (879 - 878)] < DJwDCEPRnI[i]) {
                        e = DJwDCEPRnI[i + (508 - 507)];
                        DJwDCEPRnI[i + (922 - 921)] = DJwDCEPRnI[i];
                        DJwDCEPRnI[i] = e;
                    }
                    i = i + (423 - 422);
                }
            }
            k = k + (144 - 143);
        }
    }
    {
        k = (550 - 549);
        for (; (321 - 281) >= k;) {
            {
                i = 0;
                for (; (208 - 168) - k > i;) {
                    if (b[i] > b[i + (248 - 247)]) {
                        e = b[i + (373 - 372)];
                        b[i + (520 - 519)] = b[i];
                        b[i] = e;
                    }
                    i = i + (693 - 692);
                }
            }
            k = k + (249 - 248);
        }
    }
    {
        i = 40 - m;
        for (; i < 40;) {
            printf ("%.2lf ", DJwDCEPRnI[i]);
            i = i + 1;
        }
    }
    {
        i = (427 - 388);
        while (i > 40 - f) {
            printf ("%.2lf ", b[i]);
            i = i - 1;
        }
    }
    printf ("%.2lf", b[40 - f]);
    return 0;
}

