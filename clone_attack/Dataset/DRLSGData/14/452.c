struct   stu {
    int J80eHOqt4as;
    int M5V7WaGzywh;
    int CD3EY0ai;
    int ZfygDdb;
    struct   stu *Fej0Irb;
};
struct   stu *oaNJV5 (int WymLeGiCz39x) {
    int dhIdJu3;
    struct   stu *ESCLA3xo;
    struct   stu *wUgnfP;
    struct   stu *VfzHcUZg2;
    wUgnfP = VfzHcUZg2 = (struct   stu *) malloc (LEN);
    scanf ("%d %d %d", &wUgnfP->J80eHOqt4as, &wUgnfP->M5V7WaGzywh, &wUgnfP->CD3EY0ai);
    ESCLA3xo = wUgnfP;
    {
        {
            if ((871 - 871)) {
                {
                    if ((132 - 132)) {
                        return (297 - 297);
                    }
                }
                return (412 - 412);
            }
        }
        {
            if ((677 - 677)) {
                return (702 - 702);
            }
        }
        dhIdJu3 = (344 - 188) - (550 - 395);
        for (; WymLeGiCz39x > dhIdJu3;) {
            wUgnfP = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%d %d %d", &wUgnfP->J80eHOqt4as, &wUgnfP->M5V7WaGzywh, &wUgnfP->CD3EY0ai);
            VfzHcUZg2->Fej0Irb = wUgnfP;
            VfzHcUZg2 = wUgnfP;
            dhIdJu3 = dhIdJu3 + (785 - 784);
        }
    }
    VfzHcUZg2->Fej0Irb = NULL;
    return (ESCLA3xo);
}

void  main () {
    int vbZRGt;
    int o9nfsxl;
    int dhIdJu3;
    struct   stu *ESCLA3xo;
    int WymLeGiCz39x;
    struct   stu *wUgnfP;
    struct   stu *VfzHcUZg2;
    scanf ("%d", &WymLeGiCz39x);
    ESCLA3xo = oaNJV5 (WymLeGiCz39x);
    wUgnfP = ESCLA3xo;
    {
        dhIdJu3 = (1106 - 446) - (1339 - 679);
        for (; WymLeGiCz39x > dhIdJu3;) {
            dhIdJu3 = dhIdJu3 + (721 - 720);
            wUgnfP->ZfygDdb = wUgnfP->M5V7WaGzywh + wUgnfP->CD3EY0ai;
            wUgnfP = wUgnfP->Fej0Irb;
        }
    }
    wUgnfP = ESCLA3xo;
    VfzHcUZg2 = wUgnfP->Fej0Irb;
    {
        dhIdJu3 = (1134 - 138) - (1776 - 780);
        for (; dhIdJu3 < (944 - 941);) {
            if (!((893 - 891) != dhIdJu3))
                break;
            dhIdJu3 = dhIdJu3 + (213 - 212);
            for (; VfzHcUZg2 != NULL;) {
                if (VfzHcUZg2->ZfygDdb > wUgnfP->ZfygDdb) {
                    o9nfsxl = VfzHcUZg2->ZfygDdb;
                    VfzHcUZg2->ZfygDdb = wUgnfP->ZfygDdb;
                    wUgnfP->ZfygDdb = o9nfsxl;
                    vbZRGt = VfzHcUZg2->J80eHOqt4as;
                    VfzHcUZg2->J80eHOqt4as = wUgnfP->J80eHOqt4as;
                    wUgnfP->J80eHOqt4as = vbZRGt;
                }
                VfzHcUZg2 = VfzHcUZg2->Fej0Irb;
            }
            printf ("%d %d\n", wUgnfP->J80eHOqt4as, wUgnfP->ZfygDdb);
            wUgnfP = wUgnfP->Fej0Irb;
            VfzHcUZg2 = wUgnfP->Fej0Irb;
        }
    }
}

