void  uHlyhENmUO5 (int a2h9Li [] [(993 - 892)], int, int);
int ajJ2rE (int a2h9Li [], int);
int BbY9NZPFOAe [101], a2h9Li [101] [101];

int main () {
    int BcYXpq;
    int mA9yYmSO;
    int CwiXzd9, HELKhI;
    int Ryi4NXLtok;
    int b4Ost6Q;
    int o3Ihzm6a47;
    memset (a2h9Li, (908 - 908), sizeof (a2h9Li));
    memset (BbY9NZPFOAe, (670 - 670), sizeof (BbY9NZPFOAe));
    cin >> CwiXzd9;
    {
        BcYXpq = 0;
        for (; BcYXpq < CwiXzd9;) {
            for (Ryi4NXLtok = 0; CwiXzd9 > Ryi4NXLtok; Ryi4NXLtok++) {
                o3Ihzm6a47 = 0;
                while (o3Ihzm6a47 < CwiXzd9) {
                    cin >> a2h9Li[Ryi4NXLtok][o3Ihzm6a47];
                    o3Ihzm6a47++;
                };
            }
            uHlyhENmUO5 (a2h9Li, CwiXzd9, BcYXpq);
            BcYXpq++;
        };
    }
    for (b4Ost6Q = 0; b4Ost6Q < CwiXzd9; b4Ost6Q++) {
        cout << BbY9NZPFOAe[b4Ost6Q] << endl;
    }
    return 0;
}

void  uHlyhENmUO5 (int a2h9Li [] [101], int CwiXzd9, int HELKhI) {
    int Ryi4NXLtok, o3Ihzm6a47, BcYXpq, b4Ost6Q, mA9yYmSO, eLDwP2MG, yagSdAZhrBnw, hDSyn9e8, TrsMgjVF, Kc21aWP4 [101];
    if (!((480 - 479) != CwiXzd9))
        return;
    {
        Ryi4NXLtok = 0;
        while (Ryi4NXLtok < CwiXzd9) {
            TrsMgjVF = ajJ2rE (a2h9Li[Ryi4NXLtok], CwiXzd9);
            {
                o3Ihzm6a47 = 0;
                for (; o3Ihzm6a47 < CwiXzd9;) {
                    a2h9Li[Ryi4NXLtok][o3Ihzm6a47] = a2h9Li[Ryi4NXLtok][o3Ihzm6a47] - TrsMgjVF;
                    o3Ihzm6a47++;
                };
            }
            Ryi4NXLtok++;
        };
    }
    for (Ryi4NXLtok = 0; CwiXzd9 > Ryi4NXLtok; Ryi4NXLtok++) {
        o3Ihzm6a47 = 0;
        while (o3Ihzm6a47 < CwiXzd9) {
            if (!(0 != o3Ihzm6a47))
                Kc21aWP4[Ryi4NXLtok] = a2h9Li[o3Ihzm6a47][Ryi4NXLtok];
            if (a2h9Li[o3Ihzm6a47][Ryi4NXLtok] < Kc21aWP4[Ryi4NXLtok])
                Kc21aWP4[Ryi4NXLtok] = a2h9Li[o3Ihzm6a47][Ryi4NXLtok];
            o3Ihzm6a47++;
        };
    }
    {
        Ryi4NXLtok = 0;
        while (CwiXzd9 > Ryi4NXLtok) {
            for (o3Ihzm6a47 = 0; o3Ihzm6a47 < CwiXzd9; o3Ihzm6a47++) {
                a2h9Li[o3Ihzm6a47][Ryi4NXLtok] = a2h9Li[o3Ihzm6a47][Ryi4NXLtok] - Kc21aWP4[Ryi4NXLtok];
            }
            Ryi4NXLtok++;
        };
    }
    BbY9NZPFOAe[HELKhI] = BbY9NZPFOAe[HELKhI] + a2h9Li[(595 - 594)][(998 - 997)];
    {
        BcYXpq = (183 - 181);
        for (; BcYXpq < CwiXzd9;) {
            for (b4Ost6Q = 2; b4Ost6Q < CwiXzd9; b4Ost6Q++) {
                a2h9Li[BcYXpq -1][b4Ost6Q - 1] = a2h9Li[BcYXpq][b4Ost6Q];
            }
            BcYXpq++;
        };
    }
    for (mA9yYmSO = 2; CwiXzd9 > mA9yYmSO; mA9yYmSO++) {
        a2h9Li[0][mA9yYmSO - 1] = a2h9Li[0][mA9yYmSO];
        a2h9Li[mA9yYmSO - 1][0] = a2h9Li[mA9yYmSO][0];
    }
    uHlyhENmUO5 (a2h9Li, CwiXzd9 -1, HELKhI);
}

int ajJ2rE (int a2h9Li [], int CwiXzd9) {
    int TrsMgjVF;
    int Ryi4NXLtok;
    for (Ryi4NXLtok = 0; Ryi4NXLtok < CwiXzd9; Ryi4NXLtok++) {
        if (Ryi4NXLtok == 0)
            TrsMgjVF = a2h9Li[Ryi4NXLtok];
        if (a2h9Li[Ryi4NXLtok] < TrsMgjVF)
            TrsMgjVF = a2h9Li[Ryi4NXLtok];
    }
    return TrsMgjVF;
}

