void  main () {
    struct   stu {
        char ZPGOp5EF [(916 - 895)];
        char uGxp07rf [(865 - 834)];
        char N1obT2djOt9 [(995 - 993)];
        int mLpH46aZ7;
        float fEPkR7s;
        char oTltEU [(162 - 131)];
        struct   stu *PzqAk7O;
        struct   stu *aqC4TY;
    };
    struct   stu *ucmaZtF1, *DmCrdVnNQJe, *XGv1kgOI30W, *Pt50Q8kR;
    ucmaZtF1 = (struct   stu *) malloc (sizeof (struct   stu));
    DmCrdVnNQJe = ucmaZtF1;
    XGv1kgOI30W = DmCrdVnNQJe;
    DmCrdVnNQJe->aqC4TY = NULL;
    scanf ("%s", &DmCrdVnNQJe->ZPGOp5EF);
    if (strcmp (DmCrdVnNQJe->ZPGOp5EF, "end")) {
        free (DmCrdVnNQJe);
        for (; strcmp (DmCrdVnNQJe->ZPGOp5EF, "end");) {
            scanf ("%s", &DmCrdVnNQJe->uGxp07rf);
            scanf ("%s", &DmCrdVnNQJe->N1obT2djOt9);
            scanf ("%d", &DmCrdVnNQJe->mLpH46aZ7);
            scanf ("%f", &DmCrdVnNQJe->fEPkR7s);
            scanf ("%s", &DmCrdVnNQJe->oTltEU);
            XGv1kgOI30W = (struct   stu *) malloc (sizeof (struct   stu));
            DmCrdVnNQJe->PzqAk7O = XGv1kgOI30W;
            XGv1kgOI30W->aqC4TY = DmCrdVnNQJe;
            DmCrdVnNQJe = XGv1kgOI30W;
            scanf ("%s", &DmCrdVnNQJe->ZPGOp5EF);
        }
        Pt50Q8kR = DmCrdVnNQJe->aqC4TY;
        Pt50Q8kR->PzqAk7O = NULL;
        DmCrdVnNQJe = Pt50Q8kR;
        XGv1kgOI30W = DmCrdVnNQJe;
        for (; DmCrdVnNQJe != NULL;) {
            printf ("%s %s %s %d %g %s\n", DmCrdVnNQJe->ZPGOp5EF, DmCrdVnNQJe->uGxp07rf, DmCrdVnNQJe->N1obT2djOt9, DmCrdVnNQJe->mLpH46aZ7, DmCrdVnNQJe->fEPkR7s, DmCrdVnNQJe->oTltEU);
            XGv1kgOI30W = DmCrdVnNQJe->aqC4TY;
            DmCrdVnNQJe = XGv1kgOI30W;
        }
        DmCrdVnNQJe = ucmaZtF1;
        XGv1kgOI30W = DmCrdVnNQJe;
        for (; DmCrdVnNQJe != NULL;) {
            free (DmCrdVnNQJe);
            XGv1kgOI30W = DmCrdVnNQJe->PzqAk7O;
            DmCrdVnNQJe = XGv1kgOI30W;
        }
    }
    else
        free (ucmaZtF1);
}

