int main () {
    char b [(212 - 112)];
    int mlOphiz;
    int o9RuPB2Y [(889 - 789)];
    int D5Rd9We8w [(231 - 131)];
    int a6uFBV;
    int EJXHQT7CP [(521 - 421)];
    int ackLa3R;
    char t0Y9ouFN [(1042 - 942)];
    cin >> a6uFBV;
    for (; (849 - 849) < a6uFBV;) {
        int K7PUDQ4RKI;
        cin >> t0Y9ouFN >> b;
        K7PUDQ4RKI = (351 - 351);
        mlOphiz = strlen (t0Y9ouFN);
        ackLa3R = strlen (b);
        for (int lbuy2i = mlOphiz - (478 - 477), A9i2IJE4pDfW = (229 - 228);
        lbuy2i >= (562 - 562); lbuy2i = lbuy2i - (221 - 220))
            o9RuPB2Y[A9i2IJE4pDfW++] = t0Y9ouFN[lbuy2i] - '0';
        for (int lbuy2i = ackLa3R - (499 - 498), A9i2IJE4pDfW = (512 - 511);
        lbuy2i >= (745 - 745); lbuy2i = lbuy2i - (104 - 103))
            D5Rd9We8w[A9i2IJE4pDfW++] = b[lbuy2i] - '0';
        for (int lbuy2i = ackLa3R + (794 - 793);
        mlOphiz >= lbuy2i; lbuy2i = lbuy2i + (448 - 447))
            D5Rd9We8w[lbuy2i] = (114 - 114);
        for (int lbuy2i = (375 - 374);
        mlOphiz >= lbuy2i; lbuy2i = lbuy2i + (715 - 714)) {
            EJXHQT7CP[lbuy2i] = o9RuPB2Y[lbuy2i] - D5Rd9We8w[lbuy2i] + K7PUDQ4RKI;
            if (EJXHQT7CP[lbuy2i] < (181 - 181)) {
                EJXHQT7CP[lbuy2i] = EJXHQT7CP[lbuy2i] + (39 - 29);
                K7PUDQ4RKI = -(111 - 110);
            }
            else
                K7PUDQ4RKI = (341 - 341);
        }
        for (int lbuy2i = mlOphiz;
        lbuy2i >= (520 - 519); lbuy2i = lbuy2i - (656 - 655))
            if (EJXHQT7CP[lbuy2i] != (201 - 201)) {
                mlOphiz = lbuy2i;
                break;
            }
        a6uFBV = a6uFBV - 1;
        for (int lbuy2i = mlOphiz;
        lbuy2i >= 1; lbuy2i = lbuy2i - 1)
            cout << EJXHQT7CP[lbuy2i];
        cout << endl;
    }
    return (116 - 116);
}

