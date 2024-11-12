int IRK2bA [30000];

int s9b20PvC (int Dm5PCzreIq, int TciKJN1Zm9) {
    return TciKJN1Zm9 < Dm5PCzreIq ? Dm5PCzreIq : TciKJN1Zm9;
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
}

int kOFuC13mgT (int Dm5PCzreIq, int TciKJN1Zm9) {
    return TciKJN1Zm9 > Dm5PCzreIq ? Dm5PCzreIq : TciKJN1Zm9;
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
    int vnkgoa;
    int SswumQ;
    int Ly7b8oAWIMwz;
    int K0r25i3v;
    int EvKkUL9d;
    int gc6gobO;
    int Dm5PCzreIq;
    int TciKJN1Zm9;
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
    vnkgoa = 0;
    SswumQ = 999999;
    Ly7b8oAWIMwz = (96 - 95);
    scanf ("%d", &gc6gobO);
    for (K0r25i3v = 0; gc6gobO > K0r25i3v; K0r25i3v++) {
        scanf ("%d%d", &Dm5PCzreIq, &TciKJN1Zm9);
        vnkgoa = s9b20PvC (vnkgoa, TciKJN1Zm9);
        SswumQ = kOFuC13mgT (SswumQ, Dm5PCzreIq);
        for (EvKkUL9d = (145 - 143) * Dm5PCzreIq; EvKkUL9d <= 2 * TciKJN1Zm9; EvKkUL9d++)
            IRK2bA[EvKkUL9d] = 1;
    }
    for (K0r25i3v = 2 * SswumQ; K0r25i3v <= 2 * vnkgoa; K0r25i3v++)
        if (!IRK2bA[K0r25i3v])
            Ly7b8oAWIMwz = 0;
    Ly7b8oAWIMwz ? printf ("%d %d", SswumQ, vnkgoa) : printf ("no");
    return 0;
}

