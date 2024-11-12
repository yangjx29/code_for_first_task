int main () {
    int sBULe9t0w8f;
    char QvE38taIG [(1326 - 325)] [27];
    int p3xDf2QaY [(1633 - 632)], waEkxJbNVM [(838 - 811)] = {(761 - 761)}, twfsan [27];
    int zTubnk60Q;
    int kDi3r1;
    int NmAMwIx;
    int BchSyI;
    char no6wlRKq;
    int ewhKiMBFsS4;
    sBULe9t0w8f = (359 - 333);
    cin >> BchSyI;
    for (ewhKiMBFsS4 = (982 - 982); ewhKiMBFsS4 < BchSyI; ewhKiMBFsS4 = ewhKiMBFsS4 + (635 - 634)) {
        cin >> p3xDf2QaY[ewhKiMBFsS4];
        cin >> QvE38taIG[ewhKiMBFsS4];
        for (NmAMwIx = (978 - 978); NmAMwIx < strlen (QvE38taIG[ewhKiMBFsS4]); NmAMwIx = NmAMwIx +(804 - 803)) {
            waEkxJbNVM[QvE38taIG[ewhKiMBFsS4][NmAMwIx] - 'A']++;
        }
    }
    {
        ewhKiMBFsS4 = (410 - 410);
        for (; ewhKiMBFsS4 < sBULe9t0w8f;) {
            twfsan[ewhKiMBFsS4] = ewhKiMBFsS4;
            ewhKiMBFsS4++;
        }
    }
    for (ewhKiMBFsS4 = (528 - 528); ewhKiMBFsS4 < sBULe9t0w8f; ewhKiMBFsS4++) {
        for (NmAMwIx = sBULe9t0w8f - (596 - 595); (672 - 672) < NmAMwIx; NmAMwIx--) {
            if (waEkxJbNVM[NmAMwIx] > waEkxJbNVM[NmAMwIx -(318 - 317)]) {
                kDi3r1 = waEkxJbNVM[NmAMwIx];
                waEkxJbNVM[NmAMwIx] = waEkxJbNVM[NmAMwIx -(655 - 654)];
                waEkxJbNVM[NmAMwIx -(296 - 295)] = kDi3r1;
                zTubnk60Q = twfsan[NmAMwIx];
                twfsan[NmAMwIx] = twfsan[NmAMwIx -(783 - 782)];
                twfsan[NmAMwIx -(864 - 863)] = zTubnk60Q;
            }
        }
    }
    no6wlRKq = 'A' + twfsan[(873 - 873)];
    cout << no6wlRKq << endl;
    cout << waEkxJbNVM[(994 - 994)] << endl;
    {
        ewhKiMBFsS4 = (177 - 177);
        for (; BchSyI > ewhKiMBFsS4;) {
            {
                NmAMwIx = (210 - 210);
                for (; NmAMwIx < strlen (QvE38taIG[ewhKiMBFsS4]);) {
                    if (QvE38taIG[ewhKiMBFsS4][NmAMwIx] == no6wlRKq) {
                        cout << p3xDf2QaY[ewhKiMBFsS4] << endl;
                        break;
                    }
                    NmAMwIx++;
                }
            }
            ewhKiMBFsS4++;
        }
    }
    return (724 - 724);
}

