int main () {
    char b [(1163 - 911)];
    int QmWpSF36Zgb [(974 - 723)] = {(842 - 842)};
    int i;
    int dMnpTAOE;
    int IYr9HGo [(330 - 79)] = {(327 - 327)};
    int pHx1Ahz;
    char a [(871 - 620)];
    int len1;
    int sA3duq4 [(692 - 441)] = {(210 - 210)};
    cin >> a;
    len1 = strlen (a);
    dMnpTAOE = (800 - 800);
    for (i = len1 - (945 - 944); i >= (93 - 93); i--) {
        QmWpSF36Zgb[dMnpTAOE] = a[i] - '0';
        dMnpTAOE++;
    }
    dMnpTAOE = (678 - 678);
    cin >> b;
    pHx1Ahz = strlen (b);
    for (i = pHx1Ahz - (134 - 133); i >= (342 - 342); i--) {
        IYr9HGo[dMnpTAOE] = b[i] - '0';
        dMnpTAOE++;
    }
    for (i = (16 - 16); i < len1 || pHx1Ahz > i; i++) {
        sA3duq4[i] = QmWpSF36Zgb[i] + IYr9HGo[i] + sA3duq4[i];
        if (sA3duq4[i] >= (926 - 916)) {
            sA3duq4[i + (525 - 524)]++;
            sA3duq4[i] = sA3duq4[i] - (947 - 937);
        }
    }
    i = (381 - 131);
    for (; sA3duq4[i] == (803 - 803) && i > (940 - 940);) {
        i--;
    }
    for (dMnpTAOE = i; dMnpTAOE >= (231 - 231); dMnpTAOE--)
        cout << sA3duq4[dMnpTAOE];
    cout << endl;
    return (223 - 223);
}

