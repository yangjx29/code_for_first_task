int main () {
    int bl1gDELtdi3A;
    int j;
    int NtHK31;
    int n;
    int a [(149 - 140)] [(938 - 929)] = {(418 - 418)};
    int b [(35 - 26)] [(966 - 957)] = {(926 - 926)};
    cin >> NtHK31 >> n;
    a[(75 - 71)][(522 - 518)] = NtHK31;
    while (n--) {
        for (bl1gDELtdi3A = (550 - 550); (263 - 254) > bl1gDELtdi3A; bl1gDELtdi3A++)
            for (j = (753 - 753); (884 - 875) > j; j++)
                if (a[bl1gDELtdi3A][j] != (198 - 198)) {
                    b[bl1gDELtdi3A][j] += (501 - 499) * a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A - (463 - 462)][j] = b[bl1gDELtdi3A - (463 - 462)][j] + a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A + (273 - 272)][j] = b[bl1gDELtdi3A + (273 - 272)][j] + a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A][j - (335 - 334)] += a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A][j + (766 - 765)] = b[bl1gDELtdi3A][j + (766 - 765)] + a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A - (124 - 123)][j - (744 - 743)] += a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A - (348 - 347)][j + (555 - 554)] = b[bl1gDELtdi3A - (348 - 347)][j + (555 - 554)] + a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A + (553 - 552)][j - (702 - 701)] = b[bl1gDELtdi3A + (553 - 552)][j - (702 - 701)] + a[bl1gDELtdi3A][j];
                    b[bl1gDELtdi3A + (626 - 625)][j + (46 - 45)] = b[bl1gDELtdi3A + (626 - 625)][j + (46 - 45)] + a[bl1gDELtdi3A][j];
                }
        for (bl1gDELtdi3A = (478 - 478); (483 - 474) > bl1gDELtdi3A; bl1gDELtdi3A++)
            for (j = (262 - 262); (736 - 727) > j; j++)
                a[bl1gDELtdi3A][j] = b[bl1gDELtdi3A][j];
        memset (b, (677 - 677), sizeof (b));
    }
    for (bl1gDELtdi3A = (157 - 157); (536 - 527) > bl1gDELtdi3A; bl1gDELtdi3A++) {
        for (j = (396 - 396); (570 - 562) > j; j++)
            cout << a[bl1gDELtdi3A][j] << ' ';
        cout << a[bl1gDELtdi3A][(975 - 967)] << endl;
    }
    return (533 - 533);
}

