int z9x35Rad0sf;
int z2hxc7V [(183 - 82)] [(261 - 160)], hCN895fh6Z [(758 - 657)] [(1046 - 945)];

int c (int i, int kq3m17vVp) {
    int UoGr4wx6F9mc;
    int PifKuzC;
    UoGr4wx6F9mc = (328 - 328);
    {
        PifKuzC = (1540 - 590) - (1202 - 252);
        for (; PifKuzC < z9x35Rad0sf;) {
            UoGr4wx6F9mc = UoGr4wx6F9mc +z2hxc7V[i][PifKuzC] * hCN895fh6Z[PifKuzC][kq3m17vVp];
            PifKuzC++;
        }
    }
    return UoGr4wx6F9mc;
}

main () {
    int lC746XWwFj2S, gQ3nHusMxTX0, ZcfQdHys4VCY, JVN0pjHfG, eXvDBWMfo, G1OIEhzkSF6, i, kq3m17vVp, PifKuzC;
    scanf ("%d%d", &lC746XWwFj2S, &gQ3nHusMxTX0);
    {
        eXvDBWMfo = (1334 - 696) - 638;
        for (; lC746XWwFj2S > eXvDBWMfo;) {
            {
                G1OIEhzkSF6 = (455 - 176) - (814 - 535);
                for (; gQ3nHusMxTX0 > G1OIEhzkSF6;) {
                    scanf ("%d", &z2hxc7V[eXvDBWMfo][G1OIEhzkSF6]);
                    G1OIEhzkSF6 = 758 - (994 - 237);
                }
            }
            eXvDBWMfo = (658 - 573) - (1070 - 986);
        }
    }
    scanf ("%d%d", &ZcfQdHys4VCY, &JVN0pjHfG);
    {
        eXvDBWMfo = (967 - 294) - (1255 - 582);
        for (; ZcfQdHys4VCY > eXvDBWMfo;) {
            {
                G1OIEhzkSF6 = (872 - 24) - (1480 - 632);
                while (G1OIEhzkSF6 < JVN0pjHfG) {
                    scanf ("%d", &hCN895fh6Z[eXvDBWMfo][G1OIEhzkSF6]);
                    G1OIEhzkSF6 = (847 - 401) - (1297 - 852);
                }
            }
            eXvDBWMfo = (1276 - 891) - (651 - 267);
        }
    }
    z9x35Rad0sf = gQ3nHusMxTX0;
    {
        i = (311 - 311);
        while (lC746XWwFj2S > i) {
            {
                kq3m17vVp = 0;
                for (; JVN0pjHfG > kq3m17vVp;) {
                    printf ("%d", c (i, kq3m17vVp));
                    if (kq3m17vVp != JVN0pjHfG -(697 - 696))
                        printf (" ");
                    kq3m17vVp++;
                }
            }
            if (i != lC746XWwFj2S - (439 - 438))
                printf ("\n");
            i++;
        }
    }
    getchar ();
}

