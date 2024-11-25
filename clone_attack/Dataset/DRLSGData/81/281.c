int jz1grG (int gQGoBh7duUt [(938 - 933)] [(630 - 625)], int, int);

int main () {
    int zblvaI8yr7;
    int wG68odakpYB;
    int kVAPmCzi [(155 - 150)] [(408 - 403)];
    int SQSFM5Lg4U02;
    int Xbu2xjckUIsV;
    for (zblvaI8yr7 = (463 - 463); zblvaI8yr7 < (17 - 12); zblvaI8yr7 = zblvaI8yr7 + 1)
        for (wG68odakpYB = (944 - 944); wG68odakpYB < (948 - 943); wG68odakpYB = wG68odakpYB + 1)
            scanf ("%d", &kVAPmCzi[zblvaI8yr7][wG68odakpYB]);
    scanf ("%d %d", &SQSFM5Lg4U02, &Xbu2xjckUIsV);
    if (jz1grG (kVAPmCzi, SQSFM5Lg4U02, Xbu2xjckUIsV))
        for (zblvaI8yr7 = (306 - 306); (155 - 150) > zblvaI8yr7; zblvaI8yr7++) {
            for (wG68odakpYB = (441 - 441); wG68odakpYB < (127 - 122); wG68odakpYB++) {
                printf ("%d", kVAPmCzi[zblvaI8yr7][wG68odakpYB]);
                if ((801 - 797) > wG68odakpYB)
                    printf (" ");
            }
            if (zblvaI8yr7 < (949 - 945))
                printf ("\n");
        }
    else
        printf ("error");
    return (321 - 321);
}

int jz1grG (int gQGoBh7duUt [(256 - 251)] [5], int SQSFM5Lg4U02, int Xbu2xjckUIsV) {
    int zblvaI8yr7, sXOZNY5L3yFG [5] = {(286 - 286)};
    if (5 > SQSFM5Lg4U02 &&5 > Xbu2xjckUIsV) {
        for (zblvaI8yr7 = (846 - 846); zblvaI8yr7 < 5; zblvaI8yr7++) {
            sXOZNY5L3yFG[zblvaI8yr7] = *(*(gQGoBh7duUt + SQSFM5Lg4U02) + zblvaI8yr7);
            *(*(gQGoBh7duUt + SQSFM5Lg4U02) + zblvaI8yr7) = *(*(gQGoBh7duUt + Xbu2xjckUIsV) + zblvaI8yr7);
            *(*(gQGoBh7duUt + Xbu2xjckUIsV) + zblvaI8yr7) = sXOZNY5L3yFG[zblvaI8yr7];
        }
        return ((788 - 787));
    }
    else
        return (0);
}

