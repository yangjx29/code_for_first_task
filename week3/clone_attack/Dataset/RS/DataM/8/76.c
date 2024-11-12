int AptGb5Nk (int A40mFbydVki [], int G4UajuPL, int ttrkqAn [], int y) {
    int Ibx8WJgZoz7f;
    for (Ibx8WJgZoz7f = (283 - 283); G4UajuPL > Ibx8WJgZoz7f; Ibx8WJgZoz7f = Ibx8WJgZoz7f +1)
        scanf ("%d", &A40mFbydVki[Ibx8WJgZoz7f]);
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
    for (Ibx8WJgZoz7f = 0; y > Ibx8WJgZoz7f; Ibx8WJgZoz7f = Ibx8WJgZoz7f +1)
        scanf ("%d", &ttrkqAn[Ibx8WJgZoz7f]);
    return 0;
}

int sFUvlfRuSj (int A40mFbydVki [], int G4UajuPL, int ttrkqAn [], int y) {
    int Ibx8WJgZoz7f, nOgPdj, udSoMW;
    {
        Ibx8WJgZoz7f = 0;
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
        while (Ibx8WJgZoz7f < G4UajuPL -1) {
            for (nOgPdj = Ibx8WJgZoz7f +1; nOgPdj < G4UajuPL; nOgPdj = nOgPdj + 1)
                if (A40mFbydVki[nOgPdj] < A40mFbydVki[Ibx8WJgZoz7f]) {
                    udSoMW = A40mFbydVki[Ibx8WJgZoz7f];
                    A40mFbydVki[Ibx8WJgZoz7f] = A40mFbydVki[nOgPdj];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    A40mFbydVki[nOgPdj] = udSoMW;
                }
            Ibx8WJgZoz7f = Ibx8WJgZoz7f +1;
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
    {
        Ibx8WJgZoz7f = 0;
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
        while (Ibx8WJgZoz7f < y - 1) {
            for (nOgPdj = Ibx8WJgZoz7f +1; y > nOgPdj; nOgPdj++)
                if (ttrkqAn[Ibx8WJgZoz7f] > ttrkqAn[nOgPdj]) {
                    udSoMW = ttrkqAn[Ibx8WJgZoz7f];
                    ttrkqAn[Ibx8WJgZoz7f] = ttrkqAn[nOgPdj];
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
                    ttrkqAn[nOgPdj] = udSoMW;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Ibx8WJgZoz7f++;
        };
    }
    return 0;
}

int GfeH5hTJQ4Ab (int A40mFbydVki [], int G4UajuPL, int ttrkqAn [], int y, int vIn9XC []) {
    int Ibx8WJgZoz7f, nOgPdj;
    for (Ibx8WJgZoz7f = 0; G4UajuPL > Ibx8WJgZoz7f; Ibx8WJgZoz7f = Ibx8WJgZoz7f +1)
        vIn9XC[Ibx8WJgZoz7f] = A40mFbydVki[Ibx8WJgZoz7f];
    for (; G4UajuPL +y > Ibx8WJgZoz7f; Ibx8WJgZoz7f = Ibx8WJgZoz7f +1)
        vIn9XC[Ibx8WJgZoz7f] = ttrkqAn[Ibx8WJgZoz7f -G4UajuPL];
    return 0;
}

int arr3 (int vIn9XC [], int HYMvOCXhn) {
    int Ibx8WJgZoz7f;
    for (Ibx8WJgZoz7f = 0; Ibx8WJgZoz7f < HYMvOCXhn; Ibx8WJgZoz7f = Ibx8WJgZoz7f +1) {
        printf ("%d", vIn9XC[Ibx8WJgZoz7f]);
        if (Ibx8WJgZoz7f < HYMvOCXhn -1)
            ;
    }
    return 0;
}

int main () {
    int G4UajuPL;
    int y;
    int A40mFbydVki [100], ttrkqAn [100], vIn9XC [200];
    scanf ("%d%d", &G4UajuPL, &y);
    AptGb5Nk (A40mFbydVki, G4UajuPL, ttrkqAn, y);
    sFUvlfRuSj (A40mFbydVki, G4UajuPL, ttrkqAn, y);
    GfeH5hTJQ4Ab (A40mFbydVki, G4UajuPL, ttrkqAn, y, vIn9XC);
    arr3 (vIn9XC, G4UajuPL +y);
    return 0;
}

