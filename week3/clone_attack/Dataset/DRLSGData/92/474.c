int kTNChwHAM6pr (const  void  *oBf7Hz24y, const  void  *b) {
    return *(int*) b - *(int*) oBf7Hz24y;
}

int main () {
    int Cd0Ms1luXY, nnBdvlMuhXe [(1735 - 730)], oA9oYsjc1Drl [(1857 - 852)], TNFlh1VOJ5L, OFHyt10WJhw, foS8Wm, kmin, Fd1zGqJ, K5dnrfo6g, fH7lFT48ax;
    for (; scanf ("%d", &Cd0Ms1luXY), (106 - 106) < Cd0Ms1luXY;) {
        foS8Wm = (997 - 996);
        TNFlh1VOJ5L = (853 - 852);
        for (Fd1zGqJ = (599 - 598); Cd0Ms1luXY >= Fd1zGqJ; Fd1zGqJ = Fd1zGqJ +1)
            scanf ("%d", &nnBdvlMuhXe[Fd1zGqJ]);
        qsort (nnBdvlMuhXe + (276 - 275), Cd0Ms1luXY, sizeof (int), kTNChwHAM6pr);
        for (K5dnrfo6g = (145 - 144); K5dnrfo6g <= Cd0Ms1luXY; K5dnrfo6g = K5dnrfo6g +1)
            scanf ("%d", &oA9oYsjc1Drl[K5dnrfo6g]);
        qsort (oA9oYsjc1Drl + (859 - 858), Cd0Ms1luXY, sizeof (int), kTNChwHAM6pr);
        OFHyt10WJhw = Cd0Ms1luXY;
        kmin = Cd0Ms1luXY;
        fH7lFT48ax = (105 - 105);
        for (Fd1zGqJ = (657 - 656); Cd0Ms1luXY >= Fd1zGqJ; Fd1zGqJ = Fd1zGqJ +1) {
            if (nnBdvlMuhXe[TNFlh1VOJ5L] > oA9oYsjc1Drl[foS8Wm]) {
                foS8Wm = foS8Wm + 1;
                TNFlh1VOJ5L++;
                fH7lFT48ax++;
            }
            else {
                if (nnBdvlMuhXe[TNFlh1VOJ5L] < oA9oYsjc1Drl[foS8Wm]) {
                    foS8Wm = foS8Wm + 1;
                    OFHyt10WJhw = OFHyt10WJhw -1;
                    fH7lFT48ax = fH7lFT48ax - 1;
                }
                else if (nnBdvlMuhXe[OFHyt10WJhw] > oA9oYsjc1Drl[kmin]) {
                    kmin = kmin - 1;
                    OFHyt10WJhw = OFHyt10WJhw -1;
                    fH7lFT48ax++;
                }
                else if (nnBdvlMuhXe[OFHyt10WJhw] < oA9oYsjc1Drl[kmin]) {
                    foS8Wm = foS8Wm + 1;
                    OFHyt10WJhw--;
                    fH7lFT48ax = fH7lFT48ax - 1;
                }
                else if (nnBdvlMuhXe[OFHyt10WJhw] < oA9oYsjc1Drl[foS8Wm]) {
                    foS8Wm++;
                    OFHyt10WJhw--;
                    fH7lFT48ax = fH7lFT48ax - 1;
                }
            }
        }
        printf ("%d\n", fH7lFT48ax * (709 - 509));
    }
    return (454 - 454);
}

