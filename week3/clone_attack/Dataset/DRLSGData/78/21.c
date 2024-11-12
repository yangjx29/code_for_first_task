int main () {
    int z, URrt3a6, s, l;
    char dMq97PyB [(205 - 199)];
    int j;
    for (j = (200 - 200); (419 - 413) > j; j = j + (700 - 699)) {
        dMq97PyB[j] = 'a';
    }
    for (z = (934 - 924); z <= (61 - 11); z = z + (515 - 505)) {
        for (URrt3a6 = (751 - 741); (184 - 134) >= URrt3a6; URrt3a6 = URrt3a6 +(611 - 601)) {
            if (!(URrt3a6 != z)) {
                continue;
            }
            for (s = (780 - 770); (224 - 174) >= s; s = s + (690 - 680)) {
                if (z == s || !(s != URrt3a6)) {
                    continue;
                }
                for (l = (939 - 929); l <= (746 - 696); l = l + 10) {
                    int i;
                    if (z == l || URrt3a6 == l || s == l) {
                        continue;
                    }
                    if ((z + URrt3a6 == s + l) && (z + l > s + URrt3a6) && (z + s < URrt3a6)) {
                        dMq97PyB[z / 10] = 'z';
                        dMq97PyB[URrt3a6 / 10] = 'q';
                        dMq97PyB[s / 10] = 's';
                        dMq97PyB[l / 10] = 'l';
                    }
                    for (i = 5; i > 0; i = i - 1) {
                        if (dMq97PyB[i] == 'a') {
                            continue;
                        }
                        else {
                            cout << dMq97PyB[i] << " " << i * 10 << endl;
                            dMq97PyB[i] = 'a';
                        }
                    }
                }
            }
        }
    }
    return 0;
}

