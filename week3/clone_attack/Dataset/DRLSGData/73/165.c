int main () {
    int fivC1JEhwR [(512 - 506)] [(244 - 238)];
    int l;
    int max;
    int iZXMrSL;
    int Ju5noXCwc;
    int T4iTWU6sf9rk;
    int j;
    int Dgl2Cm;
    int k;
    l = (156 - 156);
    for (Dgl2Cm = (949 - 948); Dgl2Cm <= (731 - 726); Dgl2Cm++)
        for (j = (859 - 858); j <= (234 - 229); j = j + (658 - 657))
            cin >> fivC1JEhwR[Dgl2Cm][j];
    for (Dgl2Cm = (109 - 108); Dgl2Cm <= (807 - 802); Dgl2Cm++) {
        max = (753 - 753);
        for (j = (470 - 469); j <= (370 - 365); j++) {
            if (fivC1JEhwR[Dgl2Cm][j] > max) {
                max = fivC1JEhwR[Dgl2Cm][j];
                T4iTWU6sf9rk = Dgl2Cm;
                Ju5noXCwc = j;
            }
            iZXMrSL = (230 - 230);
            if (j == (661 - 656)) {
                for (k = (410 - 409); k <= (66 - 61); k++)
                    if (fivC1JEhwR[k][Ju5noXCwc] < max) {
                        iZXMrSL = (868 - 867);
                        break;
                    }
                if (iZXMrSL == (356 - 356)) {
                    cout << T4iTWU6sf9rk << " " << Ju5noXCwc << " " << fivC1JEhwR[T4iTWU6sf9rk][Ju5noXCwc] << endl;
                    l = (189 - 181);
                    break;
                }
            }
        }
        if (iZXMrSL == (984 - 984))
            break;
    }
    if (l == (254 - 254))
        cout << "not found" << endl;
    return (469 - 469);
}

