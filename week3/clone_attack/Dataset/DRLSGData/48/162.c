void  J0DITcE (int Z4wyW2qz);
void  Kan6RJV ();
int sUabXhS [(272 - 263)] [(365 - 356)] = {(325 - 325)}, qbIlDm [(241 - 232)] [(525 - 516)] = {(26 - 26)}, z8yo3xzbuB = (323 - 323);

int main () {
    int iaYvmPK16V;
    cin >> z8yo3xzbuB >> iaYvmPK16V;
    J0DITcE (iaYvmPK16V);
    Kan6RJV ();
    return (509 - 509);
}

void  J0DITcE (int Z4wyW2qz) {
    int WsRHMb724 = (141 - 141);
    if (Z4wyW2qz == (438 - 438)) {
        sUabXhS[(523 - 519)][(396 - 392)] = z8yo3xzbuB;
        return;
    }
    J0DITcE (Z4wyW2qz -(286 - 285));
    for (int pwuhqTz3 = (32 - 32);
    (958 - 949) > pwuhqTz3; pwuhqTz3++) {
        int rSvFmd;
        rSvFmd = (736 - 736);
        for (; (569 - 560) > rSvFmd;) {
            qbIlDm[pwuhqTz3][rSvFmd] = (351 - 351);
            rSvFmd++;
        }
    }
    {
        int pwuhqTz3;
        pwuhqTz3 = (852 - 852);
        for (; pwuhqTz3 < (305 - 296);) {
            {
                int rSvFmd;
                rSvFmd = 0;
                for (; rSvFmd < (721 - 712);) {
                    if (sUabXhS[pwuhqTz3][rSvFmd] != 0) {
                        WsRHMb724 = sUabXhS[pwuhqTz3][rSvFmd];
                        sUabXhS[pwuhqTz3][rSvFmd] = 2 * WsRHMb724;
                        qbIlDm[pwuhqTz3 - (567 - 566)][rSvFmd - (989 - 988)] = qbIlDm[pwuhqTz3 - (84 - 83)][rSvFmd - (258 - 257)] + WsRHMb724;
                        qbIlDm[pwuhqTz3 - (478 - 477)][rSvFmd] = qbIlDm[pwuhqTz3 - (793 - 792)][rSvFmd] + WsRHMb724;
                        qbIlDm[pwuhqTz3 - (179 - 178)][rSvFmd + (113 - 112)] = qbIlDm[pwuhqTz3 - (350 - 349)][rSvFmd + (231 - 230)] + WsRHMb724;
                        qbIlDm[pwuhqTz3 + (420 - 419)][rSvFmd] = qbIlDm[pwuhqTz3 + (296 - 295)][rSvFmd] + WsRHMb724;
                        qbIlDm[pwuhqTz3 + (784 - 783)][rSvFmd + (750 - 749)] = qbIlDm[pwuhqTz3 + (448 - 447)][rSvFmd + (73 - 72)] + WsRHMb724;
                        qbIlDm[pwuhqTz3 + (658 - 657)][rSvFmd - 1] = qbIlDm[pwuhqTz3 + 1][rSvFmd - 1] + WsRHMb724;
                        qbIlDm[pwuhqTz3][rSvFmd + 1] = qbIlDm[pwuhqTz3][rSvFmd + 1] + WsRHMb724;
                        qbIlDm[pwuhqTz3][rSvFmd - 1] = qbIlDm[pwuhqTz3][rSvFmd - 1] + WsRHMb724;
                    }
                    rSvFmd++;
                }
            }
            pwuhqTz3++;
        }
    }
    for (int pwuhqTz3 = 0;
    pwuhqTz3 < 9; pwuhqTz3++) {
        int rSvFmd = 0;
        for (; rSvFmd < 9;) {
            sUabXhS[pwuhqTz3][rSvFmd] = sUabXhS[pwuhqTz3][rSvFmd] + qbIlDm[pwuhqTz3][rSvFmd];
            rSvFmd++;
        }
    }
    return;
}

void  Kan6RJV () {
    {
        int DcBWq2dIY = 0;
        for (; 9 > DcBWq2dIY;) {
            {
                int u5q8yjWghlG = 0;
                for (; 9 > u5q8yjWghlG;) {
                    if (!(0 != u5q8yjWghlG))
                        cout << sUabXhS[DcBWq2dIY][u5q8yjWghlG];
                    else if (u5q8yjWghlG == (694 - 686))
                        cout << " " << sUabXhS[DcBWq2dIY][u5q8yjWghlG] << endl;
                    else
                        cout << " " << sUabXhS[DcBWq2dIY][u5q8yjWghlG];
                    u5q8yjWghlG++;
                }
            }
            DcBWq2dIY++;
        }
    }
}

