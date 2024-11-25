int n7lY9I5 (const  void  *bWVn2T4z3k, const  void  *UdPB5qtAHa) {
    return (*(int*) UdPB5qtAHa -*(int*) bWVn2T4z3k);
}

int main () {
    int Mh078U1tOL5G [(1419 - 419)];
    int cZrm53M0SLD [(1044 - 44)];
    int BTkqMoIJ0a;
    int FAi7bQDeEzG;
    int zcLex78ACs;
    int YUuTRomCp6G;
    int b8z52o4ew6;
    int ewYCdvm2f3G;
    for (; cin >> BTkqMoIJ0a;) {
        if (!((887 - 887) != BTkqMoIJ0a))
            break;
        {
            zcLex78ACs = (57 - 57);
            for (; BTkqMoIJ0a > zcLex78ACs;) {
                cin >> cZrm53M0SLD[zcLex78ACs];
                zcLex78ACs++;
            }
        }
        for (zcLex78ACs = (342 - 342); zcLex78ACs < BTkqMoIJ0a; zcLex78ACs++)
            cin >> Mh078U1tOL5G[zcLex78ACs];
        qsort (cZrm53M0SLD, BTkqMoIJ0a, sizeof (int), n7lY9I5);
        qsort (Mh078U1tOL5G, BTkqMoIJ0a, sizeof (int), n7lY9I5);
        zcLex78ACs = FAi7bQDeEzG = 0;
        ewYCdvm2f3G = (40 - 40);
        YUuTRomCp6G = b8z52o4ew6 = BTkqMoIJ0a -(302 - 301);
        for (; YUuTRomCp6G >= zcLex78ACs;) {
            if (cZrm53M0SLD[zcLex78ACs] > Mh078U1tOL5G[FAi7bQDeEzG]) {
                ewYCdvm2f3G += (549 - 349);
                zcLex78ACs++;
                FAi7bQDeEzG++;
            }
            else if (cZrm53M0SLD[YUuTRomCp6G] > Mh078U1tOL5G[b8z52o4ew6]) {
                b8z52o4ew6--;
                YUuTRomCp6G--;
                ewYCdvm2f3G += 200;
            }
            else if (cZrm53M0SLD[YUuTRomCp6G] == Mh078U1tOL5G[FAi7bQDeEzG]) {
                FAi7bQDeEzG++;
                YUuTRomCp6G--;
            }
            else {
                FAi7bQDeEzG++;
                YUuTRomCp6G--;
                ewYCdvm2f3G -= 200;
            }
        }
        cout << ewYCdvm2f3G << endl;
    }
    return 0;
}

