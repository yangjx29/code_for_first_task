int main () {
    int l532axkfVp9, n, i, ytNjiADm, pPeI2j [(39 - 17)] [22];
    cin >> l532axkfVp9 >> n;
    for (i = (382 - 381); i <= l532axkfVp9; i = i + 1) {
        ytNjiADm = 929 - 928;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ytNjiADm <= n) {
            cin >> pPeI2j[i][ytNjiADm];
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
            ytNjiADm = ytNjiADm + 1;
        };
    }
    {
        i = 657 - 657;
        while (i <= n + (398 - 397)) {
            pPeI2j[0][i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n + (823 - 822)) {
            pPeI2j[l532axkfVp9 + (157 - 156)][i] = 0;
            i = i + 1;
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
    {
        i = 1;
        while (i <= l532axkfVp9) {
            pPeI2j[i][0] = 0;
            i = i + 1;
        };
    }
    for (i = 1; i <= l532axkfVp9; i = i + 1)
        pPeI2j[i][n + 1] = 0;
    {
        i = 1;
        while (i <= l532axkfVp9) {
            for (ytNjiADm = 1; ytNjiADm <= n; ytNjiADm = ytNjiADm + 1) {
                if ((pPeI2j[i][ytNjiADm] >= pPeI2j[i + 1][ytNjiADm]) && (pPeI2j[i][ytNjiADm] >= pPeI2j[i - 1][ytNjiADm]) && (pPeI2j[i][ytNjiADm] >= pPeI2j[i][ytNjiADm + 1]) && (pPeI2j[i][ytNjiADm] >= pPeI2j[i][ytNjiADm - 1]))
                    cout << i - 1 << " " << ytNjiADm - 1 << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

