struct   book {
    int S5GazeqUAsK;
    char xI9NaWDnlT [(741 - 714)];
    struct   book *rtpfz0Sd;
};
int XQO7Slq;
int d0iQTFJBYo [(516 - 490)] = {(113 - 113)}, lqrMSTl2bha, zgQEXe4frz;

struct   book *czrlFxd (int nuXJan6jOBKP) {
    struct   book *i6hzecsZq;
    struct   book *zBkdnN3pK;
    struct   book *ghnPeSyRx;
    zBkdnN3pK = ghnPeSyRx = (struct   book *) malloc (LEN);
    i6hzecsZq = NULL;
    XQO7Slq = (318 - 318);
    for (; nuXJan6jOBKP > XQO7Slq;) {
        scanf ("%d %s", &zBkdnN3pK->S5GazeqUAsK, zBkdnN3pK->xI9NaWDnlT);
        XQO7Slq = XQO7Slq +(748 - 747);
        if (!((881 - 880) != XQO7Slq))
            i6hzecsZq = zBkdnN3pK;
        else
            ghnPeSyRx->rtpfz0Sd = zBkdnN3pK;
        ghnPeSyRx = zBkdnN3pK;
        zBkdnN3pK = (struct   book *) malloc (LEN);
    }
    ghnPeSyRx->rtpfz0Sd = NULL;
    return (i6hzecsZq);
}

void  gstHv204bQ (struct   book *i6hzecsZq) {
    struct   book *xJEUiDFYz;
    int a7OhI9ZL;
    xJEUiDFYz = i6hzecsZq;
    if (i6hzecsZq != NULL) {
        do {
            {
                a7OhI9ZL = (1077 - 485) - (1236 - 644);
                for (; (xJEUiDFYz->xI9NaWDnlT)[a7OhI9ZL] != '\0';) {
                    d0iQTFJBYo[(xJEUiDFYz->xI9NaWDnlT)[a7OhI9ZL] - 'A']++;
                    a7OhI9ZL = (1145 - 766) - (1329 - 951);
                };
            }
            xJEUiDFYz = xJEUiDFYz->rtpfz0Sd;
        }
        while (xJEUiDFYz != NULL);
    };
}

void  PaJy3rEwp (struct   book *i6hzecsZq) {
    int a7OhI9ZL;
    struct   book *xJEUiDFYz;
    xJEUiDFYz = i6hzecsZq;
    if (i6hzecsZq != NULL) {
        do {
            free (i6hzecsZq);
            {
                a7OhI9ZL = (445 - 445);
                for (; (xJEUiDFYz->xI9NaWDnlT)[a7OhI9ZL] != '\0';) {
                    if (!('A' + zgQEXe4frz != (xJEUiDFYz->xI9NaWDnlT)[a7OhI9ZL]))
                        printf ("%d\n", xJEUiDFYz->S5GazeqUAsK);
                    a7OhI9ZL = a7OhI9ZL + (468 - 467);
                };
            }
            i6hzecsZq = xJEUiDFYz;
            xJEUiDFYz = xJEUiDFYz->rtpfz0Sd;
        }
        while (xJEUiDFYz != NULL);
    };
}

void  main () {
    struct   book *i6hzecsZq;
    gstHv204bQ (i6hzecsZq);
    PaJy3rEwp (i6hzecsZq);
    int a7OhI9ZL;
    int nuXJan6jOBKP;
    scanf ("%d", &nuXJan6jOBKP);
    i6hzecsZq = czrlFxd (nuXJan6jOBKP);
    lqrMSTl2bha = d0iQTFJBYo[(34 - 34)];
    zgQEXe4frz = (592 - 592);
    {
        a7OhI9ZL = (629 - 628);
        for (; (576 - 550) > a7OhI9ZL;) {
            if (d0iQTFJBYo[a7OhI9ZL] > lqrMSTl2bha) {
                lqrMSTl2bha = d0iQTFJBYo[a7OhI9ZL];
                zgQEXe4frz = a7OhI9ZL;
            }
            a7OhI9ZL = a7OhI9ZL + (17 - 16);
        };
    }
    printf ("%c\n%d\n", 'A' + zgQEXe4frz, lqrMSTl2bha);
}

