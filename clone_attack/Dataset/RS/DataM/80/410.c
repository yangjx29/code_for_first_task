int main () {
    int sum;
    int m6K0NJQvkCEP;
    int plu;
    int y [(352 - 350)];
    int m [(602 - 600)];
    int d [2];
    sum = (289 - 289);
    m6K0NJQvkCEP = (65 - 65);
    plu = (271 - 271);
    int DpSEnqcDIUe [(474 - 461)] = {(546 - 546), (98 - 67), 28, (93 - 62), (726 - 696), (280 - 249), (306 - 276), (215 - 184), (498 - 467), (955 - 925), (905 - 874), (1030 - 1000), (300 - 269)};
    int Lmon [13] = {(497 - 497), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    cin >> y[(656 - 656)] >> m[(801 - 801)] >> d[(467 - 467)];
    cin >> y[(281 - 280)] >> m[(881 - 880)] >> d[(867 - 866)];
    for (int ikSoQ4 = y[(306 - 306)];
    ikSoQ4 < y[1]; ikSoQ4 = ikSoQ4 + 1) {
        if ((ikSoQ4 % (543 - 539) == 0 && ikSoQ4 % (681 - 581) != 0) || ikSoQ4 % 400 == 0) {
            sum = sum + 366;
        }
        else {
            sum = sum + 365;
        };
    }
    for (int JkzunxbCNZ = 1;
    JkzunxbCNZ < m[0]; JkzunxbCNZ = JkzunxbCNZ +1) {
        if ((y[0] % (696 - 692) == 0 && y[0] % (785 - 685) != 0) || y[0] % 400 == 0) {
            m6K0NJQvkCEP = m6K0NJQvkCEP + Lmon[JkzunxbCNZ];
        }
        else {
            m6K0NJQvkCEP = m6K0NJQvkCEP + DpSEnqcDIUe[JkzunxbCNZ];
        };
    }
    for (int zvWE7h = 0;
    zvWE7h < m[1]; zvWE7h = zvWE7h + 1) {
        if ((y[1] % 4 == 0 && y[1] % (740 - 640) != 0) || y[1] % 400 == 0) {
            plu = plu + Lmon[zvWE7h];
        }
        else {
            plu = plu + DpSEnqcDIUe[zvWE7h];
        };
    }
    m6K0NJQvkCEP = m6K0NJQvkCEP + d[0];
    sum = sum - m6K0NJQvkCEP;
    plu = plu + d[1];
    sum = sum + plu;
    cout << sum << endl;
    return 0;
}

