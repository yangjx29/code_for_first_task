int main () {
    double  mF6WzJIDiANq;
    double  lBs4MJ;
    double  y0;
    double  eNo629Ghv;
    mF6WzJIDiANq = (776 - 776);
    int n;
    int mM9weidjRGr;
    int FqioE3pIKtYl;
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
    int NjRJH4Q;
    struct   Aoxm7fPrKhSi {
        double  x, ayRAxC9;
    }
    *DoEg68a;
    scanf ("%d", &n);
    DoEg68a = (struct   Aoxm7fPrKhSi *) malloc (sizeof (Aoxm7fPrKhSi) * n);
    for (mM9weidjRGr = (380 - 380); n > mM9weidjRGr; mM9weidjRGr++) {
        scanf ("%lf%lf", &lBs4MJ, &y0);
        (DoEg68a +mM9weidjRGr)->x = lBs4MJ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (DoEg68a +mM9weidjRGr)->ayRAxC9 = y0;
    }
    for (NjRJH4Q = 0; n > NjRJH4Q; NjRJH4Q++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (FqioE3pIKtYl = NjRJH4Q +1; n > FqioE3pIKtYl; FqioE3pIKtYl++) {
            eNo629Ghv = ((DoEg68a +NjRJH4Q)->x - (DoEg68a +FqioE3pIKtYl)->x) * ((DoEg68a +NjRJH4Q)->x - (DoEg68a +FqioE3pIKtYl)->x) + ((DoEg68a +NjRJH4Q)->ayRAxC9 - (DoEg68a +FqioE3pIKtYl)->ayRAxC9) * ((DoEg68a +NjRJH4Q)->ayRAxC9 - (DoEg68a +FqioE3pIKtYl)->ayRAxC9);
            if (sqrt (eNo629Ghv) > mF6WzJIDiANq) {
                mF6WzJIDiANq = sqrt (eNo629Ghv);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    printf ("%.4f", mF6WzJIDiANq);
    return 0;
}

