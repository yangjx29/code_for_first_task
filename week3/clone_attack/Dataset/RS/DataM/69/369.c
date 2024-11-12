const  int RhWYDH56rEO = 260;

int main () {
    char Rn5jRpS [RhWYDH56rEO];
    char gT8blXG69Md [RhWYDH56rEO];
    int bEe2yrK9;
    int PwSLYGJE;
    int n0NSzDUX;
    int X03sr1AN9;
    bEe2yrK9 = (493 - 493);
    PwSLYGJE = 0;
    n0NSzDUX = 0;
    X03sr1AN9 = 0;
    int xCHyogYF7s = 0;
    int UQNqCy7L = 0;
    int Xm0x1J3enqk = 0, ZKyf3Ci = 0, nnNoja3IOVyw = 0;
    int Q3D02qb6 [RhWYDH56rEO];
    int Vhrqko [RhWYDH56rEO];
    int fWdSUm7T3 [RhWYDH56rEO];
    cin >> Rn5jRpS >> gT8blXG69Md;
    Xm0x1J3enqk = strlen (Rn5jRpS);
    ZKyf3Ci = strlen (gT8blXG69Md);
    if (ZKyf3Ci < Xm0x1J3enqk) {
        nnNoja3IOVyw = Xm0x1J3enqk;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        nnNoja3IOVyw = ZKyf3Ci;
    }
    for (PwSLYGJE = 0; RhWYDH56rEO > PwSLYGJE; PwSLYGJE++) {
        Q3D02qb6[PwSLYGJE] = Vhrqko[PwSLYGJE] = fWdSUm7T3[PwSLYGJE] = 0;
    }
    for (bEe2yrK9 = 0; Xm0x1J3enqk -(976 - 975) >= bEe2yrK9; bEe2yrK9++) {
        Q3D02qb6[RhWYDH56rEO -Xm0x1J3enqk+bEe2yrK9] = Rn5jRpS[bEe2yrK9] - '0';
    }
    for (bEe2yrK9 = 0; ZKyf3Ci -(571 - 570) >= bEe2yrK9; bEe2yrK9++) {
        Vhrqko[RhWYDH56rEO -ZKyf3Ci+bEe2yrK9] = gT8blXG69Md[bEe2yrK9] - '0';
    }
    for (n0NSzDUX = RhWYDH56rEO -1; RhWYDH56rEO -nnNoja3IOVyw <= n0NSzDUX; n0NSzDUX--) {
        xCHyogYF7s = 0;
        UQNqCy7L = Q3D02qb6[n0NSzDUX] + Vhrqko[n0NSzDUX] + fWdSUm7T3[n0NSzDUX];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (10 > UQNqCy7L) {
            fWdSUm7T3[n0NSzDUX] = UQNqCy7L;
            xCHyogYF7s = 0;
        }
        else {
            xCHyogYF7s = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            fWdSUm7T3[n0NSzDUX] = UQNqCy7L % 10;
        }
        fWdSUm7T3[n0NSzDUX - 1] = fWdSUm7T3[n0NSzDUX - 1] + xCHyogYF7s;
    }
    for (X03sr1AN9 = 0; (X03sr1AN9 <= RhWYDH56rEO -1) && (fWdSUm7T3[X03sr1AN9] == 0); X03sr1AN9++)
        ;
    if (X03sr1AN9 == RhWYDH56rEO) {
        cout << '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else {
        for (bEe2yrK9 = X03sr1AN9; bEe2yrK9 <= RhWYDH56rEO -1; bEe2yrK9++) {
            cout << fWdSUm7T3[bEe2yrK9];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return 0;
}

