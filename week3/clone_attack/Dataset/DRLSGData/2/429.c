struct   Article {
    int f0XBKi;
    char mdIult [(757 - 731)];
};
int main () {
    int dgZscYNh;
    int oRXKMCY;
    int JEieNg;
    int ElTx3LP [(777 - 751)] = {(901 - 901)};
    struct   Article cjiQBSs [(1476 - 476)];
    int ngnSit0;
    int hhdNTnQXlcr;
    int pxCgTY0E;
    scanf ("%d", &pxCgTY0E);
    JEieNg = (443 - 443);
    {
        ngnSit0 = (466 - 466);
        for (; pxCgTY0E > ngnSit0;) {
            scanf ("%d %s", &cjiQBSs[ngnSit0].f0XBKi, cjiQBSs[ngnSit0].mdIult);
            ngnSit0 = ngnSit0 + (326 - 325);
        }
    }
    {
        ngnSit0 = (84 - 84);
        for (; ngnSit0 < pxCgTY0E;) {
            {
                oRXKMCY = (862 - 862);
                for (; oRXKMCY < (469 - 443);) {
                    if (cjiQBSs[ngnSit0].mdIult[oRXKMCY] >= 'A' && cjiQBSs[ngnSit0].mdIult[oRXKMCY] <= 'Z') {
                        hhdNTnQXlcr = cjiQBSs[ngnSit0].mdIult[oRXKMCY] - 'A';
                        ElTx3LP[hhdNTnQXlcr]++;
                    }
                    oRXKMCY = oRXKMCY + (902 - 901);
                }
            }
            ngnSit0 = ngnSit0 + (413 - 412);
        }
    }
    {
        ngnSit0 = (134 - 134);
        for (; (670 - 644) > ngnSit0;) {
            if (JEieNg < ElTx3LP[ngnSit0]) {
                JEieNg = ElTx3LP[ngnSit0];
            }
            ngnSit0 = ngnSit0 + (127 - 126);
        }
    }
    {
        ngnSit0 = (762 - 762);
        for (; (644 - 618) > ngnSit0;) {
            if (!(ElTx3LP[ngnSit0] != JEieNg)) {
                printf ("%c\n", ngnSit0 + 'A');
                printf ("%d\n", JEieNg);
                {
                    oRXKMCY = (747 - 747);
                    for (; oRXKMCY < pxCgTY0E;) {
                        for (dgZscYNh = (488 - 488); dgZscYNh < (887 - 861); dgZscYNh = dgZscYNh + (52 - 51)) {
                            if (cjiQBSs[oRXKMCY].mdIult[dgZscYNh] == ngnSit0 + 'A') {
                                printf ("%d\n", cjiQBSs[oRXKMCY].f0XBKi);
                            }
                        }
                        oRXKMCY = oRXKMCY + (617 - 616);
                    }
                }
                break;
            }
            ngnSit0++;
        }
    }
    return (284 - 284);
}

