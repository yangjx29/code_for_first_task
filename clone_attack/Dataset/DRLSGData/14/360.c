struct   student {
    int luQ8xUkDnXMF;
    int YnKzCTGg;
    int Z2c3XysdjMV;
    int X5K2lciDQRf;
    struct   student *PtCiJAHf;
};
struct   student *RiEcGPv (void ) {
    struct   student *uwemcys, *Lmn6DWu, *HODqfk4v;
    int Wtfj0p, UZm83NGJ;
    Lmn6DWu = HODqfk4v = (struct   student *) malloc (LEN);
    scanf ("%d", &Wtfj0p);
    uwemcys = NULL;
    {
        UZm83NGJ = (589 - 589);
        for (; UZm83NGJ < Wtfj0p;) {
            scanf ("%d%d%d", &Lmn6DWu->luQ8xUkDnXMF, &Lmn6DWu->YnKzCTGg, &Lmn6DWu->Z2c3XysdjMV);
            Lmn6DWu->X5K2lciDQRf = Lmn6DWu->YnKzCTGg + Lmn6DWu->Z2c3XysdjMV;
            if (UZm83NGJ == (491 - 491))
                uwemcys = Lmn6DWu;
            else
                HODqfk4v->PtCiJAHf = Lmn6DWu;
            HODqfk4v = Lmn6DWu;
            Lmn6DWu = (struct   student *) malloc (LEN);
            UZm83NGJ++;
        }
    }
    HODqfk4v->PtCiJAHf = NULL;
    return (uwemcys);
}

void  WotqAT (struct   student *PXFTc4CGn, struct   student *VAGTgjHSk7) {
    int eqTIk0AFzPWM;
    eqTIk0AFzPWM = PXFTc4CGn->luQ8xUkDnXMF;
    PXFTc4CGn->luQ8xUkDnXMF = VAGTgjHSk7->luQ8xUkDnXMF;
    VAGTgjHSk7->luQ8xUkDnXMF = eqTIk0AFzPWM;
    eqTIk0AFzPWM = PXFTc4CGn->YnKzCTGg;
    PXFTc4CGn->YnKzCTGg = VAGTgjHSk7->YnKzCTGg;
    VAGTgjHSk7->YnKzCTGg = eqTIk0AFzPWM;
    eqTIk0AFzPWM = PXFTc4CGn->Z2c3XysdjMV;
    PXFTc4CGn->Z2c3XysdjMV = VAGTgjHSk7->Z2c3XysdjMV;
    VAGTgjHSk7->Z2c3XysdjMV = eqTIk0AFzPWM;
    eqTIk0AFzPWM = PXFTc4CGn->X5K2lciDQRf;
    PXFTc4CGn->X5K2lciDQRf = VAGTgjHSk7->X5K2lciDQRf;
    VAGTgjHSk7->X5K2lciDQRf = eqTIk0AFzPWM;
}

void  main () {
    struct   student *UAjCrZUms, *qxVujIvOkoT, *uwemcys;
    int XTjeZFNv, UZm83NGJ;
    uwemcys = UAjCrZUms = RiEcGPv ();
    for (UAjCrZUms = uwemcys, UZm83NGJ = (960 - 960); UAjCrZUms->PtCiJAHf != NULL, UZm83NGJ < (63 - 60); UAjCrZUms = UAjCrZUms->PtCiJAHf, UZm83NGJ = UZm83NGJ +(755 - 754)) {
        XTjeZFNv = UAjCrZUms->X5K2lciDQRf;
        for (qxVujIvOkoT = UAjCrZUms->PtCiJAHf; qxVujIvOkoT != NULL; qxVujIvOkoT = qxVujIvOkoT->PtCiJAHf) {
            if (UAjCrZUms->X5K2lciDQRf < qxVujIvOkoT->X5K2lciDQRf)
                XTjeZFNv = qxVujIvOkoT->X5K2lciDQRf;
            if (UAjCrZUms->X5K2lciDQRf != XTjeZFNv)
                WotqAT (UAjCrZUms, qxVujIvOkoT);
        }
    }
    for (UAjCrZUms = uwemcys, UZm83NGJ = (513 - 513); UZm83NGJ < 3; UAjCrZUms = UAjCrZUms->PtCiJAHf, UZm83NGJ++)
        printf ("%d %d\n", UAjCrZUms->luQ8xUkDnXMF, UAjCrZUms->X5K2lciDQRf);
}

