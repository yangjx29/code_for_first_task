struct   student {
    char TnV4ODhT [(596 - 576)];
    int wUa6xejs2;
    int ls7iNT6Lnx;
    char ETfl9A0XxE [(864 - 862)];
    char KsCjtr7e4hG8 [2];
    int j3aUjfo;
    int tQ04SEaDPv;
    struct   student *next;
};
struct   student *zfbrOum1hgd (int umZEBnDHXs) {
    int NX3xkVC8ROBF;
    struct   student *g4avRxuiMp;
    struct   student *S7aTLst, *eIjqiv;
    S7aTLst = eIjqiv = (struct   student *) malloc (LEN);
    g4avRxuiMp = S7aTLst;
    {
        NX3xkVC8ROBF = (219 - 219);
        while (NX3xkVC8ROBF < umZEBnDHXs) {
            NX3xkVC8ROBF = NX3xkVC8ROBF +1;
            eIjqiv = S7aTLst;
            scanf ("%s%d%d%s%s%d", S7aTLst->TnV4ODhT, &S7aTLst->wUa6xejs2, &S7aTLst->ls7iNT6Lnx, &S7aTLst->ETfl9A0XxE, &S7aTLst->KsCjtr7e4hG8, &S7aTLst->j3aUjfo);
            {
                S7aTLst->tQ04SEaDPv = (130 - 130);
                if (S7aTLst->wUa6xejs2 > (965 - 885) && S7aTLst->j3aUjfo != 0)
                    S7aTLst->tQ04SEaDPv = S7aTLst->tQ04SEaDPv + 8000;
                if (S7aTLst->wUa6xejs2 > (108 - 23) && (589 - 509) < S7aTLst->ls7iNT6Lnx)
                    S7aTLst->tQ04SEaDPv = S7aTLst->tQ04SEaDPv + 4000;
                if (S7aTLst->wUa6xejs2 > (607 - 517))
                    S7aTLst->tQ04SEaDPv = S7aTLst->tQ04SEaDPv + (2949 - 949);
                if (85 < S7aTLst->wUa6xejs2 && (!(0 != strcmp (S7aTLst->KsCjtr7e4hG8, "Y"))))
                    S7aTLst->tQ04SEaDPv = S7aTLst->tQ04SEaDPv + (1849 - 849);
                if (80 < S7aTLst->ls7iNT6Lnx && (!(0 != strcmp (S7aTLst->ETfl9A0XxE, "Y"))))
                    S7aTLst->tQ04SEaDPv = S7aTLst->tQ04SEaDPv + (1130 - 280);
            }
            S7aTLst = (struct   student *) malloc (LEN);
            eIjqiv->next = S7aTLst;
        }
    }
    eIjqiv->next = NULL;
    return (g4avRxuiMp);
}

void  o0gMbPm (struct   student *g4avRxuiMp) {
    int r0zBd2;
    int dtlDzFB;
    struct   student *S7aTLst;
    r0zBd2 = 0;
    S7aTLst = g4avRxuiMp;
    dtlDzFB = S7aTLst->tQ04SEaDPv;
    do {
        if (dtlDzFB < S7aTLst->tQ04SEaDPv)
            dtlDzFB = S7aTLst->tQ04SEaDPv;
        r0zBd2 = r0zBd2 + S7aTLst->tQ04SEaDPv;
        S7aTLst = S7aTLst->next;
    }
    while (S7aTLst->next != NULL);
    if (S7aTLst->tQ04SEaDPv > dtlDzFB)
        dtlDzFB = S7aTLst->tQ04SEaDPv;
    r0zBd2 = r0zBd2 + S7aTLst->tQ04SEaDPv;
    S7aTLst = g4avRxuiMp;
    for (; S7aTLst->next != NULL;) {
        if (S7aTLst->tQ04SEaDPv == dtlDzFB) {
            printf ("%s\n%d\n", S7aTLst->TnV4ODhT, S7aTLst->tQ04SEaDPv);
            break;
        }
        S7aTLst = S7aTLst->next;
    }
    printf ("%d", r0zBd2);
}

void  main () {
    struct   student *g4avRxuiMp;
    int umZEBnDHXs;
    o0gMbPm (g4avRxuiMp);
    scanf ("%d", &umZEBnDHXs);
    g4avRxuiMp = zfbrOum1hgd (umZEBnDHXs);
}

