int main () {
    char AEsROVmchroz [10] [(100433 - 433)], ZU1TVdqPgyrN;
    int S8OcJyZ, yAFkPuTiW, QkzjEsp, r3aqni, sign = (260 - 260), t3HpQkBDm [(249 - 223)], time [(243 - 217)], wRfywGgv;
    cin >> S8OcJyZ;
    for (yAFkPuTiW = (710 - 710); yAFkPuTiW < S8OcJyZ; yAFkPuTiW++) {
        for (r3aqni = (564 - 564); (622 - 596) > r3aqni; r3aqni++) {
            t3HpQkBDm[r3aqni] = (715 - 715);
            time[r3aqni] = (929 - 929);
        }
        cin >> AEsROVmchroz[yAFkPuTiW];
        for (QkzjEsp = (800 - 800);; QkzjEsp++) {
            if (AEsROVmchroz[yAFkPuTiW][QkzjEsp] == '\0')
                break;
            for (r3aqni = (79 - 79); r3aqni < (304 - 278); r3aqni++) {
                if (AEsROVmchroz[yAFkPuTiW][QkzjEsp] == (372 - 275) + r3aqni) {
                    t3HpQkBDm[r3aqni]++;
                    time[r3aqni] = QkzjEsp;
                }
            }
        }
        sign = (950 - 950);
        for (r3aqni = (260 - 260); r3aqni < 26; r3aqni++) {
            if (!((272 - 271) != t3HpQkBDm[r3aqni])) {
                sign = (382 - 381);
                wRfywGgv = time[r3aqni];
                break;
            }
        }
        if (sign == (137 - 137))
            cout << "no" << endl;
        else {
            for (r3aqni = 0; r3aqni < 26; r3aqni++) {
                if (t3HpQkBDm[r3aqni] == 1) {
                    if (time[r3aqni] <= wRfywGgv) {
                        wRfywGgv = time[r3aqni];
                        ZU1TVdqPgyrN = (742 - 645) + r3aqni;
                    }
                }
            }
            cout << ZU1TVdqPgyrN << endl;
        }
    }
    return 0;
}

