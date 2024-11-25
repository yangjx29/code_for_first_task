struct   student {
    char PmPWoQOAGV [(1096 - 596)];
    struct   student *yiXHO8;
    struct   student *j9OBE43;
};
struct   student *zwt627nL (void ) {
    struct   student *kwq0WL34yrZM;
    struct   student *ofLH5pmtFRQ1;
    struct   student *bxBwtT;
    ofLH5pmtFRQ1 = bxBwtT = (struct   student *) malloc (LEN);
    gets (ofLH5pmtFRQ1->PmPWoQOAGV);
    ofLH5pmtFRQ1->j9OBE43 = NULL;
    kwq0WL34yrZM = ofLH5pmtFRQ1;
    for (; strcmp (ofLH5pmtFRQ1->PmPWoQOAGV, "end") != (231 - 231);) {
        bxBwtT = ofLH5pmtFRQ1;
        ofLH5pmtFRQ1 = (struct   student *) malloc (LEN);
        gets (ofLH5pmtFRQ1->PmPWoQOAGV);
        bxBwtT->yiXHO8 = ofLH5pmtFRQ1;
        ofLH5pmtFRQ1->j9OBE43 = bxBwtT;
    }
    bxBwtT->yiXHO8 = NULL;
    kwq0WL34yrZM = bxBwtT;
    return (kwq0WL34yrZM);
}

void  main () {
    struct   student *XuazCPc;
    struct   student *kwq0WL34yrZM;
    kwq0WL34yrZM = zwt627nL ();
    XuazCPc = kwq0WL34yrZM;
    for (; XuazCPc->j9OBE43 != NULL;) {
        printf ("%s\n", XuazCPc->PmPWoQOAGV);
        XuazCPc = XuazCPc->j9OBE43;
    }
    printf ("%s", XuazCPc->PmPWoQOAGV);
}

