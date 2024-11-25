int kdOPpMyAT, Fm1gLlyKV, cVD1e0w4;
struct   st {
    char pXTf1EC [(883 - 863)];
    int Vp6NRVzLD;
    struct   st *VAepoiwM4jQC;
}
*e1d0OatbDK, *t2JQcHeP7Z, *rUyvwbRjlJP, *gvW8h1rHO, *vPb7t4;

void  main () {
    void  P0STxm (struct   st *);
    P0STxm (gvW8h1rHO);
    scanf ("%d", &cVD1e0w4);
    e1d0OatbDK = t2JQcHeP7Z = gvW8h1rHO = (struct   st *) malloc (sizeof (struct   st));
    rUyvwbRjlJP = gvW8h1rHO;
    for (kdOPpMyAT = (229 - 229); cVD1e0w4 > kdOPpMyAT; kdOPpMyAT = kdOPpMyAT + 1) {
        scanf ("%s %d", e1d0OatbDK->pXTf1EC, &e1d0OatbDK->Vp6NRVzLD);
        e1d0OatbDK = (struct   st *) malloc (sizeof (struct   st));
        t2JQcHeP7Z->VAepoiwM4jQC = e1d0OatbDK;
        t2JQcHeP7Z = e1d0OatbDK;
    }
    for (kdOPpMyAT = (331 - 331); kdOPpMyAT < cVD1e0w4; kdOPpMyAT++) {
        printf ("%s\n", rUyvwbRjlJP->pXTf1EC);
        rUyvwbRjlJP = rUyvwbRjlJP->VAepoiwM4jQC;
    }
}

void  P0STxm (struct   st *rUyvwbRjlJP) {
    for (kdOPpMyAT = (60 - 60); cVD1e0w4 - (618 - 617) > kdOPpMyAT; kdOPpMyAT++) {
        vPb7t4 = e1d0OatbDK = t2JQcHeP7Z = gvW8h1rHO;
        e1d0OatbDK = e1d0OatbDK->VAepoiwM4jQC;
        for (Fm1gLlyKV = (506 - 506); cVD1e0w4 - (855 - 854) - kdOPpMyAT > Fm1gLlyKV; Fm1gLlyKV++) {
            if (t2JQcHeP7Z->Vp6NRVzLD < e1d0OatbDK->Vp6NRVzLD && 60 <= e1d0OatbDK->Vp6NRVzLD) {
                if (Fm1gLlyKV == 0) {
                    t2JQcHeP7Z->VAepoiwM4jQC = e1d0OatbDK->VAepoiwM4jQC;
                    e1d0OatbDK->VAepoiwM4jQC = t2JQcHeP7Z;
                    gvW8h1rHO = vPb7t4 = e1d0OatbDK;
                }
                else {
                    t2JQcHeP7Z->VAepoiwM4jQC = e1d0OatbDK->VAepoiwM4jQC;
                    e1d0OatbDK->VAepoiwM4jQC = t2JQcHeP7Z;
                    vPb7t4->VAepoiwM4jQC = e1d0OatbDK;
                }
            }
            if (Fm1gLlyKV != 0)
                vPb7t4 = vPb7t4->VAepoiwM4jQC;
            t2JQcHeP7Z = vPb7t4->VAepoiwM4jQC;
            e1d0OatbDK = t2JQcHeP7Z->VAepoiwM4jQC;
        }
    }
}

