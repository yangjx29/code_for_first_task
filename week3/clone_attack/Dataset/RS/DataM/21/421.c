void  JaIcphNQtmRU (double  Wc20JP [], int UxdH38r, int gAB7Vu) {
    double  dJdskDI = Wc20JP[UxdH38r];
    Wc20JP[UxdH38r] = Wc20JP[gAB7Vu];
    Wc20JP[gAB7Vu] = dJdskDI;
    return;
}

int kKlsZEtjU (double  Wc20JP [], int UxdH38r, int gAB7Vu) {
    int TSptc9eoh60;
    TSptc9eoh60 = UxdH38r -(405 - 404);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int vClfPza = UxdH38r;
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
        while (vClfPza < gAB7Vu) {
            if (Wc20JP[vClfPza] < Wc20JP[gAB7Vu])
                JaIcphNQtmRU (Wc20JP, TSptc9eoh60 = TSptc9eoh60 +1, vClfPza);
            vClfPza++;
        };
    }
    JaIcphNQtmRU (Wc20JP, ++TSptc9eoh60, gAB7Vu);
    return TSptc9eoh60;
}

void  oVNRt26Dr (double  Wc20JP [], int UxdH38r, int gAB7Vu) {
    if (gAB7Vu > UxdH38r) {
        int D7XRQm25f4KW;
        D7XRQm25f4KW = kKlsZEtjU (Wc20JP, UxdH38r, gAB7Vu);
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
        oVNRt26Dr (Wc20JP, UxdH38r, D7XRQm25f4KW -1);
        oVNRt26Dr (Wc20JP, D7XRQm25f4KW +1, gAB7Vu);
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return;
}

double  feIZ81RD (double  dJdskDI) {
    if (dJdskDI > (450 - 450))
        return dJdskDI;
    return -dJdskDI;
}

int main () {
    int uh9ZfPBEe;
    double  Wc20JP [1010], sum;
    double  UxdH38r = feIZ81RD (Wc20JP[uh9ZfPBEe - 1] - sum), gAB7Vu = feIZ81RD (Wc20JP[0] - sum);
    cin >> uh9ZfPBEe;
    {
        int vClfPza = (424 - 424);
        while (vClfPza < uh9ZfPBEe) {
            cin >> Wc20JP[vClfPza];
            sum += Wc20JP[vClfPza];
            vClfPza++;
        };
    }
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
    oVNRt26Dr (Wc20JP, 0, uh9ZfPBEe - 1);
    sum /= uh9ZfPBEe;
    if (UxdH38r < gAB7Vu)
        cout << Wc20JP[0] << endl;
    else {
        if (UxdH38r == gAB7Vu)
            printf ("%d,%d\n", (int) Wc20JP[0], (int) Wc20JP[uh9ZfPBEe - 1]);
        else
            cout << Wc20JP[uh9ZfPBEe - 1] << endl;
    }
    return 0;
}

