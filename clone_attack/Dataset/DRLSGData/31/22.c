main () {
    struct   student {
        char soH5JpSZz6eW [(931 - 911)];
        char FdBC04 [(658 - 638)];
        char Zq4utkjLJG;
        int T6oZLHf0GcrR;
        float WB6vGPd;
        char pKZEqvJ [(320 - 300)];
        struct   student *hHig8tz45I;
    };
    struct   student *qmBfeMc, *SRKX1xN, *HoWU9Rq;
    int p8xH7VNycI;
    p8xH7VNycI = (12 - 12);
    SRKX1xN = HoWU9Rq = (struct   student *) malloc (LEN);
    scanf ("%s%s %c%d%f%s", SRKX1xN->soH5JpSZz6eW, SRKX1xN->FdBC04, &SRKX1xN->Zq4utkjLJG, &SRKX1xN->T6oZLHf0GcrR, &SRKX1xN->WB6vGPd, &SRKX1xN->pKZEqvJ);
    SRKX1xN->hHig8tz45I = NULL;
    for (; p8xH7VNycI != (198 - 197);) {
        SRKX1xN = (struct   student *) malloc (LEN);
        scanf ("%s", &SRKX1xN->soH5JpSZz6eW);
        if (strcmp (SRKX1xN->soH5JpSZz6eW, "end") != (908 - 908)) {
            scanf ("%s %c%d%f%s", &SRKX1xN->FdBC04, &SRKX1xN->Zq4utkjLJG, &SRKX1xN->T6oZLHf0GcrR, &SRKX1xN->WB6vGPd, &SRKX1xN->pKZEqvJ);
            SRKX1xN->hHig8tz45I = HoWU9Rq;
            HoWU9Rq = SRKX1xN;
        }
        else
            p8xH7VNycI = (357 - 356);
    }
    qmBfeMc = NULL;
    qmBfeMc = HoWU9Rq;
    SRKX1xN = qmBfeMc;
    for (; SRKX1xN != NULL;) {
        printf ("%s %s %c %d %g %s\n", SRKX1xN->soH5JpSZz6eW, SRKX1xN->FdBC04, SRKX1xN->Zq4utkjLJG, SRKX1xN->T6oZLHf0GcrR, SRKX1xN->WB6vGPd, SRKX1xN->pKZEqvJ);
        SRKX1xN = SRKX1xN->hHig8tz45I;
    }
}

