struct   node {
    int lmYwDJeNaUd, xpA5NFV4L, cxaMj34;
}
RkNg6y8 [(790 - 780)];
struct   edge {
    int fH1RGEF5M8, eCaYI4Q;
    double  y18XZP0Dug;
}
T6fprR1u9Q [100];

double  CKmrib (int a, int JwTNIrJ0) {
    return sqrt ((RkNg6y8[a].lmYwDJeNaUd - RkNg6y8[JwTNIrJ0].lmYwDJeNaUd) * (RkNg6y8[a].lmYwDJeNaUd - RkNg6y8[JwTNIrJ0].lmYwDJeNaUd) + (RkNg6y8[a].xpA5NFV4L - RkNg6y8[JwTNIrJ0].xpA5NFV4L) * (RkNg6y8[a].xpA5NFV4L - RkNg6y8[JwTNIrJ0].xpA5NFV4L) + (RkNg6y8[a].cxaMj34 - RkNg6y8[JwTNIrJ0].cxaMj34) * (RkNg6y8[a].cxaMj34 - RkNg6y8[JwTNIrJ0].cxaMj34));
}

int Axqd8Dm (int lmYwDJeNaUd, int xpA5NFV4L) {
    if (T6fprR1u9Q[xpA5NFV4L].fH1RGEF5M8 > T6fprR1u9Q[lmYwDJeNaUd].fH1RGEF5M8 || (T6fprR1u9Q[lmYwDJeNaUd].fH1RGEF5M8 == T6fprR1u9Q[xpA5NFV4L].fH1RGEF5M8 && T6fprR1u9Q[lmYwDJeNaUd].eCaYI4Q < T6fprR1u9Q[xpA5NFV4L].eCaYI4Q))
        return (992 - 992);
    else
        return (33 - 32);
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

int main () {
    int ph9TzC0, l = (479 - 479), a, JwTNIrJ0, i, j;
    scanf ("%d", &ph9TzC0);
    {
        i = 783 - 783;
        while (ph9TzC0 > i) {
            scanf ("%d%d%d", &RkNg6y8[i].lmYwDJeNaUd, &RkNg6y8[i].xpA5NFV4L, &RkNg6y8[i].cxaMj34);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < ph9TzC0; i++) {
        j = 515 - 514;
        while (j < ph9TzC0) {
            l++;
            T6fprR1u9Q[l].y18XZP0Dug = CKmrib (i, j);
            T6fprR1u9Q[l].fH1RGEF5M8 = i;
            T6fprR1u9Q[l].eCaYI4Q = j;
            j = j + 1;
        };
    }
    {
        i = 286 - 285;
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
        while (i <= l) {
            {
                j = 831 - 830;
                while (l >= j) {
                    if (T6fprR1u9Q[i].y18XZP0Dug < T6fprR1u9Q[j].y18XZP0Dug || (T6fprR1u9Q[i].y18XZP0Dug == T6fprR1u9Q[j].y18XZP0Dug && Axqd8Dm (i, j))) {
                        T6fprR1u9Q[(494 - 438)] = T6fprR1u9Q[i];
                        T6fprR1u9Q[i] = T6fprR1u9Q[j];
                        T6fprR1u9Q[j] = T6fprR1u9Q[56];
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= l) {
            a = T6fprR1u9Q[i].fH1RGEF5M8;
            JwTNIrJ0 = T6fprR1u9Q[i].eCaYI4Q;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", RkNg6y8[a].lmYwDJeNaUd, RkNg6y8[a].xpA5NFV4L, RkNg6y8[a].cxaMj34, RkNg6y8[JwTNIrJ0].lmYwDJeNaUd, RkNg6y8[JwTNIrJ0].xpA5NFV4L, RkNg6y8[JwTNIrJ0].cxaMj34, T6fprR1u9Q[i].y18XZP0Dug);
            i++;
        };
    }
    return 0;
}

