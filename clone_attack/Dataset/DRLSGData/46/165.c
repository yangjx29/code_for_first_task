int main () {
    int y;
    int ZaP97FVSt;
    int ok0Y8mtXSlK2;
    int xqE3QMh1CYft [(557 - 357)] [(1199 - 999)];
    int of3wxbZ;
    int meW1aiDP;
    int LUXDA19bed2;
    int RwShNpXCYzQ;
    int KxYFaz9SL;
    ZaP97FVSt = y = (518 - 517);
    cin >> meW1aiDP >> of3wxbZ;
    {
        int a3PBUX1CJGw;
        a3PBUX1CJGw = (467 - 466);
        while (a3PBUX1CJGw <= meW1aiDP) {
            {
                int Mdu6gjxmc;
                Mdu6gjxmc = (233 - 232);
                while (of3wxbZ >= Mdu6gjxmc) {
                    cin >> xqE3QMh1CYft[a3PBUX1CJGw][Mdu6gjxmc];
                    Mdu6gjxmc++;
                }
            }
            a3PBUX1CJGw++;
        }
    }
    ok0Y8mtXSlK2 = (497 - 497);
    KxYFaz9SL = meW1aiDP * of3wxbZ;
    for (; meW1aiDP >= ZaP97FVSt;) {
        {
            LUXDA19bed2 = ZaP97FVSt;
            while (of3wxbZ >= LUXDA19bed2) {
                if (ok0Y8mtXSlK2 == KxYFaz9SL)
                    break;
                cout << xqE3QMh1CYft[ZaP97FVSt][LUXDA19bed2] << "\n";
                ok0Y8mtXSlK2++;
                LUXDA19bed2++;
            }
        }
        LUXDA19bed2--;
        {
            RwShNpXCYzQ = y + 1;
            while (RwShNpXCYzQ <= meW1aiDP) {
                if (ok0Y8mtXSlK2 == KxYFaz9SL)
                    break;
                ok0Y8mtXSlK2++;
                cout << xqE3QMh1CYft[RwShNpXCYzQ][LUXDA19bed2] << "\n";
                RwShNpXCYzQ++;
            }
        }
        RwShNpXCYzQ--;
        {
            LUXDA19bed2--;
            for (; LUXDA19bed2 >= ZaP97FVSt;) {
                if (ok0Y8mtXSlK2 == KxYFaz9SL)
                    break;
                {
                    if ((785 - 785)) {
                        return 0;
                    }
                }
                ok0Y8mtXSlK2++;
                cout << xqE3QMh1CYft[RwShNpXCYzQ][LUXDA19bed2] << "\n";
                LUXDA19bed2--;
            }
        }
        LUXDA19bed2++;
        RwShNpXCYzQ--;
        for (; RwShNpXCYzQ > y; RwShNpXCYzQ--) {
            if (ok0Y8mtXSlK2 == KxYFaz9SL)
                break;
            ok0Y8mtXSlK2++;
            cout << xqE3QMh1CYft[RwShNpXCYzQ][LUXDA19bed2] << "\n";
        }
        y++;
        ZaP97FVSt++;
        meW1aiDP--;
        of3wxbZ--;
    }
    return 0;
}

