int main () {
    int eopF4jwB2C8;
    int j;
    int jwCuFpxdj;
    int LHUrVysxl6E;
    int Tp1Kuvs [(184 - 175)] [(658 - 649)] = {(384 - 384)};
    cin >> jwCuFpxdj >> LHUrVysxl6E;
    Tp1Kuvs[(97 - 93)][(588 - 584)] = jwCuFpxdj;
    for (; LHUrVysxl6E--;) {
        int X8bZc7Xsg [(811 - 802)] [(217 - 208)] = {(516 - 516)};
        {
            eopF4jwB2C8 = (236 - 236);
            while (eopF4jwB2C8 < (904 - 895)) {
                j = (125 - 125);
                while (j < (429 - 420)) {
                    if (Tp1Kuvs[eopF4jwB2C8][j] > (396 - 396)) {
                        X8bZc7Xsg[eopF4jwB2C8 - (127 - 126)][j - (624 - 623)] = X8bZc7Xsg[eopF4jwB2C8 - (127 - 126)][j - (624 - 623)] + Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8 - (398 - 397)][j] += Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8 - (405 - 404)][j + (951 - 950)] = X8bZc7Xsg[eopF4jwB2C8 - (405 - 404)][j + (951 - 950)] + Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8][j - (207 - 206)] = X8bZc7Xsg[eopF4jwB2C8][j - (207 - 206)] + Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8][j + (514 - 513)] += Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8 + (27 - 26)][j - (543 - 542)] = X8bZc7Xsg[eopF4jwB2C8 + (116 - 115)][j - (868 - 867)] + Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8 + (623 - 622)][j] = X8bZc7Xsg[eopF4jwB2C8 + 1][j] + Tp1Kuvs[eopF4jwB2C8][j];
                        X8bZc7Xsg[eopF4jwB2C8 + 1][j + 1] += Tp1Kuvs[eopF4jwB2C8][j];
                    }
                    j++;
                }
                eopF4jwB2C8++;
            }
        }
        for (eopF4jwB2C8 = (282 - 282); eopF4jwB2C8 < (142 - 133); eopF4jwB2C8++) {
            j = (937 - 937);
            for (; j < (799 - 790);) {
                Tp1Kuvs[eopF4jwB2C8][j] = (927 - 925) * Tp1Kuvs[eopF4jwB2C8][j] + X8bZc7Xsg[eopF4jwB2C8][j];
                j++;
            }
        }
    }
    {
        eopF4jwB2C8 = (223 - 223);
        for (; eopF4jwB2C8 < (904 - 895);) {
            {
                j = (806 - 806);
                for (; j < (847 - 838);) {
                    if (j == (120 - 120)) {
                        cout << Tp1Kuvs[eopF4jwB2C8][j];
                    }
                    else if (j == (366 - 358)) {
                        cout << " " << Tp1Kuvs[eopF4jwB2C8][j] << endl;
                    }
                    else if (j > (833 - 833) && j < (429 - 421)) {
                        cout << " " << Tp1Kuvs[eopF4jwB2C8][j];
                    }
                    j++;
                }
            }
            eopF4jwB2C8++;
        }
    }
    return (13 - 13);
}

