int main () {
    int upHYqRW0g, WiZfKtG2WRX, cPHJZsvtrj, A4cseP, sGZauLURS, UShz3Zj [1000], Nb9egj6 [1000];
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
    scanf ("%d %d", &upHYqRW0g, &WiZfKtG2WRX);
    while (!(0 == upHYqRW0g) && !(0 == WiZfKtG2WRX)) {
        {
            cPHJZsvtrj = 0;
            while (cPHJZsvtrj <= (upHYqRW0g - 1)) {
                Nb9egj6[cPHJZsvtrj] = 0;
                UShz3Zj[cPHJZsvtrj] = cPHJZsvtrj + 1;
                cPHJZsvtrj = cPHJZsvtrj + 1;
            };
        }
        for (A4cseP = 0; (upHYqRW0g - 2) >= A4cseP; A4cseP = A4cseP +1) {
            sGZauLURS = WiZfKtG2WRX % (upHYqRW0g - A4cseP);
            {
                cPHJZsvtrj = sGZauLURS;
                while (cPHJZsvtrj <= (upHYqRW0g - A4cseP -1)) {
                    Nb9egj6[cPHJZsvtrj - sGZauLURS] = UShz3Zj[cPHJZsvtrj];
                    cPHJZsvtrj = cPHJZsvtrj + 1;
                };
            }
            {
                cPHJZsvtrj = 0;
                while (cPHJZsvtrj <= (sGZauLURS - 2)) {
                    Nb9egj6[upHYqRW0g - A4cseP -sGZauLURS + cPHJZsvtrj] = UShz3Zj[cPHJZsvtrj];
                    cPHJZsvtrj = cPHJZsvtrj + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                cPHJZsvtrj = 0;
                while (cPHJZsvtrj <= (upHYqRW0g - A4cseP -2)) {
                    UShz3Zj[cPHJZsvtrj] = Nb9egj6[cPHJZsvtrj];
                    cPHJZsvtrj++;
                };
            }
            UShz3Zj[upHYqRW0g - A4cseP -1] = 0;
            for (cPHJZsvtrj = 0; cPHJZsvtrj <= upHYqRW0g - A4cseP -2; cPHJZsvtrj = cPHJZsvtrj + 1) {
                Nb9egj6[cPHJZsvtrj] = 0;
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
        scanf ("%d %d", &upHYqRW0g, &WiZfKtG2WRX);
        printf ("%d\n", UShz3Zj[0]);
    };
}

