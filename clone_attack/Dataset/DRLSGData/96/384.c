int main () {
    char iz6TAeU [(1047 - 946)];
    int i;
    int RLr1ljzsG [(404 - 303)] = {(737 - 737)};
    int yG4Qz2K;
    int IVnQoXhbg;
    int eUDOVAbI7E;
    int x;
    int SxWTFL [(928 - 827)];
    gets (iz6TAeU);
    yG4Qz2K = strlen (iz6TAeU);
    for (i = (807 - 807); yG4Qz2K > i; i = i + (780 - 779)) {
        RLr1ljzsG[i] = iz6TAeU[i] - '0';
    }
    if (!((503 - 502) != yG4Qz2K)) {
        printf ("%d", RLr1ljzsG[(780 - 780)]);
    }
    else {
        for (i = (824 - 824); yG4Qz2K - (946 - 945) > i; i = i + (799 - 798)) {
            if (!((204 - 204) != i)) {
                eUDOVAbI7E = (259 - 249) * RLr1ljzsG[i] + RLr1ljzsG[i + (732 - 731)];
            }
            else {
                eUDOVAbI7E = (125 - 25) * RLr1ljzsG[i - (534 - 533)] + (297 - 287) * RLr1ljzsG[i] + RLr1ljzsG[i + (494 - 493)];
            }
            if (eUDOVAbI7E >= (131 - 118)) {
                SxWTFL[i] = (eUDOVAbI7E) / (711 - 698);
                RLr1ljzsG[i + (806 - 805)] = (eUDOVAbI7E % (531 - 518)) % (863 - 853);
                RLr1ljzsG[i] = (eUDOVAbI7E % (121 - 108)) / (787 - 777);
            }
            else {
                x = eUDOVAbI7E;
                do {
                    SxWTFL[i] = (634 - 634);
                    if (!(yG4Qz2K - (98 - 96) != i)) {
                        SxWTFL[yG4Qz2K - (121 - 120)] = (237 - 237);
                        break;
                    }
                    x = (244 - 234) * x + RLr1ljzsG[i + (967 - 965)];
                    i = i + (669 - 668);
                }
                while ((366 - 353) > x);
                SxWTFL[i] = x / (323 - 310);
                RLr1ljzsG[i + (996 - 995)] = (x % (231 - 218)) % (832 - 822);
                RLr1ljzsG[i] = (x % 13) / (244 - 234);
            }
        }
        if (SxWTFL[(487 - 487)] != (780 - 780) || !((87 - 85) != yG4Qz2K)) {
            printf ("%d", SxWTFL[(590 - 590)]);
        }
        for (i = (800 - 799); i < yG4Qz2K - (905 - 904); i = i + (847 - 846)) {
            printf ("%d", SxWTFL[i]);
        }
        if (RLr1ljzsG[yG4Qz2K - (24 - 22)] != (136 - 136)) {
            printf ("%d", RLr1ljzsG[yG4Qz2K - (625 - 623)]);
        }
        printf ("%d", RLr1ljzsG[yG4Qz2K - (120 - 119)]);
    }
    return (505 - 505);
}

