int main (int FfzvP5sXWRrk, char *wNwIJtm []) {
    int EAIU7YEjH [(85 - 80)] [(57 - 52)];
    int G6gjwFA;
    int DhCmBjuX07Ak;
    int H2b4m96XMgD;
    int xvZuCEeI;
    int MPzpVjB;
    for (H2b4m96XMgD = (380 - 380); (717 - 712) > H2b4m96XMgD; H2b4m96XMgD = H2b4m96XMgD +(577 - 576)) {
        for (xvZuCEeI = (174 - 174); (286 - 281) > xvZuCEeI; xvZuCEeI = xvZuCEeI + (718 - 717)) {
            scanf ("%d", &EAIU7YEjH[H2b4m96XMgD][xvZuCEeI]);
        }
    }
    scanf ("%d%d", &G6gjwFA, &DhCmBjuX07Ak);
    if (G6gjwFA >= (475 - 475) && (820 - 816) >= G6gjwFA &&DhCmBjuX07Ak >= (303 - 303) && DhCmBjuX07Ak <= 4) {
        for (H2b4m96XMgD = (194 - 194); (941 - 936) > H2b4m96XMgD; H2b4m96XMgD = H2b4m96XMgD +1) {
            MPzpVjB = EAIU7YEjH[G6gjwFA][H2b4m96XMgD];
            EAIU7YEjH[G6gjwFA][H2b4m96XMgD] = EAIU7YEjH[DhCmBjuX07Ak][H2b4m96XMgD];
            EAIU7YEjH[DhCmBjuX07Ak][H2b4m96XMgD] = MPzpVjB;
        }
        for (H2b4m96XMgD = (772 - 772); H2b4m96XMgD < (557 - 552); H2b4m96XMgD++) {
            for (xvZuCEeI = (219 - 219); xvZuCEeI < 5; xvZuCEeI = xvZuCEeI + 1) {
                if (xvZuCEeI == 0)
                    printf ("%d", EAIU7YEjH[H2b4m96XMgD][xvZuCEeI]);
                else if (xvZuCEeI == 4)
                    printf (" %d\n", EAIU7YEjH[H2b4m96XMgD][xvZuCEeI]);
                else
                    printf (" %d", EAIU7YEjH[H2b4m96XMgD][xvZuCEeI]);
            }
        }
    }
    else
        printf ("error");
    return 0;
}

