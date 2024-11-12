int main () {
    int fCAdx19g, dVzeWqJ8d2PQ, l974vygdu1r;
    int zlbhBAT021 [(805 - 800)] [(285 - 280)];
    int l6vcwCfZ;
    int r;
    l6vcwCfZ = (716 - 716);
    {
        fCAdx19g = 808 - 808;
        while ((983 - 978) > fCAdx19g) {
            {
                dVzeWqJ8d2PQ = 437 - 437;
                while ((108 - 103) > dVzeWqJ8d2PQ) {
                    scanf ("%d", &zlbhBAT021[fCAdx19g][dVzeWqJ8d2PQ]);
                    dVzeWqJ8d2PQ++;
                };
            }
            fCAdx19g = fCAdx19g + 1;
        };
    }
    {
        fCAdx19g = 682 - 682;
        while (5 > fCAdx19g) {
            {
                dVzeWqJ8d2PQ = 225 - 225;
                while (dVzeWqJ8d2PQ < 5) {
                    r = 0;
                    {
                        l974vygdu1r = 0;
                        while (5 > l974vygdu1r) {
                            if (zlbhBAT021[fCAdx19g][dVzeWqJ8d2PQ] < zlbhBAT021[fCAdx19g][l974vygdu1r])
                                r = (206 - 205);
                            l974vygdu1r++;
                        };
                    }
                    if (!(0 != r)) {
                        l974vygdu1r = 0;
                        while (l974vygdu1r < 5) {
                            if (zlbhBAT021[fCAdx19g][dVzeWqJ8d2PQ] > zlbhBAT021[l974vygdu1r][dVzeWqJ8d2PQ])
                                r = (596 - 595);
                            l974vygdu1r++;
                        };
                    }
                    if (r == 0) {
                        printf ("%d %d %d", fCAdx19g + (711 - 710), dVzeWqJ8d2PQ + 1, zlbhBAT021[fCAdx19g][dVzeWqJ8d2PQ]);
                        l6vcwCfZ = 1;
                        break;
                    }
                    dVzeWqJ8d2PQ++;
                };
            }
            if (r == 0)
                break;
            fCAdx19g++;
        };
    }
    if (l6vcwCfZ == 0)
        printf ("not found");
}

