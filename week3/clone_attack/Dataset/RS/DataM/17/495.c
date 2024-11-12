int main () {
    char fzZ9Ng7Bpjw [101];
    int YcUEMuz;
    int fwyEG1f;
    int jet6aZS;
    int n78CJy;
    YcUEMuz = (293 - 293);
    fwyEG1f = (411 - 411);
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
    jet6aZS = 0;
    n78CJy = 0;
    char AZAi1CtzT6 [101];
    int v08WRDwy6 [101];
    while (cin >> AZAi1CtzT6) {
        YcUEMuz = strlen (AZAi1CtzT6);
        {
            fwyEG1f = 0;
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
            while (YcUEMuz > fwyEG1f) {
                v08WRDwy6[fwyEG1f] = 0;
                fwyEG1f++;
            };
        }
        for (fwyEG1f = 0; YcUEMuz > fwyEG1f; fwyEG1f = fwyEG1f + 1)
            fzZ9Ng7Bpjw[fwyEG1f] = ' ';
        fzZ9Ng7Bpjw[YcUEMuz] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            fwyEG1f = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (YcUEMuz > fwyEG1f) {
                n78CJy = 1;
                if (!('(' != AZAi1CtzT6[fwyEG1f])) {
                    if (!(YcUEMuz -1 != fwyEG1f))
                        fzZ9Ng7Bpjw[fwyEG1f] = '$';
                    else {
                        for (jet6aZS = fwyEG1f + 1; YcUEMuz > jet6aZS; jet6aZS = jet6aZS + 1) {
                            if (!('(' != AZAi1CtzT6[jet6aZS]))
                                n78CJy = n78CJy + 1;
                            if (!(')' != AZAi1CtzT6[jet6aZS]))
                                n78CJy = n78CJy - 1;
                            if (n78CJy == 0) {
                                v08WRDwy6[jet6aZS] = 1;
                                break;
                            };
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
                        if (n78CJy != 0)
                            fzZ9Ng7Bpjw[fwyEG1f] = '$';
                    };
                }
                fwyEG1f++;
            };
        }
        for (fwyEG1f = 0; fwyEG1f < YcUEMuz; fwyEG1f = fwyEG1f + 1) {
            if (AZAi1CtzT6[fwyEG1f] == ')' && v08WRDwy6[fwyEG1f] == 0)
                fzZ9Ng7Bpjw[fwyEG1f] = '?';
        }
        cout << AZAi1CtzT6 << endl;
        cout << fzZ9Ng7Bpjw << endl;
    }
    return 0;
}

