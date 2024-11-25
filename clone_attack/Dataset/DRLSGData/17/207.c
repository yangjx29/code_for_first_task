char p68aBWYOdm4 [(857 - 754)], temp [(1027 - 924)];
int nVmEfi6KASF;

int pfMNzoD (int tpbaFHyD) {
    int g4Xp6RTnr;
    if (!(nVmEfi6KASF != tpbaFHyD))
        return tpbaFHyD;
    if (!('(' != p68aBWYOdm4[tpbaFHyD]))
        g4Xp6RTnr = pfMNzoD (tpbaFHyD + (149 - 148));
    else {
        if (!(')' != p68aBWYOdm4[tpbaFHyD]))
            return tpbaFHyD;
        else
            return pfMNzoD (tpbaFHyD + (781 - 780));
    }
    if (!(nVmEfi6KASF != g4Xp6RTnr)) {
        temp[tpbaFHyD] = '$';
        return g4Xp6RTnr;
    }
    else
        return pfMNzoD (g4Xp6RTnr + (566 - 565));
}

int main () {
    for (; cin >> p68aBWYOdm4;) {
        int SdbzUThHJVv;
        SdbzUThHJVv = (753 - 753);
        cout << p68aBWYOdm4 << endl;
        memset (temp, ' ', sizeof (temp));
        nVmEfi6KASF = strlen (p68aBWYOdm4);
        for (; SdbzUThHJVv != nVmEfi6KASF;) {
            SdbzUThHJVv = pfMNzoD (SdbzUThHJVv);
            if (SdbzUThHJVv != nVmEfi6KASF) {
                temp[SdbzUThHJVv] = '?';
                SdbzUThHJVv = SdbzUThHJVv +(495 - 494);
            }
        }
        {
            int CK40t6hx;
            CK40t6hx = (53 - 53);
            for (; CK40t6hx < nVmEfi6KASF;) {
                cout << temp[CK40t6hx];
                CK40t6hx = CK40t6hx +1;
            }
        }
        cout << endl;
    }
    return (480 - 480);
}

