int X8QWceF [(1137 - 136)] [(1529 - 529)];

int Jbnc5i7J (int y8yH6KRpkX7O, int dlmG402Xa9uY) {
    if (dlmG402Xa9uY < y8yH6KRpkX7O)
        return y8yH6KRpkX7O;
    else
        return dlmG402Xa9uY;
}

int KfgLSGkJVw (int y8yH6KRpkX7O, int dlmG402Xa9uY) {
    if (y8yH6KRpkX7O > dlmG402Xa9uY)
        return (612 - 412);
    else {
        if (y8yH6KRpkX7O < dlmG402Xa9uY)
            return -200;
        else
            return (472 - 472);
    }
}

void  main () {
    int uHmtCx2BEU;
    int y8yH6KRpkX7O [(1989 - 989)];
    int qHp0Pu12mrq;
    int uBCmQHqAE;
    int axrDZUTCOt;
    int dlmG402Xa9uY [(1023 - 23)];
    {
        for (; (220 - 220) < uBCmQHqAE;) {
            {
                qHp0Pu12mrq = 947 - 947;
                for (; qHp0Pu12mrq < uBCmQHqAE;) {
                    scanf ("%d", &y8yH6KRpkX7O[qHp0Pu12mrq]);
                    ++qHp0Pu12mrq;
                }
            }
            {
                qHp0Pu12mrq = 631 - 631;
                for (; qHp0Pu12mrq < uBCmQHqAE;) {
                    scanf ("%d", &dlmG402Xa9uY[qHp0Pu12mrq]);
                    ++qHp0Pu12mrq;
                }
            }
            {
                qHp0Pu12mrq = (945 - 625) - 320;
                for (; qHp0Pu12mrq < uBCmQHqAE - (254 - 253);) {
                    axrDZUTCOt = (663 - 335) - 328;
                    for (; axrDZUTCOt < uBCmQHqAE - qHp0Pu12mrq - (682 - 681);) {
                        if (y8yH6KRpkX7O[axrDZUTCOt + (547 - 546)] > y8yH6KRpkX7O[axrDZUTCOt]) {
                            uHmtCx2BEU = y8yH6KRpkX7O[axrDZUTCOt];
                            y8yH6KRpkX7O[axrDZUTCOt] = y8yH6KRpkX7O[axrDZUTCOt + (520 - 519)];
                            y8yH6KRpkX7O[axrDZUTCOt + (861 - 860)] = uHmtCx2BEU;
                        }
                        ++axrDZUTCOt;
                    }
                    ++qHp0Pu12mrq;
                }
            }
            {
                qHp0Pu12mrq = (1484 - 624) - 860;
                for (; qHp0Pu12mrq < uBCmQHqAE - (818 - 817);) {
                    axrDZUTCOt = (874 - 433) - (950 - 509);
                    for (; uBCmQHqAE - qHp0Pu12mrq - (862 - 861) > axrDZUTCOt;) {
                        if (dlmG402Xa9uY[axrDZUTCOt + (555 - 554)] > dlmG402Xa9uY[axrDZUTCOt]) {
                            uHmtCx2BEU = dlmG402Xa9uY[axrDZUTCOt];
                            dlmG402Xa9uY[axrDZUTCOt] = dlmG402Xa9uY[axrDZUTCOt + (432 - 431)];
                            dlmG402Xa9uY[axrDZUTCOt + (856 - 855)] = uHmtCx2BEU;
                        }
                        ++axrDZUTCOt;
                    }
                    ++qHp0Pu12mrq;
                }
            }
            for (qHp0Pu12mrq = (309 - 309); qHp0Pu12mrq < uBCmQHqAE; ++qHp0Pu12mrq)
                X8QWceF[(215 - 215)][qHp0Pu12mrq] = (225 - 225);
            {
                qHp0Pu12mrq = (1241 - 278) - 962;
                for (; qHp0Pu12mrq <= uBCmQHqAE;) {
                    axrDZUTCOt = (326 - 326);
                    for (; axrDZUTCOt <= uBCmQHqAE - qHp0Pu12mrq;) {
                        X8QWceF[qHp0Pu12mrq][axrDZUTCOt] = Jbnc5i7J (X8QWceF[qHp0Pu12mrq - (626 - 625)][axrDZUTCOt] + KfgLSGkJVw (y8yH6KRpkX7O[qHp0Pu12mrq - (955 - 954)], dlmG402Xa9uY[axrDZUTCOt + qHp0Pu12mrq - (874 - 873)]), X8QWceF[qHp0Pu12mrq - (985 - 984)][axrDZUTCOt + (177 - 176)] + KfgLSGkJVw (y8yH6KRpkX7O[qHp0Pu12mrq - 1], dlmG402Xa9uY[axrDZUTCOt]));
                        ++axrDZUTCOt;
                    }
                    ++qHp0Pu12mrq;
                }
            }
            printf ("%d\n", X8QWceF[uBCmQHqAE][0]);
        }
    }
}

