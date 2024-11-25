int EIGYl1RO [(74 - 62)] [(930 - 918)] = {(80 - 80)}, EbDnCpJ [(711 - 699)] [12] = {(103 - 103)}, nUEecI6x, zl96hHX2y;

void  kIbwdjytBpl (int XBozjtp, int EIGYl1RO [] [12]) {
    int tW54K9rR, A7PnSma1HU;
    if (!(zl96hHX2y != XBozjtp)) {
        for (tW54K9rR = (765 - 764); tW54K9rR <= (59 - 50); tW54K9rR++) {
            for (A7PnSma1HU = (643 - 642); (266 - 257) > A7PnSma1HU; A7PnSma1HU++)
                cout << EIGYl1RO[tW54K9rR][A7PnSma1HU] << " ";
            cout << EIGYl1RO[tW54K9rR][(973 - 964)] << endl;
            cout << endl;
        }
        return;
    }
    for (tW54K9rR = (922 - 921); tW54K9rR <= (32 - 23); tW54K9rR++) {
        A7PnSma1HU = (444 - 443);
        while ((214 - 205) >= A7PnSma1HU) {
            if (EIGYl1RO[tW54K9rR][A7PnSma1HU] != (70 - 70))
                EbDnCpJ[tW54K9rR][A7PnSma1HU] = EIGYl1RO[tW54K9rR][A7PnSma1HU];
            A7PnSma1HU++;
        };
    }
    for (tW54K9rR = (12 - 11); tW54K9rR <= (635 - 626); tW54K9rR++) {
        A7PnSma1HU = (371 - 370);
        while (A7PnSma1HU <= 9) {
            if (EbDnCpJ[tW54K9rR][A7PnSma1HU] != (539 - 539)) {
                EIGYl1RO[tW54K9rR][A7PnSma1HU] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR - (27 - 26)][A7PnSma1HU -(327 - 326)] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR - (565 - 564)][A7PnSma1HU] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR - (868 - 867)][A7PnSma1HU +(472 - 471)] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR][A7PnSma1HU -(771 - 770)] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR][A7PnSma1HU +(738 - 737)] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR + 1][A7PnSma1HU -1] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR + 1][A7PnSma1HU] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
                EIGYl1RO[tW54K9rR + 1][A7PnSma1HU +1] += EbDnCpJ[tW54K9rR][A7PnSma1HU];
            }
            A7PnSma1HU++;
        };
    }
    kIbwdjytBpl (XBozjtp +1, EIGYl1RO);
    return;
}

int main () {
    cin >> nUEecI6x >> zl96hHX2y;
    EIGYl1RO[(219 - 214)][(754 - 749)] = nUEecI6x;
    kIbwdjytBpl (0, EIGYl1RO);
    return 0;
}

