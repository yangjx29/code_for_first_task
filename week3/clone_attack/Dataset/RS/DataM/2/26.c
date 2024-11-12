struct   inf {
    int vQPURSj;
    char xMa4PTUyoCg [(661 - 635)];
    struct   inf *WOUaZeqVPx;
};
int eb96BOvAHpZ;

struct   inf *cH0TEfdwmxV (void ) {
    struct   inf *wRozETwYI;
    struct   inf *Ptfgepi;
    struct   inf *QjoT7tg9N5b;
    int OHP3qgkY;
    Ptfgepi = QjoT7tg9N5b = (struct   inf *) malloc (LEN);
    scanf ("%d %s", &Ptfgepi->vQPURSj, Ptfgepi->xMa4PTUyoCg);
    wRozETwYI = NULL;
    OHP3qgkY = 0;
    while ((706 - 705)) {
        OHP3qgkY = OHP3qgkY +1;
        if (OHP3qgkY == (838 - 837))
            wRozETwYI = Ptfgepi;
        else
            QjoT7tg9N5b->WOUaZeqVPx = Ptfgepi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        QjoT7tg9N5b = Ptfgepi;
        if (!(eb96BOvAHpZ != OHP3qgkY))
            break;
        else {
            Ptfgepi = (struct   inf *) malloc (LEN);
            scanf ("%d %s", &Ptfgepi->vQPURSj, Ptfgepi->xMa4PTUyoCg);
        };
    }
    QjoT7tg9N5b->WOUaZeqVPx = NULL;
    return (wRozETwYI);
}

void  jHZ7Qj (struct   inf *wRozETwYI, int jDdGhqSl3) {
    struct   inf *WqneOhRvLcmf;
    int *wMu5NinrGE, *TOPCmyrx, *QG2b3WJuH6E;
    char *SHBAXPZtCwLr;
    WqneOhRvLcmf = wRozETwYI;
    wMu5NinrGE = (int *) malloc (26 * LEM);
    for (TOPCmyrx = wMu5NinrGE; wMu5NinrGE + 26 > TOPCmyrx; TOPCmyrx++)
        *TOPCmyrx = 0;
    for (; WqneOhRvLcmf != NULL;) {
        for (SHBAXPZtCwLr = WqneOhRvLcmf->xMa4PTUyoCg; *SHBAXPZtCwLr != '\0'; SHBAXPZtCwLr++)
            *(wMu5NinrGE + (*SHBAXPZtCwLr-'A')) = *(wMu5NinrGE + (*SHBAXPZtCwLr-'A')) + 1;
        WqneOhRvLcmf = WqneOhRvLcmf->WOUaZeqVPx;
    }
    QG2b3WJuH6E = wMu5NinrGE;
    {
        TOPCmyrx = wMu5NinrGE;
        while (TOPCmyrx < wMu5NinrGE + 26) {
            if (*QG2b3WJuH6E < *TOPCmyrx)
                QG2b3WJuH6E = TOPCmyrx;
            TOPCmyrx = TOPCmyrx +1;
        };
    }
    printf ("%c\n%d\n", QG2b3WJuH6E -wMu5NinrGE + 'A', *QG2b3WJuH6E);
    WqneOhRvLcmf = wRozETwYI;
    while (WqneOhRvLcmf != NULL) {
        {
            SHBAXPZtCwLr = WqneOhRvLcmf->xMa4PTUyoCg;
            while (*SHBAXPZtCwLr != '\0') {
                if (*SHBAXPZtCwLr == (QG2b3WJuH6E -wMu5NinrGE + 'A'))
                    printf ("%d\n", WqneOhRvLcmf->vQPURSj);
                SHBAXPZtCwLr = SHBAXPZtCwLr +1;
            };
        }
        WqneOhRvLcmf = WqneOhRvLcmf->WOUaZeqVPx;
    };
}

void  main () {
    struct   inf *wRozETwYI;
    struct   inf *MKNnEafurp96;
    scanf ("%d", &eb96BOvAHpZ);
    wRozETwYI = cH0TEfdwmxV ();
    MKNnEafurp96 = wRozETwYI;
    jHZ7Qj (wRozETwYI, eb96BOvAHpZ);
}

