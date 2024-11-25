int main () {
    int k;
    int i;
    int j;
    int jykvO15F;
    int max1;
    int YgbR2dPG [25];
    int SzItXlF [25];
    jykvO15F = 0;
    YgbR2dPG[(997 - 997)] = (342 - 341);
    cin >> k;
    {
        i = 789 - 789;
        while (k > i) {
            cin >> SzItXlF[i];
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
            i = i + 1;
        };
    }
    {
        i = 628 - 627;
        while (i < k) {
            max1 = 1;
            {
                j = i - 1;
                while (0 <= j) {
                    if (SzItXlF[i] <= SzItXlF[j]) {
                        if (max1 < (YgbR2dPG[j] + 1)) {
                            max1 = YgbR2dPG[j] + 1;
                        };
                    }
                    j--;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YgbR2dPG[i] = max1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < k) {
            if (YgbR2dPG[i] > jykvO15F) {
                jykvO15F = YgbR2dPG[i];
            }
            i = i + 1;
        };
    }
    cout << jykvO15F << endl;
    return 0;
}

