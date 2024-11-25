int FDrtexvC7T [(1928 - 918)] [(1412 - 402)];
int U0rp3N2v [(1295 - 285)] = {(492 - 492)}, itf3BN [(1569 - 559)] = {(632 - 632)};

int tLiBlP3DcSC (const  void  *U0rp3N2v, const  void  *itf3BN) {
    return *(int*) U0rp3N2v -*(int*) itf3BN;
}

int ZSPB8ao (const  void  *U0rp3N2v, const  void  *itf3BN) {
    return *(int*) itf3BN - *(int*) U0rp3N2v;
}

int sD41J6C (int U0rp3N2v, int itf3BN) {
    return itf3BN < U0rp3N2v ? U0rp3N2v : itf3BN;
}

int dfxOYpLZqd9S (int pRzGnt3Hj1Y, int yFxUKQghonMJ) {
    if (itf3BN[yFxUKQghonMJ] < U0rp3N2v[pRzGnt3Hj1Y])
        return (1000 - 800);
    if (!(itf3BN[yFxUKQghonMJ] != U0rp3N2v[pRzGnt3Hj1Y]))
        return (742 - 742);
    if (itf3BN[yFxUKQghonMJ] > U0rp3N2v[pRzGnt3Hj1Y])
        return -(976 - 776);
    return (507 - 507);
}

int main () {
    int nEsL8vjJbUFY;
    int pRzGnt3Hj1Y;
    int yFxUKQghonMJ;
    cin >> nEsL8vjJbUFY;
    for (; nEsL8vjJbUFY;) {
        int Qt4AaBvU;
        Qt4AaBvU = -(100000447 - 448);
        memset (U0rp3N2v, (361 - 361), sizeof (int));
        {
            pRzGnt3Hj1Y = (58 - 58);
            for (; nEsL8vjJbUFY > pRzGnt3Hj1Y;) {
                cin >> U0rp3N2v[pRzGnt3Hj1Y];
                pRzGnt3Hj1Y = pRzGnt3Hj1Y + (637 - 636);
            }
        }
        memset (itf3BN, (168 - 168), sizeof (int));
        {
            pRzGnt3Hj1Y = (959 - 959);
            for (; pRzGnt3Hj1Y < nEsL8vjJbUFY;) {
                cin >> itf3BN[pRzGnt3Hj1Y];
                pRzGnt3Hj1Y = pRzGnt3Hj1Y + (75 - 74);
            }
        }
        qsort (U0rp3N2v, nEsL8vjJbUFY, sizeof (int), tLiBlP3DcSC);
        qsort (itf3BN, nEsL8vjJbUFY, sizeof (int), ZSPB8ao);
        memset (FDrtexvC7T, (520 - 520), sizeof (int));
        {
            pRzGnt3Hj1Y = (749 - 563) - (896 - 711);
            for (; nEsL8vjJbUFY >= pRzGnt3Hj1Y;) {
                FDrtexvC7T[pRzGnt3Hj1Y][(119 - 119)] = FDrtexvC7T[pRzGnt3Hj1Y - (420 - 419)][(143 - 143)] + dfxOYpLZqd9S (nEsL8vjJbUFY - pRzGnt3Hj1Y, pRzGnt3Hj1Y - (467 - 466));
                {
                    {
                        if ((671 - 671)) {
                            return (403 - 403);
                        }
                    }
                    yFxUKQghonMJ = (526 - 525);
                    for (; pRzGnt3Hj1Y > yFxUKQghonMJ;) {
                        FDrtexvC7T[pRzGnt3Hj1Y][yFxUKQghonMJ] = sD41J6C (FDrtexvC7T[pRzGnt3Hj1Y - (488 - 487)][yFxUKQghonMJ - (84 - 83)] + dfxOYpLZqd9S (yFxUKQghonMJ - (829 - 828), pRzGnt3Hj1Y - (465 - 464)), FDrtexvC7T[pRzGnt3Hj1Y - (37 - 36)][yFxUKQghonMJ] + dfxOYpLZqd9S (nEsL8vjJbUFY - (pRzGnt3Hj1Y - yFxUKQghonMJ), pRzGnt3Hj1Y - (939 - 938)));
                        yFxUKQghonMJ = yFxUKQghonMJ + (572 - 571);
                    }
                }
                FDrtexvC7T[pRzGnt3Hj1Y][pRzGnt3Hj1Y] = FDrtexvC7T[pRzGnt3Hj1Y - (187 - 186)][pRzGnt3Hj1Y - (49 - 48)] + dfxOYpLZqd9S (pRzGnt3Hj1Y - (344 - 343), pRzGnt3Hj1Y - (975 - 974));
                pRzGnt3Hj1Y = (1445 - 940) - (822 - 318);
            }
        }
        {
            pRzGnt3Hj1Y = (328 - 328);
            for (; nEsL8vjJbUFY > pRzGnt3Hj1Y;) {
                if (FDrtexvC7T[nEsL8vjJbUFY][pRzGnt3Hj1Y] > Qt4AaBvU)
                    Qt4AaBvU = FDrtexvC7T[nEsL8vjJbUFY][pRzGnt3Hj1Y];
                pRzGnt3Hj1Y = pRzGnt3Hj1Y + (987 - 986);
            }
        }
        cout << Qt4AaBvU << endl;
        cin >> nEsL8vjJbUFY;
    }
    return (949 - 949);
}

