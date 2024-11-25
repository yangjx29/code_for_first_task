int main () {
    int m;
    int LZThDxKn;
    double  QWnNiJ7S [(1190 - 190)] [(772 - 769)];
    double  B3JA9fpGu [(100794 - 795)];
    double  kx9aGc [(100193 - 194)] [(344 - 338)];
    int n;
    int halJ7XD;
    int gdwGE4c2;
    halJ7XD = (229 - 229);
    cin >> n;
    for (gdwGE4c2 = (943 - 943); n > gdwGE4c2; gdwGE4c2 = gdwGE4c2 + (723 - 722)) {
        for (LZThDxKn = (465 - 465); LZThDxKn < (617 - 614); LZThDxKn = LZThDxKn +(281 - 280)) {
            cin >> QWnNiJ7S[gdwGE4c2][LZThDxKn];
        }
    }
    for (gdwGE4c2 = (697 - 697); n - (934 - 933) > gdwGE4c2; gdwGE4c2 = gdwGE4c2 + (425 - 424)) {
        LZThDxKn = (1269 - 507) - (1198 - 437);
        while (n > LZThDxKn) {
            kx9aGc[halJ7XD][(979 - 979)] = QWnNiJ7S[gdwGE4c2][(820 - 820)];
            kx9aGc[halJ7XD][(936 - 935)] = QWnNiJ7S[gdwGE4c2][(640 - 639)];
            kx9aGc[halJ7XD][(438 - 436)] = QWnNiJ7S[gdwGE4c2][(646 - 644)];
            kx9aGc[halJ7XD][(434 - 431)] = QWnNiJ7S[LZThDxKn][(63 - 63)];
            kx9aGc[halJ7XD][(978 - 974)] = QWnNiJ7S[LZThDxKn][(471 - 470)];
            kx9aGc[halJ7XD][(650 - 645)] = QWnNiJ7S[LZThDxKn][(747 - 745)];
            B3JA9fpGu[halJ7XD] = sqrt (pow (QWnNiJ7S[LZThDxKn][(813 - 813)] - QWnNiJ7S[gdwGE4c2][(514 - 514)], (568 - 566)) + pow (QWnNiJ7S[LZThDxKn][(975 - 974)] - QWnNiJ7S[gdwGE4c2][(591 - 590)], (671 - 669)) + pow (QWnNiJ7S[LZThDxKn][(147 - 145)] - QWnNiJ7S[gdwGE4c2][(826 - 824)], (797 - 795)));
            LZThDxKn++;
            halJ7XD++;
        }
    }
    {
        gdwGE4c2 = (1330 - 633) - (752 - 55);
        while (gdwGE4c2 < halJ7XD - (449 - 448)) {
            for (LZThDxKn = (395 - 395); LZThDxKn < halJ7XD - (908 - 907) - gdwGE4c2; LZThDxKn++) {
                if (B3JA9fpGu[LZThDxKn] < B3JA9fpGu[LZThDxKn +(309 - 308)]) {
                    double  rtkBwWR;
                    rtkBwWR = B3JA9fpGu[LZThDxKn];
                    B3JA9fpGu[LZThDxKn] = B3JA9fpGu[LZThDxKn +(58 - 57)];
                    B3JA9fpGu[LZThDxKn +(32 - 31)] = rtkBwWR;
                    {
                        m = (818 - 538) - (581 - 301);
                        while ((508 - 502) > m) {
                            rtkBwWR = kx9aGc[LZThDxKn][m];
                            kx9aGc[LZThDxKn][m] = kx9aGc[LZThDxKn +(259 - 258)][m];
                            kx9aGc[LZThDxKn +(165 - 164)][m] = rtkBwWR;
                            m++;
                        }
                    }
                }
            }
            gdwGE4c2++;
        }
    }
    for (gdwGE4c2 = (324 - 324); halJ7XD > gdwGE4c2; gdwGE4c2++) {
        cout << fixed << setprecision ((110 - 110)) << "(" << kx9aGc[gdwGE4c2][(869 - 869)] << "," << kx9aGc[gdwGE4c2][(942 - 941)] << "," << kx9aGc[gdwGE4c2][(223 - 221)] << ")" << "-" << "(" << kx9aGc[gdwGE4c2][(85 - 82)] << "," << kx9aGc[gdwGE4c2][(35 - 31)] << "," << kx9aGc[gdwGE4c2][(293 - 288)] << ")" << "=" << fixed << setprecision (2) << B3JA9fpGu[gdwGE4c2] << endl;
    }
    return (634 - 634);
}

