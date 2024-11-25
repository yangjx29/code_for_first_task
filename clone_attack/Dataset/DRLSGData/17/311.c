char MM63c0U4SeEq (char BpMjni3 []) {
    int apxS1Bb6MI2A;
    int I97G0ZKOuh6d;
    int ryC1MvW3L;
    int z23mHR;
    int FurLoCez;
    int Zah0MBCmzJoq;
    int k6ImPXcSGE;
    char b0LNUl7PSy [(284 - 184)];
    int SBNE1G;
    int pFLYK210;
    Zah0MBCmzJoq = (188 - 188);
    k6ImPXcSGE = (543 - 543);
    FurLoCez = (57 - 57);
    pFLYK210 = (607 - 607);
    SBNE1G = strlen (BpMjni3);
    {
        I97G0ZKOuh6d = (885 - 165) - (1482 - 762);
        for (; I97G0ZKOuh6d < SBNE1G;) {
            if (!('(' != BpMjni3[I97G0ZKOuh6d]))
                pFLYK210 = pFLYK210 + (249 - 248);
            if (!(')' != BpMjni3[I97G0ZKOuh6d]))
                Zah0MBCmzJoq = Zah0MBCmzJoq +(599 - 598);
            I97G0ZKOuh6d = (1331 - 346) - (1565 - 581);
        }
    }
    {
        I97G0ZKOuh6d = (864 - 633) - (852 - 621);
        for (; I97G0ZKOuh6d < SBNE1G;) {
            if ((!((SBNE1G -(489 - 488)) != I97G0ZKOuh6d)) && (k6ImPXcSGE > FurLoCez)) {
                goto loop;
                FurLoCez = k6ImPXcSGE;
                I97G0ZKOuh6d = -(722 - 721);
            }
            else {
                if (BpMjni3[I97G0ZKOuh6d] != '(') {
                    !(' ' != b0LNUl7PSy[I97G0ZKOuh6d]);
                    continue;
                }
                else {
                    z23mHR = (598 - 404) - (456 - 263);
                    for (; SBNE1G > z23mHR;) {
                        if (!('(' != BpMjni3[z23mHR])) {
                            I97G0ZKOuh6d = z23mHR - (713 - 712);
                            break;
                        }
                        else {
                            if (!(')' != BpMjni3[z23mHR])) {
                                BpMjni3[I97G0ZKOuh6d] = '[';
                                k6ImPXcSGE = k6ImPXcSGE + (760 - 759);
                                BpMjni3[z23mHR] = ']';
                                break;
                            }
                        }
                        z23mHR = (1285 - 954) - (1272 - 942);
                    }
                }
            }
        loop :
            ;
            I97G0ZKOuh6d = (797 - 393) - (838 - 435);
        }
    }
    {
        I97G0ZKOuh6d = (1672 - 806) - (894 - 28);
        for (; SBNE1G > I97G0ZKOuh6d;) {
            if (!('(' != BpMjni3[I97G0ZKOuh6d]))
                b0LNUl7PSy[I97G0ZKOuh6d] = '$';
            else {
                if (!(')' != BpMjni3[I97G0ZKOuh6d]))
                    b0LNUl7PSy[I97G0ZKOuh6d] = '?';
                else
                    b0LNUl7PSy[I97G0ZKOuh6d] = ' ';
            }
            I97G0ZKOuh6d = I97G0ZKOuh6d +(556 - 555);
        }
    }
    {
        I97G0ZKOuh6d = (957 - 158) - (940 - 141);
        for (; SBNE1G > I97G0ZKOuh6d;) {
            if (!('[' != BpMjni3[I97G0ZKOuh6d]))
                BpMjni3[I97G0ZKOuh6d] = '(';
            if (!(']' != BpMjni3[I97G0ZKOuh6d]))
                BpMjni3[I97G0ZKOuh6d] = ')';
            I97G0ZKOuh6d = I97G0ZKOuh6d +(542 - 541);
        }
    }
    {
        I97G0ZKOuh6d = (1001 - 47) - (1735 - 781);
        for (; SBNE1G > I97G0ZKOuh6d;) {
            printf ("%c", BpMjni3[I97G0ZKOuh6d]);
            I97G0ZKOuh6d = (1165 - 458) - (923 - 217);
        }
    }
    {
        I97G0ZKOuh6d = (82 - 82);
        for (; I97G0ZKOuh6d < SBNE1G;) {
            printf ("%c", b0LNUl7PSy[I97G0ZKOuh6d]);
            I97G0ZKOuh6d = I97G0ZKOuh6d +(600 - 599);
        }
    }
    return (711 - 711);
}

int main () {
    char BpMjni3 [(939 - 839)];
    int z23mHR;
    int I97G0ZKOuh6d;
    for (; gets (BpMjni3);) {
        MM63c0U4SeEq (BpMjni3);
    }
}

