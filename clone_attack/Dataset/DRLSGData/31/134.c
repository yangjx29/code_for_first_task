void  main () {
    struct   st {
        char iKpyIkxCUSrm [(818 - 318)];
        char MwpOL6 [(1152 - 652)];
        char EXg2WLd;
        int MjSCglLV;
        double  TVjMwU;
        char lv3KY4RQCkm [(1132 - 632)];
        struct   st *nJa4hQZ5IYEr;
    }
    *apGj9Kck3;
    struct   st {
        char iKpyIkxCUSrm [(1361 - 861)];
        char MwpOL6 [(1478 - 978)];
        char EXg2WLd;
        int MjSCglLV;
        double  TVjMwU;
        char lv3KY4RQCkm [(668 - 168)];
        struct   st *nJa4hQZ5IYEr;
    }
    *ytkI2NR;
    struct   st {
        char iKpyIkxCUSrm [(1090 - 590)];
        char MwpOL6 [(856 - 356)];
        char EXg2WLd;
        int MjSCglLV;
        double  TVjMwU;
        char lv3KY4RQCkm [(864 - 364)];
        struct   st *nJa4hQZ5IYEr;
    }
    *Uuyei7rE;
    Uuyei7rE = NULL;
    for (; (353 - 352);) {
        ytkI2NR = (struct   st *) malloc (sizeof (struct   st));
        ytkI2NR->nJa4hQZ5IYEr = Uuyei7rE;
        Uuyei7rE = ytkI2NR;
        scanf ("%s", ytkI2NR->iKpyIkxCUSrm);
        if (!((290 - 290) != strcmp ("end", ytkI2NR->iKpyIkxCUSrm))) {
            apGj9Kck3 = ytkI2NR->nJa4hQZ5IYEr;
            break;
        }
        scanf ("%s %c %d %lf %s", ytkI2NR->MwpOL6, &ytkI2NR->EXg2WLd, &ytkI2NR->MjSCglLV, &ytkI2NR->TVjMwU, ytkI2NR->lv3KY4RQCkm);
    }
    for (; apGj9Kck3 != NULL;) {
        printf ("%s %s %c %d %g %s\n", apGj9Kck3->iKpyIkxCUSrm, apGj9Kck3->MwpOL6, apGj9Kck3->EXg2WLd, apGj9Kck3->MjSCglLV, apGj9Kck3->TVjMwU, apGj9Kck3->lv3KY4RQCkm);
        apGj9Kck3 = apGj9Kck3->nJa4hQZ5IYEr;
    }
}

