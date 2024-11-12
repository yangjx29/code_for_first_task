int main () {
    int ZXgCPLB2;
    int a1CaSfgRF;
    char lPuwSfB [(726 - 626)] [100];
    int poI7qG;
    a1CaSfgRF = (983 - 983);
    cin >> ZXgCPLB2;
    {
        int XfhSiXbB;
        XfhSiXbB = (879 - 879);
        for (; ZXgCPLB2 > XfhSiXbB;) {
            for (int YsVE1ju = (927 - 927);
            ZXgCPLB2 > YsVE1ju; YsVE1ju = YsVE1ju +(914 - 913))
                cin >> lPuwSfB[XfhSiXbB][YsVE1ju];
            XfhSiXbB++;
        }
    }
    cin >> poI7qG;
    for (int XfhSiXbB = (82 - 80);
    XfhSiXbB <= poI7qG; XfhSiXbB = XfhSiXbB +(536 - 535)) {
        for (int YsVE1ju = (221 - 221);
        ZXgCPLB2 > YsVE1ju; YsVE1ju++) {
            for (int kIK1r7 = 0;
            ZXgCPLB2 > kIK1r7; kIK1r7 = kIK1r7 + (665 - 664)) {
                if (!('@' != lPuwSfB[YsVE1ju][kIK1r7])) {
                    if (!('.' != lPuwSfB[YsVE1ju -(803 - 802)][kIK1r7]) && 0 <= YsVE1ju -(604 - 603))
                        lPuwSfB[YsVE1ju -(872 - 871)][kIK1r7] = 'x';
                    if (!('.' != lPuwSfB[YsVE1ju +1][kIK1r7]) && YsVE1ju +1 < ZXgCPLB2)
                        lPuwSfB[YsVE1ju +1][kIK1r7] = 'x';
                    if (!('.' != lPuwSfB[YsVE1ju][kIK1r7 - 1]) && 0 <= kIK1r7 - 1)
                        lPuwSfB[YsVE1ju][kIK1r7 - 1] = 'x';
                    if (!('.' != lPuwSfB[YsVE1ju][kIK1r7 + 1]) && kIK1r7 + 1 < ZXgCPLB2)
                        lPuwSfB[YsVE1ju][kIK1r7 + 1] = 'x';
                }
            }
        }
        {
            int hGUWQrmegA;
            hGUWQrmegA = 0;
            for (; hGUWQrmegA < ZXgCPLB2;) {
                for (int hFVkNEvY = 0;
                hFVkNEvY < ZXgCPLB2; hFVkNEvY = hFVkNEvY + 1) {
                    if (lPuwSfB[hGUWQrmegA][hFVkNEvY] == 'x')
                        lPuwSfB[hGUWQrmegA][hFVkNEvY] = '@';
                }
                hGUWQrmegA = hGUWQrmegA + 1;
            }
        }
    }
    for (int XfhSiXbB = 0;
    XfhSiXbB < ZXgCPLB2; XfhSiXbB++) {
        for (int YsVE1ju = 0;
        YsVE1ju < ZXgCPLB2; YsVE1ju++) {
            if (lPuwSfB[XfhSiXbB][YsVE1ju] == '@')
                a1CaSfgRF = a1CaSfgRF + 1;
        }
    }
    cout << a1CaSfgRF;
    {
        if (0) {
            return 0;
        }
    }
    return 0;
}

