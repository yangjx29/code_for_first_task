int main () {
    char rHp23hPe8TYn [102] [102];
    int vQ7sbc, i, j, mNhDocn7qW, hZjWBztOl, v1Quk2eLq, RAYnsz8 [10502], wMpIOjY [10502];
    cin >> vQ7sbc;
    {
        mNhDocn7qW = 215 - 215;
        i = 949 - 948;
        while (i <= vQ7sbc) {
            {
                j = 53 - 52;
                while (j <= vQ7sbc) {
                    cin >> rHp23hPe8TYn[i][j];
                    if (rHp23hPe8TYn[i][j] == '@') {
                        mNhDocn7qW++;
                        RAYnsz8[mNhDocn7qW] = i;
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
                        wMpIOjY[mNhDocn7qW] = j;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= vQ7sbc + 1) {
            rHp23hPe8TYn[i][0] = '#';
            rHp23hPe8TYn[0][i] = '#';
            rHp23hPe8TYn[vQ7sbc + 1][i] = '#';
            rHp23hPe8TYn[i][vQ7sbc + 1] = '#';
            i++;
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
    cin >> v1Quk2eLq;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= v1Quk2eLq) {
            {
                hZjWBztOl = mNhDocn7qW;
                j = 1;
                while (j <= mNhDocn7qW) {
                    if (rHp23hPe8TYn[RAYnsz8[j]][wMpIOjY[j] + 1] == '.') {
                        hZjWBztOl = hZjWBztOl + 1;
                        RAYnsz8[hZjWBztOl] = RAYnsz8[j];
                        wMpIOjY[hZjWBztOl] = wMpIOjY[j] + 1;
                        rHp23hPe8TYn[RAYnsz8[hZjWBztOl]][wMpIOjY[hZjWBztOl]] = '@';
                    }
                    if (rHp23hPe8TYn[RAYnsz8[j]][wMpIOjY[j] - 1] == '.') {
                        hZjWBztOl++;
                        RAYnsz8[hZjWBztOl] = RAYnsz8[j];
                        wMpIOjY[hZjWBztOl] = wMpIOjY[j] - 1;
                        rHp23hPe8TYn[RAYnsz8[hZjWBztOl]][wMpIOjY[hZjWBztOl]] = '@';
                    }
                    if (rHp23hPe8TYn[RAYnsz8[j] + 1][wMpIOjY[j]] == '.') {
                        hZjWBztOl++;
                        RAYnsz8[hZjWBztOl] = RAYnsz8[j] + 1;
                        wMpIOjY[hZjWBztOl] = wMpIOjY[j];
                        rHp23hPe8TYn[RAYnsz8[hZjWBztOl]][wMpIOjY[hZjWBztOl]] = '@';
                    }
                    if (rHp23hPe8TYn[RAYnsz8[j] - 1][wMpIOjY[j]] == '.') {
                        hZjWBztOl++;
                        RAYnsz8[hZjWBztOl] = RAYnsz8[j] - 1;
                        wMpIOjY[hZjWBztOl] = wMpIOjY[j];
                        rHp23hPe8TYn[RAYnsz8[hZjWBztOl]][wMpIOjY[hZjWBztOl]] = '@';
                    }
                    j++;
                };
            }
            if (hZjWBztOl == mNhDocn7qW)
                break;
            else
                mNhDocn7qW = hZjWBztOl;
            i++;
        };
    }
    {
        hZjWBztOl = 0;
        i = 1;
        while (i <= vQ7sbc) {
            {
                j = 1;
                while (j <= vQ7sbc) {
                    if (rHp23hPe8TYn[i][j] == '@')
                        hZjWBztOl++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << hZjWBztOl << endl;
    return 0;
}

