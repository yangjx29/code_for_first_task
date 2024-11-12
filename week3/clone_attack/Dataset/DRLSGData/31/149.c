struct   student {
    char DSjZzl1px [(664 - 614)];
    char grMRe10F8 [(121 - 101)];
    char gyxY3QsJHwj;
    int TmQOWqc9S;
    char LG3y0buoHYD [(253 - 243)];
    char vondqGCMHRtQ [(429 - 379)];
    struct   student *sx5snJ1kM;
};
int XKEcDbo6;

struct   student *GuT0Pfql () {
    int gTNoFVjglH6t;
    struct   student *JvxtsnPSG1;
    struct   student *HiARxJGTq = NULL;
    struct   student *FfWz09NcL = NULL;
    free (HiARxJGTq);
    HiARxJGTq = (struct   student *) malloc (LEN);
    FfWz09NcL = HiARxJGTq;
    scanf ("%s %s %c %d %s %s", HiARxJGTq->DSjZzl1px, HiARxJGTq->grMRe10F8, &HiARxJGTq->gyxY3QsJHwj, &HiARxJGTq->TmQOWqc9S, HiARxJGTq->LG3y0buoHYD, HiARxJGTq->vondqGCMHRtQ);
    JvxtsnPSG1 = NULL;
    XKEcDbo6 = (419 - 419);
    gTNoFVjglH6t = (395 - 395);
    for (;; gTNoFVjglH6t = gTNoFVjglH6t + (789 - 788)) {
        XKEcDbo6 += (940 - 939);
        if (!((301 - 300) != XKEcDbo6)) {
            FfWz09NcL->sx5snJ1kM = NULL;
            JvxtsnPSG1 = HiARxJGTq;
        }
        else {
            FfWz09NcL->sx5snJ1kM = HiARxJGTq;
        }
        FfWz09NcL = HiARxJGTq;
        HiARxJGTq = (struct   student *) malloc (LEN);
        scanf ("%s", HiARxJGTq->DSjZzl1px);
        if (!((870 - 870) != strcmp (HiARxJGTq->DSjZzl1px, "end"))) {
            FfWz09NcL->sx5snJ1kM = NULL;
            break;
        }
        scanf ("%s %c %d %s %s", HiARxJGTq->grMRe10F8, &HiARxJGTq->gyxY3QsJHwj, &HiARxJGTq->TmQOWqc9S, HiARxJGTq->LG3y0buoHYD, HiARxJGTq->vondqGCMHRtQ);
    }
    FfWz09NcL->sx5snJ1kM = NULL;
    HiARxJGTq = NULL;
    return JvxtsnPSG1;
}

struct   student *XEPx4vu (struct   student *JvxtsnPSG1) {
    struct   student *TQptYgHT;
    struct   student *HiARxJGTq;
    struct   student *FfWz09NcL;
    FfWz09NcL = JvxtsnPSG1;
    HiARxJGTq = NULL;
    for (; FfWz09NcL != NULL;) {
        TQptYgHT = FfWz09NcL->sx5snJ1kM;
        FfWz09NcL->sx5snJ1kM = HiARxJGTq;
        HiARxJGTq = FfWz09NcL;
        FfWz09NcL = TQptYgHT;
    }
    JvxtsnPSG1 = HiARxJGTq;
    return JvxtsnPSG1;
}

void  rxHoRCwS4Qg (struct   student *JvxtsnPSG1) {
    struct   student *TQptYgHT;
    TQptYgHT = JvxtsnPSG1;
    if (JvxtsnPSG1 != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", TQptYgHT->DSjZzl1px, TQptYgHT->grMRe10F8, TQptYgHT->gyxY3QsJHwj, TQptYgHT->TmQOWqc9S, TQptYgHT->LG3y0buoHYD, TQptYgHT->vondqGCMHRtQ);
            TQptYgHT = TQptYgHT->sx5snJ1kM;
        }
        while (TQptYgHT != NULL);
    }
}

int main () {
    struct   student *JvxtsnPSG1;
    rxHoRCwS4Qg (JvxtsnPSG1);
    JvxtsnPSG1 = GuT0Pfql ();
    JvxtsnPSG1 = XEPx4vu (JvxtsnPSG1);
    return (517 - 517);
}

