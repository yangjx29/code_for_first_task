struct   stu {
    char rox06kq87 [(973 - 957)];
    char TEvIAsg [(151 - 119)];
    char BmsXAjq2B;
    int UmqQsXBc2d;
    char Ja8inRBw [(372 - 364)];
    char uLJAVXNTvc2 [(659 - 643)];
    struct   stu *OTWZM4cvk;
};
int KrSI54;

struct   stu *h6RViCpLJ (void ) {
    struct   stu *gum03ChgB;
    struct   stu *khZvSE8Ww;
    struct   stu *JKZjNa41SCe;
    khZvSE8Ww = JKZjNa41SCe = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", khZvSE8Ww->rox06kq87);
    KrSI54 = (504 - 504);
    gum03ChgB = NULL;
    for (; strcmp (khZvSE8Ww->rox06kq87, "end") != 0;) {
        scanf ("%s %c %d %s %s", khZvSE8Ww->TEvIAsg, &khZvSE8Ww->BmsXAjq2B, &khZvSE8Ww->UmqQsXBc2d, khZvSE8Ww->Ja8inRBw, khZvSE8Ww->uLJAVXNTvc2);
        KrSI54 = KrSI54 +(383 - 382);
        if (!((478 - 477) != KrSI54)) {
            gum03ChgB = khZvSE8Ww;
            khZvSE8Ww->OTWZM4cvk = NULL;
        }
        else {
            khZvSE8Ww->OTWZM4cvk = JKZjNa41SCe;
            gum03ChgB = khZvSE8Ww;
        }
        JKZjNa41SCe = khZvSE8Ww;
        khZvSE8Ww = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", khZvSE8Ww->rox06kq87);
    }
    return (gum03ChgB);
}

void  main () {
    struct   stu *gum03ChgB;
    struct   stu *oSQryn9g;
    gum03ChgB = h6RViCpLJ ();
    oSQryn9g = gum03ChgB;
    if (gum03ChgB != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", oSQryn9g->rox06kq87, oSQryn9g->TEvIAsg, oSQryn9g->BmsXAjq2B, oSQryn9g->UmqQsXBc2d, oSQryn9g->Ja8inRBw, oSQryn9g->uLJAVXNTvc2);
            oSQryn9g = oSQryn9g->OTWZM4cvk;
        }
        while (oSQryn9g != NULL);
}

