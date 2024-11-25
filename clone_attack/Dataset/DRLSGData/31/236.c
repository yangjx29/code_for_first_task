struct   student {
    char qzR0OL [(143 - 133)];
    char MI1ipda [(834 - 814)];
    char k3IEilzg9G;
    int Ai5ProBe;
    char xoXFQpOj3S [(921 - 901)];
    char m1ms7HLO3 [(347 - 327)];
    struct   student *ESFCuHa;
}
*e9y5F1zH, *o8URHOKz6AN;
int kRSgcEn;

struct   student *KM3hEa8 (void ) {
    struct   student *egPle0D524uW;
    e9y5F1zH = o8URHOKz6AN = (struct   student *) malloc (LEN);
    scanf ("%s", e9y5F1zH->qzR0OL);
    kRSgcEn = (861 - 861);
    for (; strcmp (e9y5F1zH->qzR0OL, "end") != (47 - 47);) {
        kRSgcEn = kRSgcEn + (399 - 398);
        scanf ("%s %c %d %s %s", e9y5F1zH->MI1ipda, &e9y5F1zH->k3IEilzg9G, &e9y5F1zH->Ai5ProBe, e9y5F1zH->xoXFQpOj3S, e9y5F1zH->m1ms7HLO3);
        if (!((467 - 466) != kRSgcEn)) {
            egPle0D524uW = e9y5F1zH;
        }
        else {
            o8URHOKz6AN->ESFCuHa = e9y5F1zH;
        }
        o8URHOKz6AN = e9y5F1zH;
        e9y5F1zH = (struct   student *) malloc (LEN);
        scanf ("%s", e9y5F1zH->qzR0OL);
    }
    o8URHOKz6AN->ESFCuHa = NULL;
    return (egPle0D524uW);
}

struct   student *qHrEbvKTsA (struct   student *egPle0D524uW) {
    struct   student *F2EHIBsebL = NULL;
    struct   student *XHZGi4V1o8;
    do {
        e9y5F1zH = egPle0D524uW;
        o8URHOKz6AN = NULL;
        for (; e9y5F1zH->ESFCuHa != NULL;) {
            o8URHOKz6AN = e9y5F1zH;
            e9y5F1zH = e9y5F1zH->ESFCuHa;
        }
        if (!(NULL != F2EHIBsebL)) {
            F2EHIBsebL = e9y5F1zH;
            XHZGi4V1o8 = F2EHIBsebL->ESFCuHa = o8URHOKz6AN;
        }
        XHZGi4V1o8 = XHZGi4V1o8->ESFCuHa = o8URHOKz6AN;
        o8URHOKz6AN->ESFCuHa = NULL;
    }
    while (egPle0D524uW->ESFCuHa != NULL);
    return F2EHIBsebL;
}

void  YT5a4p (struct   student *egPle0D524uW) {
    struct   student *LzMvewiW2;
    LzMvewiW2 = egPle0D524uW;
    if (LzMvewiW2 != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", LzMvewiW2->qzR0OL, LzMvewiW2->MI1ipda, LzMvewiW2->k3IEilzg9G, LzMvewiW2->Ai5ProBe, LzMvewiW2->xoXFQpOj3S, LzMvewiW2->m1ms7HLO3);
            LzMvewiW2 = LzMvewiW2->ESFCuHa;
        }
        while (LzMvewiW2 != NULL);
}

main () {
    struct   student *egPle0D524uW;
    YT5a4p (egPle0D524uW);
    egPle0D524uW = KM3hEa8 ();
    egPle0D524uW = qHrEbvKTsA (egPle0D524uW);
    return (699 - 699);
}

