int main () {
    int UsBkhR, JzPTkXrehWF, Gi4dlV1;
    int MTsjrKmn2X [UsBkhR +1], MsGpmCWOo = 0, TdBrGyqmTthH = 0;
    cin >> UsBkhR;
    while (0 < UsBkhR) {
        cin >> JzPTkXrehWF;
        if (!(0 == JzPTkXrehWF % 2)) {
            MTsjrKmn2X[MsGpmCWOo] = JzPTkXrehWF;
            MsGpmCWOo++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            TdBrGyqmTthH = TdBrGyqmTthH +1;
        }
        UsBkhR--;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        int wgdb3lB8 = 0;
        while (TdBrGyqmTthH -1 > wgdb3lB8) {
            {
                int LeRCFI15 = 0;
                while (LeRCFI15 < TdBrGyqmTthH -wgdb3lB8 - 1) {
                    if (MTsjrKmn2X[LeRCFI15] > MTsjrKmn2X[LeRCFI15 +1]) {
                        Gi4dlV1 = MTsjrKmn2X[LeRCFI15];
                        MTsjrKmn2X[LeRCFI15] = MTsjrKmn2X[LeRCFI15 +1];
                        MTsjrKmn2X[LeRCFI15 +1] = Gi4dlV1;
                    }
                    LeRCFI15 = LeRCFI15 +1;
                };
            }
            wgdb3lB8++;
        };
    }
    cout << MTsjrKmn2X[0];
    {
        int wgdb3lB8 = 1;
        while (wgdb3lB8 < TdBrGyqmTthH) {
            cout << ',' << MTsjrKmn2X[wgdb3lB8];
            wgdb3lB8++;
        };
    }
    return 0;
}

