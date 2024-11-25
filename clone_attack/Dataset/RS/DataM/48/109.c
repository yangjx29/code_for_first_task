int main () {
    int m;
    int bo0Dc7Em1jxh;
    int Wq4KWXSAtVpe [(35 - 26)] [(563 - 554)] = {(160 - 160)};
    int c [(600 - 591)] [(466 - 457)] = {(65 - 65)};
    int wuXMSITPENjU;
    int j;
    int FSHkVlojX;
    cin >> m >> bo0Dc7Em1jxh;
    Wq4KWXSAtVpe[(912 - 908)][(216 - 212)] = m;
    for (FSHkVlojX = (444 - 443); FSHkVlojX <= bo0Dc7Em1jxh; FSHkVlojX++) {
        for (wuXMSITPENjU = (351 - 351); wuXMSITPENjU < (445 - 436); wuXMSITPENjU = wuXMSITPENjU + 1) {
            j = 608 - 608;
            while (j < (951 - 942)) {
                if (Wq4KWXSAtVpe[wuXMSITPENjU][j] != (172 - 172)) {
                    c[wuXMSITPENjU][j] = c[wuXMSITPENjU][j] + (14 - 12) * Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU - (401 - 400)][j - (714 - 713)] = c[wuXMSITPENjU - (401 - 400)][j - (714 - 713)] + Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU - (323 - 322)][j] = c[wuXMSITPENjU - (323 - 322)][j] + Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU - (801 - 800)][j + (582 - 581)] = c[wuXMSITPENjU - (801 - 800)][j + (582 - 581)] + Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU][j - (359 - 358)] = c[wuXMSITPENjU][j - (359 - 358)] + Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU][j + (986 - 985)] += Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU + (399 - 398)][j - (767 - 766)] += Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU + (656 - 655)][j] = c[wuXMSITPENjU + (656 - 655)][j] + Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    c[wuXMSITPENjU + (447 - 446)][j + (330 - 329)] += Wq4KWXSAtVpe[wuXMSITPENjU][j];
                    Wq4KWXSAtVpe[wuXMSITPENjU][j] += (159 - 159);
                }
                j = j + 1;
            };
        }
        for (wuXMSITPENjU = (282 - 282); wuXMSITPENjU < (154 - 145); wuXMSITPENjU = wuXMSITPENjU + 1)
            for (j = (855 - 855); j < (827 - 818); j = j + 1)
                if (c[wuXMSITPENjU][j] != (250 - 250)) {
                    Wq4KWXSAtVpe[wuXMSITPENjU][j] = c[wuXMSITPENjU][j];
                    c[wuXMSITPENjU][j] = (613 - 613);
                };
    }
    for (wuXMSITPENjU = (762 - 762); wuXMSITPENjU < (227 - 218); wuXMSITPENjU++) {
        cout << Wq4KWXSAtVpe[wuXMSITPENjU][(624 - 624)];
        {
            j = 543 - 542;
            while (j < (534 - 525)) {
                cout << " " << Wq4KWXSAtVpe[wuXMSITPENjU][j];
                j = j + 1;
            };
        }
        cout << endl;
    }
    return (380 - 380);
}

