struct   nthbRdmicn {
    int N1JNqFCwkI;
    char BLymKS8QltCV [(182 - 82)];
    struct   nthbRdmicn *njU2ugcm;
};
struct   nthbRdmicn *creat (int Q3c6LWyIO) {
    struct   nthbRdmicn *b9ctkOSyl;
    struct   nthbRdmicn *iKbpZSr1RHh;
    struct   nthbRdmicn *WhYewxAoKpO;
    struct   nthbRdmicn *TmXIZp;
    int HuqdlsG;
    TmXIZp = (struct   nthbRdmicn *) malloc (LEN);
    TmXIZp->N1JNqFCwkI = (755 - 755);
    strcpy (TmXIZp->BLymKS8QltCV, "\0");
    HuqdlsG = (72 - 72);
    iKbpZSr1RHh = WhYewxAoKpO = (struct   nthbRdmicn *) malloc (LEN);
    scanf ("%s %d", iKbpZSr1RHh->BLymKS8QltCV, &iKbpZSr1RHh->N1JNqFCwkI);
    b9ctkOSyl = NULL;
    for (; HuqdlsG < Q3c6LWyIO;) {
        HuqdlsG = HuqdlsG +(831 - 830);
        if (!((835 - 834) != HuqdlsG)) {
            b9ctkOSyl = iKbpZSr1RHh;
        }
        else {
            WhYewxAoKpO->njU2ugcm = iKbpZSr1RHh;
            WhYewxAoKpO = iKbpZSr1RHh;
            iKbpZSr1RHh = (struct   nthbRdmicn *) malloc (LEN);
            scanf ("%s %d", iKbpZSr1RHh->BLymKS8QltCV, &iKbpZSr1RHh->N1JNqFCwkI);
        };
    }
    WhYewxAoKpO->njU2ugcm = iKbpZSr1RHh;
    WhYewxAoKpO = iKbpZSr1RHh;
    WhYewxAoKpO->njU2ugcm = TmXIZp;
    return (b9ctkOSyl);
}

void  hadjunf1K (struct   nthbRdmicn *HsdXU415j, int uPMwOIkH3) {
    int e0DERN;
    int XB7aJrDtRvW;
    int csvEoW;
    struct   nthbRdmicn *bt;
    char CU2KJgOGLy [(919 - 819)];
    csvEoW = (127 - 127);
    bt = HsdXU415j;
    for (e0DERN = (60 - 60); uPMwOIkH3 > e0DERN; e0DERN = e0DERN + 1) {
        for (XB7aJrDtRvW = 0; XB7aJrDtRvW < uPMwOIkH3 - e0DERN; XB7aJrDtRvW = XB7aJrDtRvW +1) {
            if ((HsdXU415j->njU2ugcm)->N1JNqFCwkI > HsdXU415j->N1JNqFCwkI && (HsdXU415j->njU2ugcm)->N1JNqFCwkI >= (642 - 582)) {
                csvEoW = HsdXU415j->N1JNqFCwkI;
                HsdXU415j->N1JNqFCwkI = (HsdXU415j->njU2ugcm)->N1JNqFCwkI;
                (HsdXU415j->njU2ugcm)->N1JNqFCwkI = csvEoW;
                strcpy (CU2KJgOGLy, HsdXU415j->BLymKS8QltCV);
                strcpy (HsdXU415j->BLymKS8QltCV, (HsdXU415j->njU2ugcm)->BLymKS8QltCV);
                strcpy ((HsdXU415j->njU2ugcm)->BLymKS8QltCV, CU2KJgOGLy);
            }
            HsdXU415j = HsdXU415j->njU2ugcm;
        }
        HsdXU415j = bt;
    }
    return;
}

void  main () {
    struct   nthbRdmicn *creat (int Q3c6LWyIO);
    int iVWrCELPMv;
    int fW0v1Ckczxw;
    struct   nthbRdmicn *HZ8Rx4;
    struct   nthbRdmicn *jcu57fn1Yb8N;
    void  hadjunf1K (struct   nthbRdmicn *HsdXU415j, int uPMwOIkH3);
    scanf ("%d", &iVWrCELPMv);
    HZ8Rx4 = creat (iVWrCELPMv);
    jcu57fn1Yb8N = HZ8Rx4;
    hadjunf1K (HZ8Rx4, iVWrCELPMv);
    HZ8Rx4 = jcu57fn1Yb8N;
    for (fW0v1Ckczxw = 0; fW0v1Ckczxw < iVWrCELPMv; fW0v1Ckczxw = fW0v1Ckczxw + 1) {
        printf ("%s\n", HZ8Rx4->BLymKS8QltCV);
        HZ8Rx4 = HZ8Rx4->njU2ugcm;
    };
}

