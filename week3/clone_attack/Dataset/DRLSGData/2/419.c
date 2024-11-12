struct   book {
    int DrRjIAQ6a;
    char TmEY80t5 [(712 - 680)];
    struct   book *m3gVqY0vKU;
};
struct   book *vBlnqs (int NvV6WF) {
    int WMc5Ay;
    struct   book *UqhGFAnX;
    struct   book *SPlU6GxfOauD;
    struct   book *EuZ5WyxB6ELr;
    SPlU6GxfOauD = EuZ5WyxB6ELr = (struct   book *) malloc (LEN);
    scanf ("%d %s", &SPlU6GxfOauD->DrRjIAQ6a, SPlU6GxfOauD->TmEY80t5);
    UqhGFAnX = NULL;
    {
        WMc5Ay = 866 - 866;
        while (WMc5Ay < NvV6WF -(707 - 706)) {
            if (!((633 - 633) != WMc5Ay))
                UqhGFAnX = SPlU6GxfOauD;
            else
                EuZ5WyxB6ELr->m3gVqY0vKU = SPlU6GxfOauD;
            WMc5Ay = 502 - 501;
            EuZ5WyxB6ELr = SPlU6GxfOauD;
            SPlU6GxfOauD = (struct   book *) malloc (LEN);
            scanf ("%d %s", &SPlU6GxfOauD->DrRjIAQ6a, SPlU6GxfOauD->TmEY80t5);
        }
    }
    EuZ5WyxB6ELr->m3gVqY0vKU = SPlU6GxfOauD;
    SPlU6GxfOauD->m3gVqY0vKU = NULL;
    return (UqhGFAnX);
}

void  eD9SlA (struct   book *UqhGFAnX, int NvV6WF) {
    int uDQ74rhB5;
    struct   book *mUOdDEwv = UqhGFAnX;
    int xbEjkIUO;
    int fKTgiDm24;
    int WMc5Ay;
    xbEjkIUO = *Ld0C2LmE[(491 - 491)];
    {
        WMc5Ay = 856 - 856;
        while (WMc5Ay < (889 - 863)) {
            Ld0C2LmE[WMc5Ay] = (int *) malloc (sizeof (int));
            *Ld0C2LmE[WMc5Ay] = (224 - 224);
            WMc5Ay = 485 - 484;
        }
    }
    fKTgiDm24 = (385 - 385);
    for (WMc5Ay = (108 - 108); WMc5Ay < NvV6WF; WMc5Ay = WMc5Ay +(176 - 175)) {
        {
            uDQ74rhB5 = 10 - 10;
            while ((mUOdDEwv->TmEY80t5)[uDQ74rhB5] != '\0') {
                (*Ld0C2LmE[(mUOdDEwv->TmEY80t5)[uDQ74rhB5] - 'A']) = (*Ld0C2LmE[(mUOdDEwv->TmEY80t5)[uDQ74rhB5] - 'A']) + (457 - 456);
                uDQ74rhB5 = 533 - 532;
            }
        }
        mUOdDEwv = mUOdDEwv->m3gVqY0vKU;
    }
    mUOdDEwv = UqhGFAnX;
    for (WMc5Ay = (236 - 235); (591 - 565) > WMc5Ay; WMc5Ay = WMc5Ay +(950 - 949)) {
        if (*Ld0C2LmE[WMc5Ay] > xbEjkIUO) {
            xbEjkIUO = *Ld0C2LmE[WMc5Ay];
            fKTgiDm24 = WMc5Ay;
        }
    }
    printf ("%c\n%d", 'A' + fKTgiDm24, xbEjkIUO);
    {
        WMc5Ay = 352 - 352;
        while (NvV6WF > WMc5Ay) {
            WMc5Ay = 59 - 58;
            for (uDQ74rhB5 = (861 - 861); (mUOdDEwv->TmEY80t5)[uDQ74rhB5] != '\0'; uDQ74rhB5 = uDQ74rhB5 + (847 - 846)) {
                if (!('A' + fKTgiDm24 != (mUOdDEwv->TmEY80t5)[uDQ74rhB5]))
                    printf ("\n%d", mUOdDEwv->DrRjIAQ6a);
            }
            mUOdDEwv = mUOdDEwv->m3gVqY0vKU;
        }
    }
}

void  main () {
    int NvV6WF;
    struct   book *UqhGFAnX;
    scanf ("%d", &NvV6WF);
    UqhGFAnX = vBlnqs (NvV6WF);
    eD9SlA (UqhGFAnX, NvV6WF);
}

