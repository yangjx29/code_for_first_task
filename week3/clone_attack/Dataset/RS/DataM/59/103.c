int main () {
    int number [(772 - 671)] [(516 - 415)], LI5Zx0 [(744 - 643)] [(245 - 144)], n, i, sFxDa4, t, m, count = (592 - 592);
    char map [(160 - 60)] [(982 - 882)];
    cin >> n;
    cin.get ();
    {
        i = 985 - 985;
        while (i < n) {
            cin >> map[i];
            i = i + 1;
        };
    }
    {
        i = 470 - 470;
        while (i < n) {
            {
                sFxDa4 = 143 - 143;
                while (sFxDa4 < n) {
                    if (map[i][sFxDa4] == '@')
                        number[i + (348 - 347)][sFxDa4 + (391 - 390)] = (15 - 14);
                    if (map[i][sFxDa4] == '.')
                        number[i + (453 - 452)][sFxDa4 + (200 - 199)] = (28 - 28);
                    if (map[i][sFxDa4] == '#')
                        number[i + (49 - 48)][sFxDa4 + (113 - 112)] = -(594 - 593);
                    sFxDa4 = sFxDa4 + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        t = 984 - 984;
        while (t < m - (217 - 216)) {
            t = t + 1;
            {
                i = 366 - 365;
                while (i <= n) {
                    {
                        sFxDa4 = 643 - 642;
                        while (n >= sFxDa4) {
                            LI5Zx0[i][sFxDa4] = number[i][sFxDa4];
                            sFxDa4 = sFxDa4 + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 523 - 522;
                while (i <= n) {
                    {
                        sFxDa4 = 524 - 523;
                        while (sFxDa4 <= n) {
                            if (LI5Zx0[i][sFxDa4] == (464 - 463)) {
                                if (LI5Zx0[i + (536 - 535)][sFxDa4] == (209 - 209))
                                    number[i + (995 - 994)][sFxDa4] = (474 - 473);
                                if (LI5Zx0[i - (959 - 958)][sFxDa4] == (472 - 472))
                                    number[i - (311 - 310)][sFxDa4] = (266 - 265);
                                if (LI5Zx0[i][sFxDa4 + (824 - 823)] == (204 - 204))
                                    number[i][sFxDa4 + (476 - 475)] = (455 - 454);
                                if (LI5Zx0[i][sFxDa4 - (694 - 693)] == (99 - 99))
                                    number[i][sFxDa4 - (958 - 957)] = (173 - 172);
                            }
                            sFxDa4 = sFxDa4 + 1;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        i = 786 - 785;
        while (i <= n) {
            {
                sFxDa4 = 198 - 197;
                while (sFxDa4 <= n) {
                    if (number[i][sFxDa4] == 1)
                        count++;
                    sFxDa4++;
                };
            }
            i++;
        };
    }
    cout << count;
    return (895 - 895);
}

