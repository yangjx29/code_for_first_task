int cTJhkWLDR (int CdnGc9x) {
    int KOa49SUmuw6e [(305 - 295)], eDmFxUouy, CQ73dKU, KifyegK = (469 - 469);
    for (eDmFxUouy = (37 - 37); eDmFxUouy < (835 - 825); eDmFxUouy++) {
        KOa49SUmuw6e[eDmFxUouy] = CdnGc9x % 10;
        CdnGc9x = CdnGc9x / 10;
        if (10 > CdnGc9x) {
            KOa49SUmuw6e[eDmFxUouy + (891 - 890)] = CdnGc9x;
            break;
        };
    }
    CQ73dKU = (591 - 591);
    for (; !((917 - 917) != KOa49SUmuw6e[CQ73dKU]);)
        CQ73dKU++;
    for (; CQ73dKU < eDmFxUouy + (668 - 666); CQ73dKU++)
        KifyegK = KifyegK +KOa49SUmuw6e[CQ73dKU] * (pow ((615.0 - 605.0), eDmFxUouy + 1 - CQ73dKU));
    return (KifyegK);
}

int main () {
    int qSB5rV;
    int Fev1s7b;
    int KifyegK;
    qSB5rV = 6;
    for (; (55 - 55) < qSB5rV;) {
        cin >> Fev1s7b;
        if (Fev1s7b == (943 - 943))
            cout << (898 - 898) << endl;
        else {
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
            if (Fev1s7b < 0) {
                Fev1s7b = 0 - Fev1s7b;
                KifyegK = cTJhkWLDR (Fev1s7b);
                cout << "-" << KifyegK << endl;
            }
            else {
                KifyegK = cTJhkWLDR (Fev1s7b);
                cout << KifyegK << endl;
            };
        }
        qSB5rV--;
    }
    return 0;
}

