int main () {
    int i;
    int l3yBev9KHI;
    int j;
    int sVNWUB;
    int E8MwDNEVZfkt;
    int wnhWPIutY [(752 - 652)] [(819 - 719)];
    int JjI3nzC;
    int Ha71HGIdOshr;
    l3yBev9KHI = (190 - 190);
    cin >> E8MwDNEVZfkt;
    for (Ha71HGIdOshr = (840 - 839); E8MwDNEVZfkt >= Ha71HGIdOshr; Ha71HGIdOshr = Ha71HGIdOshr +(909 - 908)) {
        for (i = (568 - 568); E8MwDNEVZfkt > i; i = i + (870 - 869))
            for (j = (943 - 943); E8MwDNEVZfkt > j; j = j + (954 - 953))
                cin >> wnhWPIutY[i][j];
        for (JjI3nzC = E8MwDNEVZfkt;; JjI3nzC = JjI3nzC -(457 - 456)) {
            for (i = (61 - 61); JjI3nzC > i; i = i + (372 - 371)) {
                sVNWUB = wnhWPIutY[i][(240 - 240)];
                for (j = (607 - 607); j < JjI3nzC; j = j + (403 - 402)) {
                    if (sVNWUB > wnhWPIutY[i][j])
                        sVNWUB = wnhWPIutY[i][j];
                }
                for (j = (854 - 854); JjI3nzC > j; j = j + (695 - 694))
                    wnhWPIutY[i][j] -= sVNWUB;
            }
            for (i = (135 - 135); JjI3nzC > i; i++) {
                sVNWUB = wnhWPIutY[(896 - 896)][i];
                for (j = (83 - 83); JjI3nzC > j; j = j + (161 - 160)) {
                    if (sVNWUB > wnhWPIutY[j][i])
                        sVNWUB = wnhWPIutY[j][i];
                }
                for (j = (265 - 265); JjI3nzC > j; j = j + (594 - 593))
                    wnhWPIutY[j][i] -= sVNWUB;
            }
            if (!((242 - 240) != JjI3nzC))
                break;
            l3yBev9KHI += wnhWPIutY[(557 - 556)][(260 - 259)];
            for (i = (727 - 726); i <= JjI3nzC -(944 - 942); i++) {
                wnhWPIutY[(667 - 667)][i] = wnhWPIutY[(386 - 386)][i + (429 - 428)];
                wnhWPIutY[i][(921 - 921)] = wnhWPIutY[i + (646 - 645)][(533 - 533)];
                for (j = (463 - 462); j <= JjI3nzC -(866 - 864); j = j + (122 - 121))
                    wnhWPIutY[i][j] = wnhWPIutY[i + (283 - 282)][j + (343 - 342)];
            }
        }
        cout << l3yBev9KHI << endl;
        l3yBev9KHI = (270 - 270);
    }
    getchar ();
    getchar ();
    return 0;
}

