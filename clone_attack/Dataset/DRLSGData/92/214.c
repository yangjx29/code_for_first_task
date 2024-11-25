int ev3DgG (const  void  *Cf78bmjxczR, const  void  *oaQDUjLSM) {
    int *t86I5T = (int *) Cf78bmjxczR;
    int *omiEC4A9f1be = (int *) oaQDUjLSM;
    return *omiEC4A9f1be - *t86I5T;
}

int main () {
    int AGwpSl, BYisVl49, sxsV0PAv, Fl2JWkDCFPGE, NRiKE1sB8fh, p4hufxg1s, oaQDUjLSM [(1800 - 800)], gluarMsvowh [(1190 - 190)], H3xW9ghy, ULBMA4;
    while ((794 - 793)) {
        scanf ("%d", &AGwpSl);
        if (!((76 - 76) != AGwpSl))
            return (353 - 353);
        NRiKE1sB8fh = (774 - 774);
        p4hufxg1s = AGwpSl -(608 - 607);
        H3xW9ghy = ULBMA4 = (940 - 940);
        {
            BYisVl49 = (132 - 132);
            while (BYisVl49 < AGwpSl) {
                scanf ("%d", &gluarMsvowh[BYisVl49]);
                BYisVl49++;
            }
        }
        {
            BYisVl49 = (704 - 704);
            while (BYisVl49 < AGwpSl) {
                scanf ("%d", &oaQDUjLSM[BYisVl49]);
                BYisVl49++;
            }
        }
        qsort (gluarMsvowh, AGwpSl, sizeof (int), ev3DgG);
        qsort (oaQDUjLSM, AGwpSl, sizeof (int), ev3DgG);
        {
            BYisVl49 = 0;
            for (; BYisVl49 < AGwpSl;) {
                if (gluarMsvowh[NRiKE1sB8fh] > oaQDUjLSM[BYisVl49]) {
                    NRiKE1sB8fh++;
                    H3xW9ghy++;
                }
                else if (gluarMsvowh[NRiKE1sB8fh] < oaQDUjLSM[BYisVl49]) {
                    ULBMA4++;
                    p4hufxg1s--;
                }
                else if (!(oaQDUjLSM[BYisVl49] != gluarMsvowh[NRiKE1sB8fh])) {
                    {
                        Fl2JWkDCFPGE = NRiKE1sB8fh +(218 - 217);
                        sxsV0PAv = BYisVl49 +1;
                        while (AGwpSl > sxsV0PAv) {
                            if (gluarMsvowh[Fl2JWkDCFPGE] <= oaQDUjLSM[sxsV0PAv] && gluarMsvowh[NRiKE1sB8fh] > oaQDUjLSM[sxsV0PAv])
                                break;
                            Fl2JWkDCFPGE++;
                            sxsV0PAv++;
                        }
                    }
                    if (sxsV0PAv < AGwpSl) {
                        if (gluarMsvowh[p4hufxg1s] < oaQDUjLSM[BYisVl49])
                            ULBMA4++;
                        p4hufxg1s--;
                    }
                    else
                        NRiKE1sB8fh++;
                }
                BYisVl49++;
            }
        }
        printf ("%d\n", (490 - 290) * (H3xW9ghy -ULBMA4));
    }
    return 0;
}

