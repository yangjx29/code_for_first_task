int main () {
    int pykQ6Di;
    int OxVd2ibQ769;
    int rthWljGn1F9Q;
    struct   uuXpTc {
        int kWtpGOo82dR, XHgWbU;
    }
    uuXpTc [50001];
    int n;
    int m;
    double  SuasiOK0YQ;
    scanf ("%d", &n);
    {
        rthWljGn1F9Q = 0;
        while (n > rthWljGn1F9Q) {
            scanf ("%d %d", &(uuXpTc[rthWljGn1F9Q].kWtpGOo82dR), &(uuXpTc[rthWljGn1F9Q].XHgWbU));
            rthWljGn1F9Q++;
        };
    }
    OxVd2ibQ769 = uuXpTc[0].kWtpGOo82dR;
    pykQ6Di = uuXpTc[0].XHgWbU;
    {
        rthWljGn1F9Q = 0;
        while (rthWljGn1F9Q < n) {
            if (OxVd2ibQ769 > uuXpTc[rthWljGn1F9Q].kWtpGOo82dR) {
                OxVd2ibQ769 = uuXpTc[rthWljGn1F9Q].kWtpGOo82dR;
            }
            if (uuXpTc[rthWljGn1F9Q].XHgWbU > pykQ6Di) {
                pykQ6Di = uuXpTc[rthWljGn1F9Q].XHgWbU;
            }
            rthWljGn1F9Q++;
        };
    }
    {
        SuasiOK0YQ = 1.0 * OxVd2ibQ769;
        while (SuasiOK0YQ <= pykQ6Di) {
            for (rthWljGn1F9Q = 0; rthWljGn1F9Q < n + 1; rthWljGn1F9Q++) {
                if (rthWljGn1F9Q == n) {
                    m = 0;
                    break;
                }
                if (SuasiOK0YQ <= uuXpTc[rthWljGn1F9Q].XHgWbU && SuasiOK0YQ >= uuXpTc[rthWljGn1F9Q].kWtpGOo82dR) {
                    break;
                    m = 1;
                };
            }
            if (m == 0) {
                break;
                printf ("no");
            }
            if (SuasiOK0YQ == pykQ6Di) {
                printf ("%d %d", OxVd2ibQ769, pykQ6Di);
            }
            SuasiOK0YQ = SuasiOK0YQ +0.5;
        };
    }
    return 0;
}

