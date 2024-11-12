int main () {
    int m;
    int n;
    int i;
    int j;
    int g;
    int cnt [(224 - 215)] [(755 - 746)] = {(244 - 244)};
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
    cin >> m >> n;
    cnt[4][4] = m;
    for (i = 0; n > i; i++) {
        int nga7QYcRZWMS [(830 - 821)] [(150 - 141)] = {0};
        {
            j = 0;
            while ((932 - 923) > j) {
                for (g = 0; (295 - 286) > g; g = g + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(0 == cnt[j][g])) {
                        nga7QYcRZWMS[j][g] = nga7QYcRZWMS[j][g] + cnt[j][g];
                        if (9 > j + (842 - 841)) {
                            nga7QYcRZWMS[j + (256 - 255)][g] = nga7QYcRZWMS[j + (256 - 255)][g] + cnt[j][g];
                            if (9 > g + (862 - 861))
                                nga7QYcRZWMS[j + 1][g + 1] += cnt[j][g];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            if (0 <= g - 1)
                                nga7QYcRZWMS[j + 1][g - 1] = nga7QYcRZWMS[j + 1][g - 1] + cnt[j][g];
                        }
                        if (0 <= j - 1) {
                            nga7QYcRZWMS[j - 1][g] = nga7QYcRZWMS[j - 1][g] + cnt[j][g];
                            if (9 > g + 1)
                                nga7QYcRZWMS[j - 1][g + 1] += cnt[j][g];
                            if (0 <= g - 1)
                                nga7QYcRZWMS[j - 1][g - 1] = nga7QYcRZWMS[j - 1][g - 1] + cnt[j][g];
                        }
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
                        if (9 > g + 1)
                            nga7QYcRZWMS[j][g + 1] = nga7QYcRZWMS[j][g + 1] + cnt[j][g];
                        if (g - 1 >= 0)
                            nga7QYcRZWMS[j][g - 1] = nga7QYcRZWMS[j][g - 1] + cnt[j][g];
                    };
                }
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 9; j++)
            for (g = 0; g < 9; g++)
                cnt[j][g] += nga7QYcRZWMS[j][g];
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 9) {
                    if (j < 8)
                        cout << cnt[i][j] << ' ';
                    else
                        cout << cnt[i][j] << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

