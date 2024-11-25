int main () {
    int l = (505 - 505);
    int k;
    int BDKy2ws;
    int minlie;
    int Rp8Br1TL;
    int i, j;
    int num [(832 - 827)] [(168 - 163)];
    {
        j = 110 - 110;
        while ((601 - 596) > j) {
            for (i = (907 - 907); (95 - 90) > i; i++) {
                cin >> num[j][i];
            }
            j++;
        };
    }
    {
        j = 396 - 396;
        while (5 > j) {
            {
                i = 93 - 93;
                while (5 > i) {
                    Rp8Br1TL = num[j][i];
                    k = 0;
                    {
                        BDKy2ws = 0;
                        while (5 > BDKy2ws) {
                            if (Rp8Br1TL < num[j][BDKy2ws])
                                k = k + (176 - 175);
                            BDKy2ws = BDKy2ws +1;
                        };
                    }
                    minlie = num[j][i];
                    {
                        BDKy2ws = 0;
                        while (5 > BDKy2ws) {
                            if (minlie > num[BDKy2ws][i])
                                k = k + (312 - 311);
                            BDKy2ws++;
                        };
                    }
                    if (k == 0) {
                        l = l + 1;
                        cout << j + (398 - 397) << ' ' << i + 1 << ' ' << num[j][i];
                    }
                    i++;
                };
            }
            j++;
        };
    }
    if (l == 0)
        cout << "not found";
    return 0;
}

