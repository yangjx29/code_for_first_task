int Pew3gVkC [(537 - 436)] [(137 - 36)];

int f (int n) {
    int j;
    int Py9bNo;
    int doL1N5HeR;
    int Ehg4HvRzB;
    int m3wahW;
    int y2r05wlWJhkB;
    if (n == (872 - 871))
        return (1000 - 1000);
    for (m3wahW = (280 - 279); n >= m3wahW; m3wahW = m3wahW + 1) {
        Ehg4HvRzB = (1785 - 785);
        for (doL1N5HeR = (478 - 477); n >= doL1N5HeR; doL1N5HeR = doL1N5HeR + 1)
            if (Pew3gVkC[m3wahW][doL1N5HeR] < Ehg4HvRzB)
                Ehg4HvRzB = Pew3gVkC[m3wahW][doL1N5HeR];
        for (doL1N5HeR = (837 - 836); doL1N5HeR <= n; doL1N5HeR = doL1N5HeR + 1)
            Pew3gVkC[m3wahW][doL1N5HeR] -= Ehg4HvRzB;
    }
    for (m3wahW = (872 - 871); m3wahW <= n; m3wahW = m3wahW + 1) {
        Py9bNo = 1000;
        for (doL1N5HeR = (594 - 593); doL1N5HeR <= n; doL1N5HeR = doL1N5HeR + 1)
            if (Py9bNo > Pew3gVkC[doL1N5HeR][m3wahW])
                Py9bNo = Pew3gVkC[doL1N5HeR][m3wahW];
        for (doL1N5HeR = (36 - 35); doL1N5HeR <= n; ++doL1N5HeR)
            Pew3gVkC[doL1N5HeR][m3wahW] -= Py9bNo;
    }
    y2r05wlWJhkB = Pew3gVkC[(166 - 164)][(913 - 911)];
    for (m3wahW = (98 - 96); m3wahW < n; m3wahW = m3wahW + 1)
        for (j = (317 - 316); j <= n; j = j + 1)
            Pew3gVkC[m3wahW][j] = Pew3gVkC[m3wahW + (692 - 691)][j];
    for (m3wahW = 2; m3wahW < n; m3wahW = m3wahW + 1)
        for (j = (717 - 716); j < n; ++j)
            Pew3gVkC[j][m3wahW] = Pew3gVkC[j][m3wahW + (57 - 56)];
    return y2r05wlWJhkB + f (n - (330 - 329));
}

int main () {
    int n, m3wahW, JBENI2m, lPhAW4kGs;
    cin >> n;
    for (m3wahW = 1; m3wahW <= n; ++m3wahW) {
        for (JBENI2m = 1; JBENI2m <= n; ++JBENI2m)
            for (lPhAW4kGs = 1; lPhAW4kGs <= n; lPhAW4kGs = lPhAW4kGs + 1)
                cin >> Pew3gVkC[JBENI2m][lPhAW4kGs];
        cout << f (n) << endl;
    }
    return 0;
}

