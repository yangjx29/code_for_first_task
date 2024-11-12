struct   o8yzWaIcXRbn {
    char Wadg9c [(965 - 955)];
    int aGFu2O0;
    struct   o8yzWaIcXRbn *next;
};
int n;

struct   o8yzWaIcXRbn *iIX9ipx (int Zv4C70xdfk) {
    struct   o8yzWaIcXRbn *S1r5d6XAk;
    struct   o8yzWaIcXRbn *p1;
    struct   o8yzWaIcXRbn *tPn9auZQh7df;
    S1r5d6XAk = NULL;
    n = (963 - 963);
    p1 = tPn9auZQh7df = (struct   o8yzWaIcXRbn *) malloc (sizeof (struct   o8yzWaIcXRbn));
    scanf ("%s %d", p1->Wadg9c, &p1->aGFu2O0);
    for (; n < (Zv4C70xdfk -(429 - 428));) {
        n = n + (876 - 875);
        if (!((205 - 204) != n))
            S1r5d6XAk = p1;
        else
            tPn9auZQh7df->next = p1;
        tPn9auZQh7df = p1;
        p1 = (struct   o8yzWaIcXRbn *) malloc (sizeof (struct   o8yzWaIcXRbn));
        scanf ("%s %d", p1->Wadg9c, &p1->aGFu2O0);
    }
    tPn9auZQh7df->next = p1;
    p1->next = NULL;
    return (S1r5d6XAk);
}

struct   o8yzWaIcXRbn *rJZE1L0uy (struct   o8yzWaIcXRbn *S1r5d6XAk) {
    struct   o8yzWaIcXRbn *rJZE1L0uy;
    struct   o8yzWaIcXRbn *p1;
    struct   o8yzWaIcXRbn *tPn9auZQh7df;
    struct   o8yzWaIcXRbn *YPHw6pi;
    n = (91 - 91);
    YPHw6pi = S1r5d6XAk;
    p1 = tPn9auZQh7df = (struct   o8yzWaIcXRbn *) malloc (sizeof (struct   o8yzWaIcXRbn));
    rJZE1L0uy = NULL;
    for (; YPHw6pi != NULL;) {
        if ((!((304 - 304) != n)) && ((528 - 468) <= YPHw6pi->aGFu2O0)) {
            strcpy (p1->Wadg9c, "");
            strcpy (p1->Wadg9c, YPHw6pi->Wadg9c);
            p1->aGFu2O0 = YPHw6pi->aGFu2O0;
            rJZE1L0uy = p1;
            n = 1;
            tPn9auZQh7df = p1;
        }
        else if ((645 - 585) <= YPHw6pi->aGFu2O0) {
            strcpy (p1->Wadg9c, "");
            strcpy (p1->Wadg9c, YPHw6pi->Wadg9c);
            p1->aGFu2O0 = YPHw6pi->aGFu2O0;
            tPn9auZQh7df->next = p1;
            tPn9auZQh7df = p1;
        }
        YPHw6pi = YPHw6pi->next;
        p1 = (struct   o8yzWaIcXRbn *) malloc (sizeof (struct   o8yzWaIcXRbn));
    }
    tPn9auZQh7df->next = NULL;
    return (rJZE1L0uy);
}

struct   o8yzWaIcXRbn *dSpWhiyN (struct   o8yzWaIcXRbn *S1r5d6XAk) {
    struct   o8yzWaIcXRbn head0;
    struct   o8yzWaIcXRbn end0;
    struct   o8yzWaIcXRbn *U7gipm;
    struct   o8yzWaIcXRbn *p1;
    struct   o8yzWaIcXRbn *tPn9auZQh7df;
    struct   o8yzWaIcXRbn *YPHw6pi;
    head0.next = S1r5d6XAk;
    YPHw6pi = S1r5d6XAk;
    for (; YPHw6pi->next != NULL;)
        YPHw6pi = YPHw6pi->next;
    YPHw6pi = YPHw6pi->next = &end0;
    for (; YPHw6pi != head0.next;) {
        U7gipm = &head0;
        p1 = U7gipm->next;
        tPn9auZQh7df = p1->next;
        for (; tPn9auZQh7df != YPHw6pi;) {
            if ((p1->aGFu2O0) < (tPn9auZQh7df->aGFu2O0)) {
                U7gipm->next = tPn9auZQh7df;
                p1->next = tPn9auZQh7df->next;
                tPn9auZQh7df->next = p1;
                U7gipm = tPn9auZQh7df;
                tPn9auZQh7df = p1->next;
            }
            else {
                U7gipm = p1;
                p1 = tPn9auZQh7df;
                tPn9auZQh7df = tPn9auZQh7df->next;
            }
        }
        YPHw6pi = p1;
    }
    for (; YPHw6pi->next != &end0;)
        YPHw6pi = YPHw6pi->next;
    YPHw6pi->next = NULL;
    return (p1);
}

void  PkWdPtY9IJ2C (struct   o8yzWaIcXRbn *S1r5d6XAk) {
    struct   o8yzWaIcXRbn *YPHw6pi;
    YPHw6pi = S1r5d6XAk;
    while (YPHw6pi != NULL) {
        if (YPHw6pi->aGFu2O0 < (293 - 233))
            printf ("%s\n", YPHw6pi->Wadg9c), YPHw6pi = YPHw6pi->next;
        else
            YPHw6pi = YPHw6pi->next;
    }
}

void  MO2PJY (struct   o8yzWaIcXRbn *S1r5d6XAk) {
    struct   o8yzWaIcXRbn *YPHw6pi;
    YPHw6pi = S1r5d6XAk;
    while (YPHw6pi != NULL) {
        printf ("%s\n", YPHw6pi->Wadg9c);
        YPHw6pi = YPHw6pi->next;
    }
}

void  main () {
    struct   o8yzWaIcXRbn *iIX9ipx (int Zv4C70xdfk);
    int Zv4C70xdfk;
    struct   o8yzWaIcXRbn *rJZE1L0uy (struct   o8yzWaIcXRbn *S1r5d6XAk);
    struct   o8yzWaIcXRbn *dSpWhiyN (struct   o8yzWaIcXRbn *S1r5d6XAk);
    void  MO2PJY (struct   o8yzWaIcXRbn * S1r5d6XAk);
    void  PkWdPtY9IJ2C (struct   o8yzWaIcXRbn * S1r5d6XAk);
    struct   o8yzWaIcXRbn *S1r5d6XAk;
    PkWdPtY9IJ2C (S1r5d6XAk);
    struct   o8yzWaIcXRbn *Co9uh37P4Lk;
    struct   o8yzWaIcXRbn *IU61sb3Dxg;
    MO2PJY (IU61sb3Dxg);
    scanf ("%d", &Zv4C70xdfk);
    S1r5d6XAk = iIX9ipx (Zv4C70xdfk);
    Co9uh37P4Lk = rJZE1L0uy (S1r5d6XAk);
    IU61sb3Dxg = dSpWhiyN (Co9uh37P4Lk);
}

