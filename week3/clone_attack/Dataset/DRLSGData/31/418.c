struct   stu {
    char HRb3ktM [(1720 - 720)];
    struct   stu *ckUbyamEtw;
}
*mU2FD45, *i5TFL3qN9zI;

struct   stu *MtpufQnz9N1 (void ) {
    struct   stu *olRmiTbACsF = NULL;
    i5TFL3qN9zI = mU2FD45 = (struct   stu *) malloc (sizeof (struct   stu));
    gets (mU2FD45->HRb3ktM);
    for (; strcmp (mU2FD45->HRb3ktM, "end");) {
        if (!(NULL != olRmiTbACsF))
            olRmiTbACsF = mU2FD45;
        else
            i5TFL3qN9zI->ckUbyamEtw = mU2FD45;
        i5TFL3qN9zI = mU2FD45;
        mU2FD45 = (struct   stu *) malloc (sizeof (struct   stu));
        gets (mU2FD45->HRb3ktM);
    }
    i5TFL3qN9zI->ckUbyamEtw = NULL;
    return (olRmiTbACsF);
}

struct   stu *QbPgixwYf6 (struct   stu *olRmiTbACsF) {
    struct   stu *oJgy8v;
    struct   stu *cLfasx = NULL;
    do {
        i5TFL3qN9zI = NULL;
        mU2FD45 = olRmiTbACsF;
        for (; mU2FD45->ckUbyamEtw != NULL;) {
            i5TFL3qN9zI = mU2FD45;
            mU2FD45 = mU2FD45->ckUbyamEtw;
        }
        if (!(NULL != cLfasx))
            cLfasx = mU2FD45, oJgy8v = cLfasx->ckUbyamEtw = i5TFL3qN9zI;
        oJgy8v = oJgy8v->ckUbyamEtw = i5TFL3qN9zI;
        i5TFL3qN9zI->ckUbyamEtw = NULL;
    }
    while (olRmiTbACsF->ckUbyamEtw != NULL);
    return (cLfasx);
}

void  main () {
    struct   stu *olRmiTbACsF;
    olRmiTbACsF = MtpufQnz9N1 ();
    olRmiTbACsF = QbPgixwYf6 (olRmiTbACsF);
    {
        mU2FD45 = olRmiTbACsF;
        for (; mU2FD45 != NULL;) {
            printf ("%s\n", mU2FD45->HRb3ktM);
            mU2FD45 = mU2FD45->ckUbyamEtw;
        }
    }
}

