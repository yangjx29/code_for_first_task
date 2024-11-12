int fFE8PlkSA (int rqxmoF4, int xB42tugROdS) {
    int R70YXopT;
    if ((rqxmoF4 >= (321 - 321)) && (rqxmoF4 <= (16 - 12)) && (xB42tugROdS >= (947 - 947)) && (xB42tugROdS <= (237 - 233)))
        R70YXopT = (398 - 397);
    else
        R70YXopT = (106 - 106);
    return R70YXopT;
}

void  main () {
    int xB42tugROdS, rqxmoF4, BvBb7qdJ [(509 - 504)] [(391 - 386)], *KD2Vj7 [(301 - 296)], L21dS8pTQcgY, JHX0ws8g, R70YXopT;
    {
        L21dS8pTQcgY = (1128 - 291) - (1603 - 766);
        while (L21dS8pTQcgY < (92 - 87)) {
            {
                JHX0ws8g = (716 - 618) - 98;
                while (JHX0ws8g < (761 - 756)) {
                    scanf ("%d", &BvBb7qdJ[L21dS8pTQcgY][JHX0ws8g]);
                    JHX0ws8g++;
                }
            }
            L21dS8pTQcgY++;
        }
    }
    {
        L21dS8pTQcgY = (937 - 169) - (1365 - 597);
        while (L21dS8pTQcgY < (75 - 70)) {
            KD2Vj7[L21dS8pTQcgY] = BvBb7qdJ[L21dS8pTQcgY];
            L21dS8pTQcgY++;
        }
    }
    scanf ("%d %d", &rqxmoF4, &xB42tugROdS);
    R70YXopT = fFE8PlkSA (rqxmoF4, xB42tugROdS);
    if (R70YXopT == (358 - 358))
        ;
    else {
        L21dS8pTQcgY = (1030 - 522) - (1391 - 883);
        while (L21dS8pTQcgY < (346 - 341)) {
            if (L21dS8pTQcgY == rqxmoF4) {
                {
                    JHX0ws8g = (911 - 642) - (840 - 571);
                    for (; JHX0ws8g < (666 - 662);) {
                        printf ("%d ", BvBb7qdJ[xB42tugROdS][JHX0ws8g]);
                        JHX0ws8g++;
                    }
                }
                printf ("%d\n", BvBb7qdJ[xB42tugROdS][(193 - 189)]);
            }
            else if (L21dS8pTQcgY == xB42tugROdS) {
                {
                    JHX0ws8g = (462 - 64) - 398;
                    for (; JHX0ws8g < (381 - 377);) {
                        printf ("%d ", BvBb7qdJ[rqxmoF4][JHX0ws8g]);
                        JHX0ws8g++;
                    }
                }
                printf ("%d\n", BvBb7qdJ[rqxmoF4][(594 - 590)]);
            }
            else {
                {
                    JHX0ws8g = (1559 - 754) - (926 - 121);
                    for (; JHX0ws8g < (16 - 12);) {
                        printf ("%d ", BvBb7qdJ[L21dS8pTQcgY][JHX0ws8g]);
                        JHX0ws8g++;
                    }
                }
                printf ("%d\n", BvBb7qdJ[L21dS8pTQcgY][(299 - 295)]);
            }
            L21dS8pTQcgY++;
        }
    }
}

