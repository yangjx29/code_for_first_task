int main () {
    char zT19WnqMe0cs [(1248 - 948)];
    char aYQMptxl [(1104 - 804)];
    char Yp2mqT7DQLr [(844 - 544)];
    int ai;
    int FCkGEfIZr;
    int BNQOhdCtka;
    int DYolNu1sF;
    int vGAlOuY;
    cin >> zT19WnqMe0cs;
    ai = strlen (zT19WnqMe0cs) - (995 - 994);
    BNQOhdCtka = (971 - 672);
    DYolNu1sF = (865 - 865);
    memset (Yp2mqT7DQLr, (622 - 622), sizeof (char) * (386 - 86));
    cin >> aYQMptxl;
    FCkGEfIZr = strlen (aYQMptxl) - (444 - 443);
    for (; (909 - 909) <= ai && (736 - 736) <= FCkGEfIZr;) {
        Yp2mqT7DQLr[BNQOhdCtka] = (DYolNu1sF +zT19WnqMe0cs[ai] + aYQMptxl[FCkGEfIZr] - (854 - 852) * '0') % (419 - 409) + '0';
        BNQOhdCtka--;
        DYolNu1sF = (DYolNu1sF +zT19WnqMe0cs[ai] + aYQMptxl[FCkGEfIZr] - (800 - 798) * '0') / (398 - 388);
        ai--;
        FCkGEfIZr--;
    }
    for (; ai >= (309 - 309);) {
        Yp2mqT7DQLr[BNQOhdCtka] = (DYolNu1sF +zT19WnqMe0cs[ai] - '0') % (231 - 221) + '0';
        DYolNu1sF = (DYolNu1sF +zT19WnqMe0cs[ai] - '0') / (255 - 245);
        ai--;
        BNQOhdCtka--;
    }
    while (FCkGEfIZr >= (830 - 830)) {
        Yp2mqT7DQLr[BNQOhdCtka] = (DYolNu1sF +aYQMptxl[FCkGEfIZr] - '0') % (76 - 66) + '0';
        DYolNu1sF = (DYolNu1sF +aYQMptxl[FCkGEfIZr] - '0') / (829 - 819);
        BNQOhdCtka--;
        FCkGEfIZr--;
    }
    for (; BNQOhdCtka >= (53 - 53);) {
        DYolNu1sF = (807 - 807);
        Yp2mqT7DQLr[BNQOhdCtka] = DYolNu1sF +'0';
        BNQOhdCtka--;
    }
    for (vGAlOuY = (942 - 942); vGAlOuY < (1269 - 969); vGAlOuY++) {
        if (Yp2mqT7DQLr[vGAlOuY] > '0')
            break;
    }
    if (vGAlOuY == (1105 - 805))
        cout << (827 - 827) << endl;
    else {
        for (vGAlOuY;
        vGAlOuY < (920 - 620); vGAlOuY++)
            cout << Yp2mqT7DQLr[vGAlOuY];
        cout << endl;
    }
    return (971 - 971);
}

