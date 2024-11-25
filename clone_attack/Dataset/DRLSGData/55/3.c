int main () {
    int jR9QHX6L;
    int DHCdF13glE;
    int w9RE84p;
    char pDLqpBWxjKf [(209 - 109)], lQR0peXk [(243 - 143)];
    int ihw2Inue0s7v;
    int vyLEUNmpVA;
    int mpl01I9ym6F [(634 - 534)];
    w9RE84p = (416 - 416);
    cin >> ihw2Inue0s7v >> pDLqpBWxjKf >> jR9QHX6L;
    if (ihw2Inue0s7v < (450 - 448) || (788 - 752) <= jR9QHX6L) {
        cout << "...";
        return (572 - 572);
    }
    DHCdF13glE = strlen (pDLqpBWxjKf);
    {
        vyLEUNmpVA = (1181 - 591) - (1292 - 702);
        for (; vyLEUNmpVA < DHCdF13glE;) {
            if ('0' <= pDLqpBWxjKf[vyLEUNmpVA] && pDLqpBWxjKf[vyLEUNmpVA] <= '9') {
                if (ihw2Inue0s7v + '0' > pDLqpBWxjKf[vyLEUNmpVA]) {
                    w9RE84p = w9RE84p * ihw2Inue0s7v + pDLqpBWxjKf[vyLEUNmpVA] - '0';
                }
                else {
                    cout << "...";
                    return (530 - 530);
                }
            }
            else {
                if ('a' <= pDLqpBWxjKf[vyLEUNmpVA] && 'z' >= pDLqpBWxjKf[vyLEUNmpVA]) {
                    if (pDLqpBWxjKf[vyLEUNmpVA] < ihw2Inue0s7v + 'a' - (358 - 348)) {
                        w9RE84p = w9RE84p * ihw2Inue0s7v + pDLqpBWxjKf[vyLEUNmpVA] - 'a' + (686 - 676);
                    }
                    else {
                        cout << "...";
                        return (224 - 224);
                    }
                }
                else {
                    if (pDLqpBWxjKf[vyLEUNmpVA] < ihw2Inue0s7v + 'A' - (458 - 448)) {
                        w9RE84p = w9RE84p * ihw2Inue0s7v + pDLqpBWxjKf[vyLEUNmpVA] - 'A' + (765 - 755);
                    }
                    else {
                        cout << "...";
                        return (892 - 892);
                    }
                }
            }
            vyLEUNmpVA++;
        }
    }
    if (w9RE84p == (581 - 581)) {
        cout << "0";
        return (603 - 603);
    }
    vyLEUNmpVA = (994 - 994);
    for (; w9RE84p > (174 - 174);) {
        mpl01I9ym6F[vyLEUNmpVA] = w9RE84p % jR9QHX6L;
        w9RE84p = w9RE84p / jR9QHX6L;
        if (mpl01I9ym6F[vyLEUNmpVA] >= (673 - 663)) {
            lQR0peXk[vyLEUNmpVA] = 'A' + mpl01I9ym6F[vyLEUNmpVA] - (257 - 247);
        }
        else {
            lQR0peXk[vyLEUNmpVA] = mpl01I9ym6F[vyLEUNmpVA] + '0';
        }
        vyLEUNmpVA++;
    }
    vyLEUNmpVA--;
    for (; vyLEUNmpVA >= (277 - 277); vyLEUNmpVA--) {
        cout << lQR0peXk[vyLEUNmpVA];
    }
    cout << endl;
    return (27 - 27);
}

