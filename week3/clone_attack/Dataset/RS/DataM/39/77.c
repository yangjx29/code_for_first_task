struct   student {
    char F3oyvghEwQ [20];
    int TGsT8p6A2rmt;
    int s2;
    char OWgt0A;
    char w;
    int DSUgYOMl;
    int WmGpzR;
    struct   student *DOMeAi;
};
void  main () {
    int fX5MDVBZ1YPg, ev8HmMV = 0;
    struct   student *yvcZ7QFVqibn, *szk9KrB, *head, *ZOJU9WSqB, *GBl2garY0bs6;
    int sygnQaVuXq [108] [(1004 - 998)];
    int YemMgDKHZWbz, qYBEm1r, qdBTjaWSK9Z = 0, r, ruOLrD807i;
    fX5MDVBZ1YPg = 0;
    r = 0;
    qYBEm1r = 0;
    qYBEm1r = qYBEm1r + 1;
    yvcZ7QFVqibn = szk9KrB = (struct   student *) malloc (LEN);
    scanf ("%d", &YemMgDKHZWbz);
    scanf ("%s %d %d %c %c %d", yvcZ7QFVqibn->F3oyvghEwQ, &yvcZ7QFVqibn->TGsT8p6A2rmt, &yvcZ7QFVqibn->s2, &yvcZ7QFVqibn->OWgt0A, &yvcZ7QFVqibn->w, &yvcZ7QFVqibn->DSUgYOMl);
    while (qYBEm1r < YemMgDKHZWbz) {
        if (!(1 != qYBEm1r))
            head = yvcZ7QFVqibn;
        else
            szk9KrB->DOMeAi = yvcZ7QFVqibn;
        qYBEm1r = qYBEm1r + 1;
        szk9KrB = yvcZ7QFVqibn;
        yvcZ7QFVqibn = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", yvcZ7QFVqibn->F3oyvghEwQ, &yvcZ7QFVqibn->TGsT8p6A2rmt, &yvcZ7QFVqibn->s2, &yvcZ7QFVqibn->OWgt0A, &yvcZ7QFVqibn->w, &yvcZ7QFVqibn->DSUgYOMl);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ZOJU9WSqB = head;
    szk9KrB->DOMeAi = yvcZ7QFVqibn;
    yvcZ7QFVqibn->DOMeAi = NULL;
    for (; YemMgDKHZWbz > r;) {
        r = r + 1;
        (ZOJU9WSqB->WmGpzR) = 8000 * ((392 - 312) < (ZOJU9WSqB->TGsT8p6A2rmt) && (0 < ZOJU9WSqB->DSUgYOMl)) + 4000 * ((853 - 768) < (ZOJU9WSqB->TGsT8p6A2rmt) && (946 - 866) < (ZOJU9WSqB->s2)) + (2858 - 858) * ((573 - 483) < (ZOJU9WSqB->TGsT8p6A2rmt)) + (1537 - 537) * ((ZOJU9WSqB->TGsT8p6A2rmt) > (949 - 864) && (ZOJU9WSqB->w == 'Y')) + (1192 - 342) * ((ZOJU9WSqB->s2) > 80 && (ZOJU9WSqB->OWgt0A == 'Y'));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        qdBTjaWSK9Z = qdBTjaWSK9Z + (ZOJU9WSqB->WmGpzR);
        ZOJU9WSqB = ZOJU9WSqB->DOMeAi;
    }
    ZOJU9WSqB = head;
    GBl2garY0bs6 = head;
    ruOLrD807i = ZOJU9WSqB->WmGpzR;
    r = 0;
    for (; r < YemMgDKHZWbz;) {
        if ((ZOJU9WSqB->WmGpzR) > ruOLrD807i) {
            ev8HmMV = r;
            ruOLrD807i = (ZOJU9WSqB->WmGpzR);
        }
        ZOJU9WSqB = ZOJU9WSqB->DOMeAi;
        r++;
    }
    while (fX5MDVBZ1YPg < ev8HmMV) {
        fX5MDVBZ1YPg = fX5MDVBZ1YPg + 1;
        GBl2garY0bs6 = GBl2garY0bs6->DOMeAi;
    }
    printf ("%s\n%d\n%d\n", GBl2garY0bs6->F3oyvghEwQ, ruOLrD807i, qdBTjaWSK9Z);
}

