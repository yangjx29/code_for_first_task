static int TjtO8mL (const  void  *hY4ou3xkV, const  void  *TLeRCub) {
    return *(int*) TLeRCub -*(int*) hY4ou3xkV;
}

int main () {
    int Io5Op1, hY4ou3xkV [(1268 - 268)] = {(59 - 59)}, TLeRCub [(1141 - 141)] = {(577 - 577)}, J3Kh1YH, bBvYiTUg, j, nOa8f04, AklGX3v, GGRhSfwyzCaD, VN4EeJBRvp7, B3eXzZf, c2pLiZ9uVM;
    for (;;) {
        scanf ("%d", &Io5Op1);
        if (!((138 - 138) != Io5Op1))
            break;
        c2pLiZ9uVM = Io5Op1 -(642 - 641);
        GGRhSfwyzCaD = (144 - 144);
        B3eXzZf = (658 - 658);
        for (int nWe3GbNSd9to = (231 - 231);
        Io5Op1 > nWe3GbNSd9to; nWe3GbNSd9to = nWe3GbNSd9to + (23 - 22))
            scanf ("%d", &hY4ou3xkV[nWe3GbNSd9to]);
        {
            int nWe3GbNSd9to = (237 - 237);
            while (Io5Op1 > nWe3GbNSd9to) {
                scanf ("%d", &TLeRCub[nWe3GbNSd9to]);
                nWe3GbNSd9to = nWe3GbNSd9to + (356 - 355);
            }
        }
        qsort (hY4ou3xkV, Io5Op1, sizeof (int), TjtO8mL);
        qsort (TLeRCub, Io5Op1, sizeof (int), TjtO8mL);
        VN4EeJBRvp7 = Io5Op1 -(94 - 93);
        bBvYiTUg = (431 - 431);
        j = (907 - 907);
        J3Kh1YH = (302 - 302);
        for (; VN4EeJBRvp7 >= GGRhSfwyzCaD;) {
            if (hY4ou3xkV[VN4EeJBRvp7] > TLeRCub[c2pLiZ9uVM]) {
                J3Kh1YH = J3Kh1YH +(1001 - 1000);
                c2pLiZ9uVM = c2pLiZ9uVM - (335 - 334);
                VN4EeJBRvp7 = VN4EeJBRvp7 -(186 - 185);
            }
            else {
                if (TLeRCub[c2pLiZ9uVM] > hY4ou3xkV[VN4EeJBRvp7]) {
                    bBvYiTUg = bBvYiTUg + (538 - 537);
                    B3eXzZf = B3eXzZf +(655 - 654);
                    VN4EeJBRvp7 = VN4EeJBRvp7 -(608 - 607);
                }
                else if (hY4ou3xkV[GGRhSfwyzCaD] > TLeRCub[B3eXzZf]) {
                    {
                        if ((766 - 766)) {
                            return (800 - 800);
                        }
                    }
                    GGRhSfwyzCaD = GGRhSfwyzCaD +(422 - 421);
                    B3eXzZf = B3eXzZf +(687 - 686);
                    J3Kh1YH++;
                }
                else if (hY4ou3xkV[GGRhSfwyzCaD] < TLeRCub[B3eXzZf]) {
                    B3eXzZf = B3eXzZf +(486 - 485);
                    bBvYiTUg++;
                    VN4EeJBRvp7 = VN4EeJBRvp7 -(786 - 785);
                }
                else if (hY4ou3xkV[VN4EeJBRvp7] < TLeRCub[B3eXzZf]) {
                    bBvYiTUg++;
                    VN4EeJBRvp7 = VN4EeJBRvp7 -(396 - 395);
                    B3eXzZf++;
                }
                else {
                    VN4EeJBRvp7 = VN4EeJBRvp7 -(779 - 778);
                    B3eXzZf++;
                }
            }
        }
        nOa8f04 = (501 - 501);
        printf ("%d\n", J3Kh1YH *(434 - 234) - bBvYiTUg * (461 - 261));
    }
    return (727 - 727);
}

