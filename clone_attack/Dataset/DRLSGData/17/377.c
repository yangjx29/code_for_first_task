main () {
    int JLbPE1VBX;
    int aJE24wv5yOu [(525 - 505)];
    int fWiUGFn8;
    int KgMj8Rs0x;
    char A4j8AitVDb [(287 - 237)] [(381 - 280)] = {' '};
    int w9igvXB4;
    int oRdgrL2;
    char rCyeo9 [(363 - 343)] [(776 - 675)];
    scanf ("%d", &oRdgrL2);
    {
        JLbPE1VBX = (1232 - 326) - (1536 - 631);
        for (; JLbPE1VBX <= oRdgrL2;) {
            scanf ("%s", rCyeo9[JLbPE1VBX]);
            aJE24wv5yOu[JLbPE1VBX] = strlen (rCyeo9[JLbPE1VBX]);
            JLbPE1VBX = (1354 - 657) - (1655 - 959);
        }
    }
    {
        fWiUGFn8 = (1131 - 221) - (1719 - 810);
        for (; oRdgrL2 >= fWiUGFn8;) {
            {
                JLbPE1VBX = (1342 - 952) - (494 - 104);
                for (; JLbPE1VBX < aJE24wv5yOu[fWiUGFn8];) {
                    if (!('(' != rCyeo9[fWiUGFn8][JLbPE1VBX]))
                        A4j8AitVDb[fWiUGFn8][JLbPE1VBX] = '$';
                    else {
                        if (!(')' != rCyeo9[fWiUGFn8][JLbPE1VBX]))
                            A4j8AitVDb[fWiUGFn8][JLbPE1VBX] = '?';
                        else
                            A4j8AitVDb[fWiUGFn8][JLbPE1VBX] = ' ';
                    }
                    JLbPE1VBX = JLbPE1VBX +(502 - 501);
                }
            }
            {
                JLbPE1VBX = (654 - 654);
                for (; JLbPE1VBX < aJE24wv5yOu[fWiUGFn8] - (133 - 132);) {
                    if (!('$' != A4j8AitVDb[fWiUGFn8][JLbPE1VBX])) {
                        w9igvXB4 = JLbPE1VBX +(902 - 901);
                        for (; w9igvXB4 < aJE24wv5yOu[fWiUGFn8];) {
                            if (!('?' != A4j8AitVDb[fWiUGFn8][w9igvXB4])) {
                                KgMj8Rs0x = w9igvXB4 - (630 - 629);
                                for (; JLbPE1VBX <= KgMj8Rs0x;) {
                                    if (!('$' != A4j8AitVDb[fWiUGFn8][KgMj8Rs0x])) {
                                        A4j8AitVDb[fWiUGFn8][KgMj8Rs0x] = ' ';
                                        A4j8AitVDb[fWiUGFn8][w9igvXB4] = ' ';
                                        break;
                                    }
                                    KgMj8Rs0x = KgMj8Rs0x -(769 - 768);
                                }
                            }
                            w9igvXB4 = w9igvXB4 + (371 - 370);
                        }
                    }
                    JLbPE1VBX = JLbPE1VBX +(634 - 633);
                }
            }
            {
                JLbPE1VBX = (549 - 499) - (176 - 126);
                for (; aJE24wv5yOu[fWiUGFn8] > JLbPE1VBX;) {
                    printf ("%c", rCyeo9[fWiUGFn8][JLbPE1VBX]);
                    JLbPE1VBX = JLbPE1VBX +(899 - 898);
                }
            }
            {
                JLbPE1VBX = (405 - 405);
                for (; JLbPE1VBX < aJE24wv5yOu[fWiUGFn8];) {
                    printf ("%c", A4j8AitVDb[fWiUGFn8][JLbPE1VBX]);
                    JLbPE1VBX = JLbPE1VBX +(508 - 507);
                }
            }
            fWiUGFn8 = (243 - 176) - (1053 - 987);
        }
    }
}

