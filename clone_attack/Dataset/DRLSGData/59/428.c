int main () {
    int j85c6wGv2 = 0;
    int m, PK9W8F;
    char UWLNHQXsxm;
    int b [103] [103] = {(570 - 570)};
    int bX1sxO6lDE [103] [103] = {(190 - 190)};
    int n, sHRrf4, j;
    cin >> n;
    for (sHRrf4 = (362 - 361); sHRrf4 <= n; sHRrf4++) {
        j = 164 - 163;
        while (j <= n) {
            {
                if (0) {
                    return 0;
                }
            }
            cin >> UWLNHQXsxm;
            if (UWLNHQXsxm == '#')
                bX1sxO6lDE[sHRrf4][j] = 0;
            if (!('.' != UWLNHQXsxm))
                bX1sxO6lDE[sHRrf4][j] = 100;
            if (UWLNHQXsxm == '@')
                bX1sxO6lDE[sHRrf4][j] = (546 - 545);
            j++;
        }
    }
    cin >> m;
    {
        PK9W8F = 2;
        while (PK9W8F <= m) {
            for (sHRrf4 = 1; sHRrf4 <= n; sHRrf4++) {
                j = 1;
                while (j <= n) {
                    if (bX1sxO6lDE[sHRrf4][j] <= 1)
                        b[sHRrf4][j] = bX1sxO6lDE[sHRrf4][j];
                    if (bX1sxO6lDE[sHRrf4][j] == 100) {
                        if (bX1sxO6lDE[sHRrf4 - 1][j] == 1 || bX1sxO6lDE[sHRrf4 + 1][j] == 1 || bX1sxO6lDE[sHRrf4][j - 1] == 1 || bX1sxO6lDE[sHRrf4][j + 1] == 1)
                            b[sHRrf4][j] = 1;
                        else
                            b[sHRrf4][j] = 100;
                    }
                    j++;
                }
            }
            {
                sHRrf4 = 1;
                while (sHRrf4 <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            bX1sxO6lDE[sHRrf4][j] = b[sHRrf4][j];
                            j++;
                        }
                    }
                    sHRrf4++;
                }
            }
            PK9W8F++;
        }
    }
    for (sHRrf4 = 1; sHRrf4 <= n; sHRrf4++) {
        j = 1;
        while (j <= n) {
            if (bX1sxO6lDE[sHRrf4][j] == 1)
                j85c6wGv2++;
            j++;
        }
    }
    cout << j85c6wGv2;
    return 0;
}

