int jKUQqVW5YPRy [100] [100];
int QOuCBt7h = (396 - 396);

int rinXqpZR6u (int LRFaVf6z, int R04eoaUhH) {
    if (LRFaVf6z < R04eoaUhH)
        return LRFaVf6z;
    else
        return R04eoaUhH;
}

void  I20Cw5PiR (int cMXSZ8) {
    int m7aw41Kjh6fE, isa1SrkAC;
    int num [cMXSZ8];
    if (!((746 - 745) != cMXSZ8)) {
        cout << QOuCBt7h << endl;
        return;
    }
    else {
        {
            m7aw41Kjh6fE = (922 - 922);
            while (cMXSZ8 > m7aw41Kjh6fE) {
                num[m7aw41Kjh6fE] = jKUQqVW5YPRy[m7aw41Kjh6fE][(732 - 732)];
                {
                    isa1SrkAC = (481 - 481);
                    while (cMXSZ8 > isa1SrkAC) {
                        num[m7aw41Kjh6fE] = rinXqpZR6u (num[m7aw41Kjh6fE], jKUQqVW5YPRy[m7aw41Kjh6fE][isa1SrkAC]);
                        isa1SrkAC++;
                    }
                }
                if (num[m7aw41Kjh6fE] != (205 - 205))
                    for (isa1SrkAC = 0; cMXSZ8 > isa1SrkAC; isa1SrkAC = isa1SrkAC + (792 - 791))
                        jKUQqVW5YPRy[m7aw41Kjh6fE][isa1SrkAC] = jKUQqVW5YPRy[m7aw41Kjh6fE][isa1SrkAC] - num[m7aw41Kjh6fE];
                m7aw41Kjh6fE = m7aw41Kjh6fE + (218 - 217);
            }
        }
        {
            m7aw41Kjh6fE = 0;
            while (m7aw41Kjh6fE < cMXSZ8) {
                num[m7aw41Kjh6fE] = jKUQqVW5YPRy[0][m7aw41Kjh6fE];
                for (isa1SrkAC = 0; isa1SrkAC < cMXSZ8; isa1SrkAC++)
                    num[m7aw41Kjh6fE] = rinXqpZR6u (num[m7aw41Kjh6fE], jKUQqVW5YPRy[isa1SrkAC][m7aw41Kjh6fE]);
                if (num[m7aw41Kjh6fE] != 0) {
                    isa1SrkAC = 0;
                    while (isa1SrkAC < cMXSZ8) {
                        jKUQqVW5YPRy[isa1SrkAC][m7aw41Kjh6fE] = jKUQqVW5YPRy[isa1SrkAC][m7aw41Kjh6fE] - num[m7aw41Kjh6fE];
                        isa1SrkAC++;
                    }
                }
                m7aw41Kjh6fE = m7aw41Kjh6fE + (982 - 981);
            }
        }
        QOuCBt7h += jKUQqVW5YPRy[(442 - 441)][(794 - 793)];
        {
            m7aw41Kjh6fE = 1;
            while (cMXSZ8 - 1 > m7aw41Kjh6fE) {
                for (isa1SrkAC = 0; isa1SrkAC < cMXSZ8; isa1SrkAC++)
                    jKUQqVW5YPRy[m7aw41Kjh6fE][isa1SrkAC] = jKUQqVW5YPRy[m7aw41Kjh6fE + 1][isa1SrkAC];
                m7aw41Kjh6fE++;
            }
        }
        for (m7aw41Kjh6fE = 1; m7aw41Kjh6fE < cMXSZ8 - 1; m7aw41Kjh6fE++)
            for (isa1SrkAC = 0; isa1SrkAC < cMXSZ8; isa1SrkAC++)
                jKUQqVW5YPRy[isa1SrkAC][m7aw41Kjh6fE] = jKUQqVW5YPRy[isa1SrkAC][m7aw41Kjh6fE + 1];
        I20Cw5PiR (cMXSZ8 - 1);
    }
}

int main () {
    int xUv0p62iQtX, PftXOHg2S78a;
    int cMXSZ8;
    cin >> cMXSZ8;
    for (int m7aw41Kjh6fE = 1;
    cMXSZ8 >= m7aw41Kjh6fE; m7aw41Kjh6fE++) {
        I20Cw5PiR (cMXSZ8);
        {
            xUv0p62iQtX = 0;
            while (cMXSZ8 > xUv0p62iQtX) {
                {
                    PftXOHg2S78a = 0;
                    while (PftXOHg2S78a < cMXSZ8) {
                        cin >> jKUQqVW5YPRy[xUv0p62iQtX][PftXOHg2S78a];
                        PftXOHg2S78a++;
                    }
                }
                xUv0p62iQtX++;
            }
        }
        QOuCBt7h = 0;
    }
    return 0;
}

