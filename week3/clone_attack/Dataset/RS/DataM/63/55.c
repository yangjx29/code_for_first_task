int main () {
    int KIDPnK5LtO9 [101] [101] = {0};
    int w9pGMI = (418 - 418), knpiNoRhuf8t = 0, pgLD6K7uA3i = 0;
    int a [(452 - 351)] [(971 - 870)];
    int uDgImjcsUZQ [101] [101];
    cin >> w9pGMI >> knpiNoRhuf8t;
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
    {
        int VyWwSNlVZp = (974 - 973);
        while (w9pGMI >= VyWwSNlVZp) {
            {
                int PkQgdK = (202 - 201);
                while (knpiNoRhuf8t >= PkQgdK) {
                    cin >> a[VyWwSNlVZp][PkQgdK];
                    PkQgdK++;
                };
            }
            VyWwSNlVZp = VyWwSNlVZp +1;
        };
    }
    cin >> knpiNoRhuf8t >> pgLD6K7uA3i;
    {
        int VyWwSNlVZp = (991 - 990);
        while (knpiNoRhuf8t >= VyWwSNlVZp) {
            {
                int PkQgdK = 1;
                while (PkQgdK <= pgLD6K7uA3i) {
                    cin >> uDgImjcsUZQ[VyWwSNlVZp][PkQgdK];
                    PkQgdK++;
                };
            }
            VyWwSNlVZp++;
        };
    }
    {
        int PkQgdK = 1;
        while (PkQgdK <= pgLD6K7uA3i) {
            {
                int VyWwSNlVZp = 1;
                while (VyWwSNlVZp <= w9pGMI) {
                    for (int lJ1kAcavB2xG = 1;
                    lJ1kAcavB2xG <= knpiNoRhuf8t; lJ1kAcavB2xG = lJ1kAcavB2xG + 1)
                        KIDPnK5LtO9[VyWwSNlVZp][PkQgdK] = KIDPnK5LtO9[VyWwSNlVZp][PkQgdK] + a[VyWwSNlVZp][lJ1kAcavB2xG] * uDgImjcsUZQ[lJ1kAcavB2xG][PkQgdK];
                    VyWwSNlVZp++;
                };
            }
            PkQgdK++;
        };
    }
    {
        int a = 1;
        while (a <= w9pGMI) {
            {
                int uDgImjcsUZQ = 1;
                while (uDgImjcsUZQ <= pgLD6K7uA3i - 1) {
                    cout << KIDPnK5LtO9[a][uDgImjcsUZQ] << " ";
                    uDgImjcsUZQ++;
                };
            }
            cout << KIDPnK5LtO9[a][pgLD6K7uA3i] << endl;
            a = a + 1;
        };
    }
    return 0;
}

