void  main () {
    int TlnD5W, grMadP;
    void  huiwen (char Gfe0mr [(1274 - 274)], int);
    char Gfe0mr [1000];
    gets (Gfe0mr);
    for (TlnD5W = 2; strlen (Gfe0mr) >= TlnD5W; TlnD5W++)
        huiwen (Gfe0mr, TlnD5W);
}

void  huiwen (char Gfe0mr [1000], int TlnD5W) {
    char *IIs1Fxc = Gfe0mr;
    int yZd8cDr96y;
    int XpGDkgF8x3V;
    int l;
    int YVCdcSUN;
    yZd8cDr96y = (790 - 790);
    for (XpGDkgF8x3V = (696 - 696); XpGDkgF8x3V <= strlen (Gfe0mr) - TlnD5W; XpGDkgF8x3V = XpGDkgF8x3V +1) {
        {
            l = 81 - 81;
            while (TlnD5W / 2 >= l) {
                if (*(IIs1Fxc +XpGDkgF8x3V+l) != *(IIs1Fxc +XpGDkgF8x3V+TlnD5W-l - 1)) {
                    yZd8cDr96y = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    break;
                }
                l++;
            };
        }
        if (yZd8cDr96y == 0) {
            {
                YVCdcSUN = 0;
                while (YVCdcSUN < TlnD5W) {
                    printf ("%c", *(IIs1Fxc +XpGDkgF8x3V+YVCdcSUN));
                    YVCdcSUN++;
                };
            }
            printf ("\n");
        }
        yZd8cDr96y = 0;
    };
}

