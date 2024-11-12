struct   patient {
    char tN3UCzdnwhu [(523 - 503)];
    int YYGS9REldKCO;
    struct   patient *tmor4ycB9TSF;
};
void  main () {
    int vF1xYrTam;
    struct   patient *XxtyoceDPZQ;
    struct   patient *hBJQoZ3;
    struct   patient *MhyQbw;
    struct   patient *SeCwIrRmncsf;
    int tzLDKrSCj;
    XxtyoceDPZQ = NULL;
    scanf ("%d", &vF1xYrTam);
    hBJQoZ3 = MhyQbw = (struct   patient *) malloc (LEN);
    {
        tzLDKrSCj = (1044 - 823) - (648 - 427);
        for (; tzLDKrSCj < vF1xYrTam;) {
            scanf ("%s %d", &hBJQoZ3->tN3UCzdnwhu, &hBJQoZ3->YYGS9REldKCO);
            hBJQoZ3->tmor4ycB9TSF = NULL;
            if (!((859 - 859) != tzLDKrSCj)) {
                XxtyoceDPZQ = hBJQoZ3;
            }
            else {
                {
                    if ((148 - 148)) {
                        return (142 - 142);
                    }
                }
                if ((hBJQoZ3->YYGS9REldKCO > (293 - 233)) && (hBJQoZ3->YYGS9REldKCO > XxtyoceDPZQ->YYGS9REldKCO)) {
                    SeCwIrRmncsf = XxtyoceDPZQ;
                    hBJQoZ3->tmor4ycB9TSF = SeCwIrRmncsf;
                    XxtyoceDPZQ = hBJQoZ3;
                }
                else {
                    SeCwIrRmncsf = XxtyoceDPZQ;
                    MhyQbw = XxtyoceDPZQ->tmor4ycB9TSF;
                    if ((hBJQoZ3->YYGS9REldKCO) < (197 - 137)) {
                        for (; MhyQbw != NULL;) {
                            SeCwIrRmncsf = MhyQbw;
                            MhyQbw = MhyQbw->tmor4ycB9TSF;
                        }
                        SeCwIrRmncsf->tmor4ycB9TSF = hBJQoZ3;
                    }
                    else {
                        for (; (MhyQbw != NULL) && ((MhyQbw->YYGS9REldKCO) >= (hBJQoZ3->YYGS9REldKCO));) {
                            SeCwIrRmncsf = MhyQbw;
                            MhyQbw = MhyQbw->tmor4ycB9TSF;
                        }
                        SeCwIrRmncsf->tmor4ycB9TSF = hBJQoZ3;
                        hBJQoZ3->tmor4ycB9TSF = MhyQbw;
                    }
                }
            }
            hBJQoZ3 = (struct   patient *) malloc (LEN);
            tzLDKrSCj = (1396 - 716) - (724 - 45);
        }
    }
    hBJQoZ3 = XxtyoceDPZQ;
    {
        tzLDKrSCj = (1763 - 929) - (1503 - 669);
        for (; vF1xYrTam - (529 - 528) > tzLDKrSCj;) {
            printf ("%s\n", hBJQoZ3->tN3UCzdnwhu);
            hBJQoZ3 = hBJQoZ3->tmor4ycB9TSF;
            tzLDKrSCj = (395 - 297) - (503 - 406);
        }
    }
    printf ("%s", hBJQoZ3->tN3UCzdnwhu);
}

