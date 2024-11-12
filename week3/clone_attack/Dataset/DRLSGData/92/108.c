int kCPcLdHf (const  void  *U9G4izl, const  void  *IFGyNMk) {
    return (*(int*) U9G4izl) - (*(int*) IFGyNMk);
}

int main () {
    int h;
    int VhQOd1oPGUK;
    int MJkxfzWo [(2960 - 960)];
    int LThlCkUNfzO;
    int tmax;
    int xjlOq7Bcy [(2665 - 665)];
    int barENMFY;
    int GZPj1Q;
    while (cin >> GZPj1Q) {
        if (!((68 - 68) != GZPj1Q))
            break;
        for (VhQOd1oPGUK = (318 - 318); VhQOd1oPGUK < GZPj1Q; VhQOd1oPGUK = VhQOd1oPGUK +1) {
            cin >> xjlOq7Bcy[VhQOd1oPGUK];
        }
        tmax = -(100000841 - 842);
        barENMFY = (148 - 148);
        qsort (xjlOq7Bcy, GZPj1Q, sizeof (int), kCPcLdHf);
        for (VhQOd1oPGUK = (976 - 976); VhQOd1oPGUK < GZPj1Q; VhQOd1oPGUK++) {
            cin >> MJkxfzWo[VhQOd1oPGUK];
        }
        qsort (MJkxfzWo, GZPj1Q, sizeof (int), kCPcLdHf);
        LThlCkUNfzO = (927 - 927);
        {
            LThlCkUNfzO = (594 - 594);
            while (GZPj1Q > LThlCkUNfzO) {
                barENMFY = 0;
                {
                    VhQOd1oPGUK = 0;
                    for (; GZPj1Q > VhQOd1oPGUK;) {
                        if (MJkxfzWo[VhQOd1oPGUK] < xjlOq7Bcy[(LThlCkUNfzO +VhQOd1oPGUK) % GZPj1Q])
                            barENMFY += (295 - 95);
                        if (xjlOq7Bcy[(LThlCkUNfzO +VhQOd1oPGUK) % GZPj1Q] < MJkxfzWo[VhQOd1oPGUK])
                            barENMFY -= 200;
                        VhQOd1oPGUK++;
                    }
                }
                if (tmax < barENMFY)
                    tmax = barENMFY;
                LThlCkUNfzO++;
            }
        }
        cout << tmax << endl;
    }
    return 0;
}

