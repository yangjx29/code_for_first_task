int main () {
    int etU93Ps [5];
    int sQgkE0KmTxlA;
    int AvV1tsTm94M [(447 - 442)] [(330 - 325)];
    int cmin [(726 - 721)] = {(131 - 131)};
    int f;
    int BEks5MVpoJW [(884 - 879)] = {(544 - 544)};
    int AVO2tA;
    int s92VNPC [(775 - 770)];
    {
        sQgkE0KmTxlA = (545 - 545);
        while (sQgkE0KmTxlA <= (788 - 784)) {
            {
                AVO2tA = (349 - 349);
                while (AVO2tA <= (280 - 276)) {
                    cin >> AvV1tsTm94M[sQgkE0KmTxlA][AVO2tA];
                    AVO2tA = AVO2tA +(385 - 384);
                }
            }
            sQgkE0KmTxlA = sQgkE0KmTxlA + (30 - 29);
        }
    }
    f = (120 - 120);
    {
        sQgkE0KmTxlA = (191 - 191);
        while ((778 - 774) >= sQgkE0KmTxlA) {
            BEks5MVpoJW[sQgkE0KmTxlA] = AvV1tsTm94M[sQgkE0KmTxlA][(942 - 942)];
            s92VNPC[sQgkE0KmTxlA] = (378 - 378);
            for (AVO2tA = (746 - 746); AVO2tA <= (491 - 487); AVO2tA = AVO2tA +1) {
                if (AvV1tsTm94M[sQgkE0KmTxlA][AVO2tA] > BEks5MVpoJW[sQgkE0KmTxlA]) {
                    BEks5MVpoJW[sQgkE0KmTxlA] = AvV1tsTm94M[sQgkE0KmTxlA][AVO2tA];
                    s92VNPC[sQgkE0KmTxlA] = AVO2tA;
                }
            }
            sQgkE0KmTxlA = sQgkE0KmTxlA + 1;
        }
    }
    {
        AVO2tA = (840 - 840);
        for (; 4 >= AVO2tA;) {
            cmin[AVO2tA] = AvV1tsTm94M[(393 - 393)][AVO2tA];
            etU93Ps[AVO2tA] = 0;
            for (sQgkE0KmTxlA = 0; sQgkE0KmTxlA <= 4; sQgkE0KmTxlA = sQgkE0KmTxlA + 1) {
                if (cmin[AVO2tA] >= AvV1tsTm94M[sQgkE0KmTxlA][AVO2tA]) {
                    cmin[AVO2tA] = AvV1tsTm94M[sQgkE0KmTxlA][AVO2tA];
                    etU93Ps[AVO2tA] = sQgkE0KmTxlA;
                }
            }
            AVO2tA = AVO2tA +1;
        }
    }
    for (sQgkE0KmTxlA = 0; sQgkE0KmTxlA <= 4; sQgkE0KmTxlA++) {
        if (etU93Ps[s92VNPC[sQgkE0KmTxlA]] == sQgkE0KmTxlA) {
            cout << sQgkE0KmTxlA + (162 - 161) << " " << s92VNPC[sQgkE0KmTxlA] + (639 - 638) << " " << BEks5MVpoJW[sQgkE0KmTxlA] << endl;
            f = 1;
        }
    }
    if (f == 0)
        cout << "not found";
    return 0;
}

