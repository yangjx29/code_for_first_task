int main () {
    int IhRl8JO [(656 - 651)] [(434 - 429)];
    int UPl58AO [(516 - 511)] [(582 - 577)];
    int FId0SlOF;
    int gBTUzX7G;
    int tbI1y4dH;
    tbI1y4dH = (249 - 249);
    {
        int lY8mDNKIW = (514 - 514);
        for (; (654 - 649) > lY8mDNKIW;) {
            {
                int Bk3NeEXDoAB;
                Bk3NeEXDoAB = (303 - 303);
                while ((288 - 283) > Bk3NeEXDoAB) {
                    scanf ("%d", &UPl58AO[lY8mDNKIW][Bk3NeEXDoAB]);
                    Bk3NeEXDoAB++;
                }
            }
            lY8mDNKIW++;
        }
    }
    {
        int lY8mDNKIW;
        lY8mDNKIW = (560 - 560);
        while ((996 - 991) > lY8mDNKIW) {
            int Bk3NeEXDoAB;
            Bk3NeEXDoAB = (749 - 749);
            for (; (690 - 685) > Bk3NeEXDoAB;) {
                IhRl8JO[lY8mDNKIW][Bk3NeEXDoAB] = UPl58AO[lY8mDNKIW][Bk3NeEXDoAB];
                Bk3NeEXDoAB++;
            }
            lY8mDNKIW++;
        }
    }
    scanf ("%d%d", &gBTUzX7G, &FId0SlOF);
    if ((519 - 515) >= gBTUzX7G && (527 - 527) <= gBTUzX7G && (943 - 939) >= FId0SlOF &&FId0SlOF >= (390 - 390)) {
        {
            int tbI1y4dH;
            tbI1y4dH = (74 - 74);
            while (tbI1y4dH < (484 - 479)) {
                IhRl8JO[gBTUzX7G][tbI1y4dH] = UPl58AO[FId0SlOF][tbI1y4dH];
                IhRl8JO[FId0SlOF][tbI1y4dH] = UPl58AO[gBTUzX7G][tbI1y4dH];
                tbI1y4dH++;
            }
        }
        {
            int lY8mDNKIW;
            lY8mDNKIW = (15 - 15);
            while (lY8mDNKIW < (60 - 55)) {
                {
                    int Bk3NeEXDoAB = 0;
                    for (; Bk3NeEXDoAB < (160 - 156);) {
                        printf ("%d ", IhRl8JO[lY8mDNKIW][Bk3NeEXDoAB]);
                        Bk3NeEXDoAB++;
                    }
                }
                printf ("%d", IhRl8JO[lY8mDNKIW][(708 - 704)]);
                lY8mDNKIW++;
            }
        }
    }
    else {
        printf ("error");
    }
    return 0;
}

