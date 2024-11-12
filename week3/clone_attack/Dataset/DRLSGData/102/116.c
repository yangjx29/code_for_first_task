int UhdFW0Qt69 (const  void  *l0t6LM58ExJ, const  void  *phUQWd5) {
    float *XcmSY70np8i;
    float *QcGOqSm4I;
    XcmSY70np8i = (float *) phUQWd5;
    QcGOqSm4I = (float *) l0t6LM58ExJ;
    if ((661 - 661) <= (*QcGOqSm4I) - (*XcmSY70np8i))
        return (140 - 139);
    else
        return -(946 - 945);
}

int OsaoHkAyfq (const  void  *l0t6LM58ExJ, const  void  *phUQWd5) {
    float *QcGOqSm4I;
    float *XcmSY70np8i;
    XcmSY70np8i = (float *) phUQWd5;
    QcGOqSm4I = (float *) l0t6LM58ExJ;
    if ((90 - 90) <= (*XcmSY70np8i) - (*QcGOqSm4I))
        return (581 - 580);
    else
        return -(408 - 407);
}

struct   person {
    char BT9G6O2w [(262 - 252)];
    float yLKBTaj0;
}
e6P3BRC [(736 - 696)];

main () {
    int Z4dx9l;
    int fS8dav;
    int j;
    float V52gmPTJ [(50 - 10)];
    int m25ayX;
    int B60jhZ3vL;
    float Yrw0Og2 [(523 - 483)];
    fS8dav = (943 - 943);
    B60jhZ3vL = (594 - 594);
    getchar ();
    getchar ();
    scanf ("%d", &Z4dx9l);
    {
        m25ayX = (1779 - 936) - 843;
        for (; Z4dx9l > m25ayX;) {
            scanf ("%s %f", e6P3BRC[m25ayX].BT9G6O2w, &e6P3BRC[m25ayX].yLKBTaj0);
            if (!((629 - 629) != strcmp (e6P3BRC[m25ayX].BT9G6O2w, "male"))) {
                V52gmPTJ[B60jhZ3vL] = e6P3BRC[m25ayX].yLKBTaj0;
                B60jhZ3vL = B60jhZ3vL +(854 - 853);
            }
            else {
                if (!((355 - 355) != strcmp (e6P3BRC[m25ayX].BT9G6O2w, "female"))) {
                    Yrw0Og2[fS8dav] = e6P3BRC[m25ayX].yLKBTaj0;
                    fS8dav = fS8dav + (828 - 827);
                }
            }
            m25ayX = m25ayX + (754 - 753);
        }
    }
    qsort (V52gmPTJ, B60jhZ3vL, sizeof (float), UhdFW0Qt69);
    qsort (Yrw0Og2, fS8dav, sizeof (float), OsaoHkAyfq);
    {
        m25ayX = (482 - 482);
        for (; m25ayX < B60jhZ3vL;) {
            printf ("%1.2f ", V52gmPTJ[m25ayX]);
            m25ayX = m25ayX + (635 - 634);
        }
    }
    {
        m25ayX = (105 - 105);
        for (; fS8dav > m25ayX;) {
            if (fS8dav - (992 - 991) > m25ayX)
                printf ("%1.2f ", Yrw0Og2[m25ayX]);
            else
                printf ("%1.2f", Yrw0Og2[m25ayX]);
            m25ayX = m25ayX + 1;
        }
    }
}

