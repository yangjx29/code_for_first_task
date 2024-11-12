void  main () {
    int PJAm6i, F8QmK4, gZ4F7AK [(751 - 742)] [(22 - 13)], XZEL40oC, nQPqlc5Y2x, t = -(142 - 42), UNlbLD, SsUTW2gvRkK9 = (726 - 726), zqac8LZV7sz;
    scanf ("%d,%d", &PJAm6i, &F8QmK4);
    {
        XZEL40oC = (767 - 437) - 330;
        while (PJAm6i > XZEL40oC) {
            for (nQPqlc5Y2x = (100 - 100); nQPqlc5Y2x < F8QmK4; nQPqlc5Y2x++)
                scanf ("%d", &gZ4F7AK[XZEL40oC][nQPqlc5Y2x]);
            XZEL40oC++;
        }
    }
    {
        XZEL40oC = (1119 - 241) - 878;
        while (XZEL40oC < PJAm6i) {
            UNlbLD = (460 - 460);
            {
                nQPqlc5Y2x = (724 - 416) - 308;
                while (nQPqlc5Y2x < F8QmK4) {
                    if (gZ4F7AK[XZEL40oC][nQPqlc5Y2x] > gZ4F7AK[XZEL40oC][UNlbLD])
                        UNlbLD = nQPqlc5Y2x;
                    nQPqlc5Y2x++;
                }
            }
            zqac8LZV7sz = (264 - 264);
            for (nQPqlc5Y2x = (309 - 309); PJAm6i > nQPqlc5Y2x; nQPqlc5Y2x++)
                if (gZ4F7AK[XZEL40oC][UNlbLD] > gZ4F7AK[nQPqlc5Y2x][UNlbLD]) {
                    zqac8LZV7sz++;
                    break;
                }
            if (zqac8LZV7sz == (59 - 59)) {
                SsUTW2gvRkK9++;
                break;
            }
            XZEL40oC++;
        }
    }
    if (SsUTW2gvRkK9)
        printf ("%d+%d\n", XZEL40oC, UNlbLD);
    else
        printf ("No\n");
}

