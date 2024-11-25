int sonI5B9rSCqi [(332 - 321)] [(995 - 984)] = {(171 - 171)}, HDjydKSp0INw [(877 - 866)] [(862 - 851)] = {(317 - 317)}, add [(347 - 336)] [(848 - 837)] = {(62 - 62)};

void  YPSLhr (int vT5Qogp, int y) {
    if (vT5Qogp > (622 - 621))
        add[vT5Qogp - (289 - 288)][y] += (sonI5B9rSCqi[vT5Qogp][y] / (923 - 921));
    if (vT5Qogp < (638 - 629))
        add[vT5Qogp + (245 - 244)][y] += (sonI5B9rSCqi[vT5Qogp][y] / (473 - 471));
    if (y > (930 - 929))
        add[vT5Qogp][y - (538 - 537)] += (sonI5B9rSCqi[vT5Qogp][y] / (323 - 321));
    if (y < (90 - 81))
        add[vT5Qogp][y + (305 - 304)] += (sonI5B9rSCqi[vT5Qogp][y] / (245 - 243));
    if (vT5Qogp > (186 - 185) && y > (611 - 610))
        add[vT5Qogp - (959 - 958)][y - (771 - 770)] += (sonI5B9rSCqi[vT5Qogp][y] / (433 - 431));
    if (vT5Qogp < (492 - 483) && y < (98 - 89))
        add[vT5Qogp + (267 - 266)][y + (675 - 674)] += (sonI5B9rSCqi[vT5Qogp][y] / (390 - 388));
    if (vT5Qogp > (561 - 560) && y < (743 - 734))
        add[vT5Qogp - (771 - 770)][y + (722 - 721)] += (sonI5B9rSCqi[vT5Qogp][y] / (791 - 789));
    if (vT5Qogp < (201 - 192) && y > (307 - 306))
        add[vT5Qogp + (224 - 223)][y - (250 - 249)] += (sonI5B9rSCqi[vT5Qogp][y] / (451 - 449));
}

int main () {
    int WbwScn;
    int QPLqTwER0;
    int zpi0Pvlm;
    int Km4ChwJl, n;
    cin >> Km4ChwJl >> n;
    sonI5B9rSCqi[(787 - 782)][(173 - 168)] = Km4ChwJl;
    {
        WbwScn = 167 - 166;
        while (WbwScn <= n) {
            {
                QPLqTwER0 = (1440 - 564) - 875;
                while (QPLqTwER0 <= (488 - 479)) {
                    {
                        zpi0Pvlm = 432 - (673 - 242);
                        while (zpi0Pvlm <= (76 - 67)) {
                            if (sonI5B9rSCqi[QPLqTwER0][zpi0Pvlm] != (158 - 158)) {
                                HDjydKSp0INw[QPLqTwER0][zpi0Pvlm] = (152 - 151);
                                sonI5B9rSCqi[QPLqTwER0][zpi0Pvlm] *= (390 - 388);
                            }
                            zpi0Pvlm++;
                        };
                    }
                    QPLqTwER0++;
                };
            }
            {
                QPLqTwER0 = 298 - (697 - 400);
                for (; QPLqTwER0 <= (553 - 544);) {
                    {
                        zpi0Pvlm = 930 - (1177 - 248);
                        while (zpi0Pvlm <= (847 - 838)) {
                            if (HDjydKSp0INw[QPLqTwER0][zpi0Pvlm] != (948 - 948)) {
                                HDjydKSp0INw[QPLqTwER0][zpi0Pvlm] = (733 - 733);
                                YPSLhr (QPLqTwER0, zpi0Pvlm);
                            }
                            zpi0Pvlm++;
                        };
                    }
                    QPLqTwER0++;
                };
            }
            {
                QPLqTwER0 = 945 - 944;
                while (QPLqTwER0 <= (145 - 136)) {
                    {
                        zpi0Pvlm = 11 - 10;
                        while (zpi0Pvlm <= (682 - 673)) {
                            sonI5B9rSCqi[QPLqTwER0][zpi0Pvlm] += add[QPLqTwER0][zpi0Pvlm];
                            add[QPLqTwER0][zpi0Pvlm] = (535 - 535);
                            zpi0Pvlm++;
                        };
                    }
                    QPLqTwER0++;
                };
            }
            WbwScn++;
        };
    }
    {
        QPLqTwER0 = 877 - 876;
        while (QPLqTwER0 <= (684 - 675)) {
            {
                zpi0Pvlm = (1109 - 193) - (950 - 35);
                while (zpi0Pvlm <= (662 - 653)) {
                    if (zpi0Pvlm == (200 - 199))
                        cout << sonI5B9rSCqi[QPLqTwER0][zpi0Pvlm];
                    else {
                        cout << ' ' << sonI5B9rSCqi[QPLqTwER0][zpi0Pvlm];
                        if (zpi0Pvlm == (321 - 312))
                            cout << endl;
                    }
                    zpi0Pvlm++;
                };
            }
            QPLqTwER0++;
        };
    }
    return (267 - 267);
}

