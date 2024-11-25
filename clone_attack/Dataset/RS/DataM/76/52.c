int main () {
    int dspoFUcvDKP [500];
    int b [500];
    int JHiG3pJSW [10000];
    int q;
    int i;
    int ZTlK1auj64S;
    int MwkDIr;
    int kDW9rch4x;
    int n;
    q = (565 - 565);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d\n", &(dspoFUcvDKP[i]), &(b[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < n) {
            for (ZTlK1auj64S = dspoFUcvDKP[i]; b[i] > ZTlK1auj64S; ZTlK1auj64S = ZTlK1auj64S +1) {
                JHiG3pJSW[ZTlK1auj64S] = (138 - 137);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n >= i) {
            i = i + 1;
            {
                ZTlK1auj64S = 0;
                while (n - 1 > ZTlK1auj64S) {
                    if (dspoFUcvDKP[ZTlK1auj64S +1] < dspoFUcvDKP[ZTlK1auj64S]) {
                        MwkDIr = dspoFUcvDKP[ZTlK1auj64S];
                        dspoFUcvDKP[ZTlK1auj64S] = dspoFUcvDKP[ZTlK1auj64S +1];
                        dspoFUcvDKP[ZTlK1auj64S +1] = MwkDIr;
                    }
                    ZTlK1auj64S = ZTlK1auj64S +1;
                };
            };
        };
    }
    {
        i = 0;
        while (n >= i) {
            i = i + 1;
            {
                ZTlK1auj64S = 0;
                while (n - 1 > ZTlK1auj64S) {
                    if (b[ZTlK1auj64S +1] > b[ZTlK1auj64S]) {
                        MwkDIr = b[ZTlK1auj64S];
                        b[ZTlK1auj64S] = b[ZTlK1auj64S +1];
                        b[ZTlK1auj64S +1] = MwkDIr;
                    }
                    ZTlK1auj64S++;
                };
            };
        };
    }
    kDW9rch4x = b[0] - dspoFUcvDKP[0];
    for (i = dspoFUcvDKP[0]; i <= b[0]; i = i + 1) {
        q = q + JHiG3pJSW[i];
    }
    if (kDW9rch4x == q) {
        printf ("%d %d", dspoFUcvDKP[0], b[0]);
    }
    else if (kDW9rch4x != q) {
        printf ("no");
    }
    return 0;
}

