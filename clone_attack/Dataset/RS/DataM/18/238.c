int main () {
    int i;
    int NUx16kuA;
    cin >> NUx16kuA;
    for (i = (722 - 722); NUx16kuA > i; i = i + 1) {
        int j, badQJ8lTbkz, l, x, PdCg2K [(269 - 169)] [(233 - 133)], hNGlHhO [100] [100], Aw1sd0MWCX;
        int sum = (219 - 219);
        {
            j = 741 - 741;
            while (NUx16kuA > j) {
                {
                    badQJ8lTbkz = 779 - 779;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (NUx16kuA > badQJ8lTbkz) {
                        cin >> PdCg2K[j][badQJ8lTbkz];
                        badQJ8lTbkz = badQJ8lTbkz + 1;
                    };
                }
                j = j + 1;
            };
        }
        for (l = NUx16kuA -(242 - 241); (551 - 550) <= l; l = l - 1) {
            for (j = (185 - 185); l >= j; j = j + 1) {
                badQJ8lTbkz = 513 - 513;
                while (l >= badQJ8lTbkz) {
                    hNGlHhO[j][badQJ8lTbkz] = PdCg2K[j][badQJ8lTbkz];
                    badQJ8lTbkz = badQJ8lTbkz + 1;
                };
            }
            for (j = (482 - 482); l >= j; j = j + 1)
                for (x = (676 - 676); l - (198 - 197) >= x; x = x + 1) {
                    badQJ8lTbkz = 178 - 178;
                    while (badQJ8lTbkz <= l - (155 - 154) - x) {
                        if (hNGlHhO[j][badQJ8lTbkz + (370 - 369)] < hNGlHhO[j][badQJ8lTbkz]) {
                            Aw1sd0MWCX = hNGlHhO[j][badQJ8lTbkz];
                            hNGlHhO[j][badQJ8lTbkz] = hNGlHhO[j][badQJ8lTbkz + (503 - 502)];
                            hNGlHhO[j][badQJ8lTbkz + (281 - 280)] = Aw1sd0MWCX;
                        }
                        badQJ8lTbkz = badQJ8lTbkz + 1;
                    };
                }
            for (j = (337 - 337); l >= j; j = j + 1)
                for (badQJ8lTbkz = (699 - 699); l >= badQJ8lTbkz; badQJ8lTbkz = badQJ8lTbkz + 1)
                    PdCg2K[j][badQJ8lTbkz] = PdCg2K[j][badQJ8lTbkz] - hNGlHhO[j][(96 - 96)];
            {
                j = 346 - 346;
                while (l >= j) {
                    for (badQJ8lTbkz = 0; badQJ8lTbkz <= l; badQJ8lTbkz = badQJ8lTbkz + 1)
                        hNGlHhO[j][badQJ8lTbkz] = PdCg2K[j][badQJ8lTbkz];
                    j = j + 1;
                };
            }
            {
                badQJ8lTbkz = 0;
                while (badQJ8lTbkz <= l) {
                    {
                        x = 0;
                        while (x <= l - 1) {
                            for (j = 0; j <= l - 1 - x; j = j + 1) {
                                if (hNGlHhO[j][badQJ8lTbkz] > hNGlHhO[j + 1][badQJ8lTbkz]) {
                                    Aw1sd0MWCX = hNGlHhO[j][badQJ8lTbkz];
                                    hNGlHhO[j][badQJ8lTbkz] = hNGlHhO[j + 1][badQJ8lTbkz];
                                    hNGlHhO[j + 1][badQJ8lTbkz] = Aw1sd0MWCX;
                                };
                            }
                            x = x + 1;
                        };
                    }
                    badQJ8lTbkz = badQJ8lTbkz + 1;
                };
            }
            for (j = 0; j <= l; j = j + 1)
                for (badQJ8lTbkz = 0; badQJ8lTbkz <= l; badQJ8lTbkz = badQJ8lTbkz + 1)
                    PdCg2K[j][badQJ8lTbkz] = PdCg2K[j][badQJ8lTbkz] - hNGlHhO[0][badQJ8lTbkz];
            sum += PdCg2K[1][1];
            for (j = (808 - 806); j <= l; j = j + 1) {
                badQJ8lTbkz = 141 - 139;
                while (badQJ8lTbkz <= l) {
                    PdCg2K[j - 1][badQJ8lTbkz - 1] = PdCg2K[j][badQJ8lTbkz];
                    badQJ8lTbkz = badQJ8lTbkz + 1;
                };
            }
            for (badQJ8lTbkz = (712 - 710); badQJ8lTbkz <= l; badQJ8lTbkz = badQJ8lTbkz + 1)
                PdCg2K[0][badQJ8lTbkz - 1] = PdCg2K[0][badQJ8lTbkz];
            for (j = 2; j <= l; j = j + 1)
                PdCg2K[j - 1][0] = PdCg2K[j][0];
        }
        cout << sum << endl;
    }
    return 0;
}

