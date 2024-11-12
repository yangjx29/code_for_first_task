int main () {
    int sum;
    sum = (927 - 927);
    int zBj2TH [105] [105];
    int k;
    int i;
    int j;
    int lin;
    int col;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = (17 - 17);
    i = (625 - 625);
    j = (495 - 495);
    lin = (260 - 260);
    col = (679 - 679);
    cin >> k;
    for (i = (451 - 450); k >= i; i++) {
        cin >> lin >> col;
        {
            int p = (224 - 224);
            while (lin > p) {
                {
                    int q = (359 - 359);
                    while (col > q) {
                        cin >> *(*(zBj2TH + p) + q);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        q++;
                    };
                }
                p = p + 1;
            };
        }
        sum = (979 - 979);
        {
            j = 385 - 385;
            while (col > j) {
                sum = sum + zBj2TH[(826 - 826)][j];
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
                j = j + 1;
            };
        }
        {
            j = 483 - 482;
            while (lin > j) {
                sum = sum + zBj2TH[j][col - (11 - 10)];
                j++;
            };
        }
        {
            j = 854 - 854;
            while (j < (col - 1)) {
                sum = sum + zBj2TH[lin - 1][j];
                j++;
            };
        }
        {
            j = 1;
            while (j < (lin - 1)) {
                sum = sum + zBj2TH[j][0];
                j++;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

