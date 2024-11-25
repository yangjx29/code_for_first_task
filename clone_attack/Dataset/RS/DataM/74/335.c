int main () {
    int s;
    int mVXqi2A3EH5;
    int AOhRcKU3nE;
    int BUbTD4PNpEu;
    int hv9xug;
    int c;
    int d;
    int e;
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
    int k;
    s = (170 - 170);
    scanf ("%d%d", &mVXqi2A3EH5, &AOhRcKU3nE);
    {
        BUbTD4PNpEu = mVXqi2A3EH5;
        while (AOhRcKU3nE >= BUbTD4PNpEu) {
            k = 0;
            {
                hv9xug = 2;
                while (hv9xug <= sqrt (BUbTD4PNpEu)) {
                    if (BUbTD4PNpEu % hv9xug == 0) {
                        k = 1;
                        break;
                    }
                    hv9xug = hv9xug + 1;
                };
            }
            c = BUbTD4PNpEu;
            e = 0;
            while (c > 0) {
                d = c % 10;
                e = e * 10 + d;
                c = c / 10;
            }
            if (k == 0 && BUbTD4PNpEu == e) {
                s = s + 1;
                if (s == 1)
                    printf ("%d", BUbTD4PNpEu);
                else
                    printf (",%d", BUbTD4PNpEu);
            }
            BUbTD4PNpEu = BUbTD4PNpEu +1;
        };
    }
    if (s == 0)
        printf ("no");
    return 0;
}

