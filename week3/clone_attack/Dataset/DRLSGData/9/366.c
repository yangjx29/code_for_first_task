struct   patient {
    int MxbO51u;
    char BRxefjPEayqM [(759 - 749)];
    struct   patient *shxuMCKlnqRw;
};
main () {
    int GTW5MDJmL, pZazIvPTR, WUweD6t, vWBc7GT = (921 - 921), YvC0auRbe = (781 - 781);
    struct   patient *ldTcstGh, *YnFzTwo3Q4J, *FqfRvTpM = NULL, *p8xKY7 = NULL, *qGNZPIBnTKo, *KpE0qPXJ, *oVqv79zMOo, *HP7ht0kWYKe;
    scanf ("%d", &GTW5MDJmL);
    {
        pZazIvPTR = (474 - 474);
        while (pZazIvPTR < GTW5MDJmL) {
            ldTcstGh = (struct   patient *) malloc (LEN);
            scanf ("%s %d", ldTcstGh->BRxefjPEayqM, &ldTcstGh->MxbO51u);
            qGNZPIBnTKo = ldTcstGh;
            if ((637 - 577) <= ldTcstGh->MxbO51u) {
                if (!(NULL != FqfRvTpM)) {
                    FqfRvTpM = ldTcstGh;
                    YnFzTwo3Q4J = ldTcstGh;
                    ldTcstGh->shxuMCKlnqRw = NULL;
                }
                else {
                    vWBc7GT = vWBc7GT + (875 - 874);
                    oVqv79zMOo = FqfRvTpM;
                    HP7ht0kWYKe = FqfRvTpM;
                    {
                        WUweD6t = 0;
                        for (; vWBc7GT > WUweD6t;) {
                            if (oVqv79zMOo->MxbO51u < ldTcstGh->MxbO51u) {
                                if (!(0 != WUweD6t)) {
                                    ldTcstGh->shxuMCKlnqRw = FqfRvTpM;
                                    FqfRvTpM = ldTcstGh;
                                    break;
                                }
                                else {
                                    HP7ht0kWYKe->shxuMCKlnqRw = ldTcstGh;
                                    ldTcstGh->shxuMCKlnqRw = oVqv79zMOo;
                                    break;
                                }
                            }
                            HP7ht0kWYKe = oVqv79zMOo;
                            oVqv79zMOo = oVqv79zMOo->shxuMCKlnqRw;
                            WUweD6t = WUweD6t +(414 - 413);
                        }
                    }
                    if (!(vWBc7GT != WUweD6t)) {
                        HP7ht0kWYKe->shxuMCKlnqRw = ldTcstGh;
                        ldTcstGh->shxuMCKlnqRw = NULL;
                    }
                }
            }
            pZazIvPTR = pZazIvPTR + (940 - 939);
            if (60 > ldTcstGh->MxbO51u) {
                if (p8xKY7 == NULL) {
                    p8xKY7 = qGNZPIBnTKo;
                    KpE0qPXJ = qGNZPIBnTKo;
                    qGNZPIBnTKo->shxuMCKlnqRw = NULL;
                }
                else {
                    YvC0auRbe = YvC0auRbe +1;
                    qGNZPIBnTKo->shxuMCKlnqRw = NULL;
                    KpE0qPXJ->shxuMCKlnqRw = qGNZPIBnTKo;
                    KpE0qPXJ = qGNZPIBnTKo;
                }
            }
        }
    }
    ldTcstGh = FqfRvTpM;
    for (pZazIvPTR = 0; pZazIvPTR <= vWBc7GT; pZazIvPTR = pZazIvPTR + 1) {
        printf ("%s\n", ldTcstGh->BRxefjPEayqM);
        ldTcstGh = ldTcstGh->shxuMCKlnqRw;
    }
    qGNZPIBnTKo = p8xKY7;
    for (pZazIvPTR = 0; pZazIvPTR <= YvC0auRbe; pZazIvPTR = pZazIvPTR + 1) {
        printf ("%s\n", qGNZPIBnTKo->BRxefjPEayqM);
        qGNZPIBnTKo = qGNZPIBnTKo->shxuMCKlnqRw;
    }
}

