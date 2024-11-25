struct   record {
    int w6pYrO0IDdaq;
    short  iPj43s79mgF;
    short  LXne3xh;
    short  D2gbA7;
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *devBMcmLWY7w;
};
struct   YyxLink {
    int SdfI4uATt;
    struct   YyxNode *Wp9fdkI0W;
    struct   YyxNode *Lv87kxFXiE;
};
struct   YyxLink *XnlvogDTxA () {
    struct   YyxLink *aWJXvNjrSb;
    if ((aWJXvNjrSb = (struct   YyxLink *) malloc (sizeof (struct   YyxLink))) == NULL) {
        exit (-(646 - 645));
        printf ("Error: memory out! (1)\n");
    }
    aWJXvNjrSb->SdfI4uATt = (18 - 18);
    aWJXvNjrSb->Wp9fdkI0W = NULL;
    aWJXvNjrSb->Lv87kxFXiE = NULL;
    return aWJXvNjrSb;
}

struct   YyxLink *EDLvbGBp (struct   YyxLink *Udg04bIPs, const  struct   record *YaG3Qnk87wmc) {
    struct   YyxNode *PmZNQr2I;
    if ((PmZNQr2I = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))) == NULL) {
        exit (-(332 - 331));
        printf ("Error: memory out! (2)\n");
    }
    PmZNQr2I->m_rec = *YaG3Qnk87wmc;
    PmZNQr2I->devBMcmLWY7w = NULL;
    if (Udg04bIPs->SdfI4uATt == (343 - 343)) {
        Udg04bIPs->Wp9fdkI0W = PmZNQr2I;
        Udg04bIPs->Lv87kxFXiE = PmZNQr2I;
    }
    else {
        Udg04bIPs->Lv87kxFXiE->devBMcmLWY7w = PmZNQr2I;
        Udg04bIPs->Lv87kxFXiE = PmZNQr2I;
    }
    Udg04bIPs->SdfI4uATt++;
    return Udg04bIPs;
}

int lA0Nai (const  struct   record *QsqcitYm9S, const  struct   record *Y2nQEHel) {
    return Y2nQEHel->D2gbA7 - QsqcitYm9S->D2gbA7;
}

struct   YyxNode *bG3Ui8NbZu (struct   YyxLink *Udg04bIPs, const  struct   record *YaG3Qnk87wmc) {
    struct   YyxNode *GthQ8BcK1X = Udg04bIPs->Wp9fdkI0W;
    for (; GthQ8BcK1X != NULL &&lA0Nai (&GthQ8BcK1X->m_rec, YaG3Qnk87wmc);)
        GthQ8BcK1X = GthQ8BcK1X->devBMcmLWY7w;
    return GthQ8BcK1X;
}

struct   YyxLink *xIwY5cpMO (struct   YyxLink *Udg04bIPs) {
    struct   YyxNode *AmKu6RGt = Udg04bIPs->Wp9fdkI0W;
    struct   YyxNode *gXOSGQNguh;
    for (; AmKu6RGt != NULL;) {
        free (AmKu6RGt);
        gXOSGQNguh = AmKu6RGt->devBMcmLWY7w;
        AmKu6RGt = gXOSGQNguh;
    }
    Udg04bIPs->SdfI4uATt = (546 - 546);
    Udg04bIPs->Wp9fdkI0W = NULL;
    Udg04bIPs->Lv87kxFXiE = NULL;
    return Udg04bIPs;
}

int main () {
    int SdfI4uATt;
    int scHAOs34yK;
    struct   YyxNode *AVJ5H7v;
    struct   YyxLink *WvLNtgDpsEH;
    free (xIwY5cpMO (WvLNtgDpsEH));
    struct   record stu;
    struct   record *VVZGJx0uXag, *CzSXC1, *d4pJfeaYSZR;
    scanf ("%d", &SdfI4uATt);
    WvLNtgDpsEH = XnlvogDTxA ();
    {
        scHAOs34yK = (494 - 140) - (420 - 66);
        for (; scHAOs34yK < SdfI4uATt;) {
            scHAOs34yK++;
            scanf ("%d %d %d", &stu.w6pYrO0IDdaq, &stu.iPj43s79mgF, &stu.LXne3xh);
            stu.D2gbA7 = stu.iPj43s79mgF + stu.LXne3xh;
            EDLvbGBp (WvLNtgDpsEH, &stu);
        }
    }
    VVZGJx0uXag = CzSXC1 = d4pJfeaYSZR = &WvLNtgDpsEH->Wp9fdkI0W->m_rec;
    AVJ5H7v = WvLNtgDpsEH->Wp9fdkI0W;
    for (; AVJ5H7v != NULL;) {
        if (VVZGJx0uXag->D2gbA7 < AVJ5H7v->m_rec.D2gbA7)
            VVZGJx0uXag = &AVJ5H7v->m_rec;
        AVJ5H7v = AVJ5H7v->devBMcmLWY7w;
    }
    AVJ5H7v = WvLNtgDpsEH->Wp9fdkI0W;
    if (CzSXC1 == VVZGJx0uXag) {
        AVJ5H7v = WvLNtgDpsEH->Wp9fdkI0W->devBMcmLWY7w;
        CzSXC1 = &AVJ5H7v->m_rec;
    }
    for (; AVJ5H7v != NULL;) {
        if (CzSXC1->D2gbA7 < AVJ5H7v->m_rec.D2gbA7)
            if (VVZGJx0uXag != &AVJ5H7v->m_rec)
                CzSXC1 = &AVJ5H7v->m_rec;
        AVJ5H7v = AVJ5H7v->devBMcmLWY7w;
    }
    AVJ5H7v = WvLNtgDpsEH->Wp9fdkI0W;
    for (; &AVJ5H7v->m_rec == VVZGJx0uXag || &AVJ5H7v->m_rec == CzSXC1;)
        AVJ5H7v = AVJ5H7v->devBMcmLWY7w;
    d4pJfeaYSZR = &AVJ5H7v->m_rec;
    for (; AVJ5H7v != NULL;) {
        if (d4pJfeaYSZR->D2gbA7 < AVJ5H7v->m_rec.D2gbA7)
            if (VVZGJx0uXag != &AVJ5H7v->m_rec && CzSXC1 != &AVJ5H7v->m_rec)
                d4pJfeaYSZR = &AVJ5H7v->m_rec;
        AVJ5H7v = AVJ5H7v->devBMcmLWY7w;
    }
    printf ("%d %d\n", VVZGJx0uXag->w6pYrO0IDdaq, VVZGJx0uXag->D2gbA7);
    printf ("%d %d\n", CzSXC1->w6pYrO0IDdaq, CzSXC1->D2gbA7);
    printf ("%d %d\n", d4pJfeaYSZR->w6pYrO0IDdaq, d4pJfeaYSZR->D2gbA7);
    return (671 - 671);
}

