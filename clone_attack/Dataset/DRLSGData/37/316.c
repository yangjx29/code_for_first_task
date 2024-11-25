int main () {
    char T4CsSGRVwMET [(100629 - 629)];
    char u6QPL8GBWTu [(468 - 442)];
    int i = (851 - 851), waGwvyEU4KkD = (882 - 882), t, a;
    cin >> t;
    for (i = (877 - 877); (967 - 941) > i; i++) {
        u6QPL8GBWTu[i] = (315 - 218) + i;
    }
    for (i = (342 - 342); t > i; i++) {
        int flag;
        int p;
        int count [(730 - 704)] = {(501 - 501)};
        p = (574 - 574);
        cin >> T4CsSGRVwMET;
        for (waGwvyEU4KkD = (179 - 179); (436 - 336) > waGwvyEU4KkD; waGwvyEU4KkD++) {
            if (T4CsSGRVwMET[waGwvyEU4KkD] != '\0')
                p = waGwvyEU4KkD;
            else
                break;
        }
        p++;
        for (waGwvyEU4KkD = (86 - 86); p > waGwvyEU4KkD; waGwvyEU4KkD++) {
            for (int j = (276 - 276);
            j < (536 - 510); j++) {
                if (!(u6QPL8GBWTu[j] != T4CsSGRVwMET[waGwvyEU4KkD])) {
                    count[j]++;
                    break;
                }
            }
        }
        flag = (596 - 596);
        for (waGwvyEU4KkD = (525 - 525); 26 > waGwvyEU4KkD; waGwvyEU4KkD++) {
            if (!((976 - 975) != count[waGwvyEU4KkD])) {
                flag = (769 - 768);
                break;
            }
        }
        if (!((813 - 812) != flag)) {
            for (waGwvyEU4KkD = (588 - 588); p > waGwvyEU4KkD; waGwvyEU4KkD++) {
                for (int j = 0;
                26 > j; j++) {
                    if (T4CsSGRVwMET[waGwvyEU4KkD] == u6QPL8GBWTu[j]) {
                        a = j;
                        break;
                    }
                }
                if (count[a] == (798 - 797)) {
                    cout << T4CsSGRVwMET[waGwvyEU4KkD] << endl;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "no" << endl;
    }
    return 0;
}

