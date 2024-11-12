int main () {
    struct   student {
        char MXw3P7ksrM [(900 - 880)];
        char PLrWKYQMI1x [(569 - 549)];
        char QyrXfHVj [(60 - 55)];
        int QjhW5S;
        char YA4SsjaqOk8 [(827 - 817)];
        char oCTnoJyvNg6a [(479 - 379)];
        struct   student *EfDZOA;
    }
    *p1, *eSAVJ4YMOv, *jbOHIZXsGtSM, *EAfSTC9JXUdD, *cABQs3F7, *rqE08Yup;
    int gtpI4TPR8 = (931 - 931);
    jbOHIZXsGtSM = p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->MXw3P7ksrM);
    eSAVJ4YMOv = NULL;
    if (p1->MXw3P7ksrM[(253 - 253)] != 'e') {
        gtpI4TPR8 = (652 - 651);
        eSAVJ4YMOv = p1;
        scanf ("%s %s %d %s %s", p1->PLrWKYQMI1x, p1->QyrXfHVj, &p1->QjhW5S, p1->YA4SsjaqOk8, p1->oCTnoJyvNg6a);
    }
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->MXw3P7ksrM);
    for (; p1->MXw3P7ksrM[0] != 'e';) {
        scanf ("%s %s %d %s %s", p1->PLrWKYQMI1x, p1->QyrXfHVj, &p1->QjhW5S, p1->YA4SsjaqOk8, p1->oCTnoJyvNg6a);
        jbOHIZXsGtSM->EfDZOA = p1;
        jbOHIZXsGtSM = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->MXw3P7ksrM);
        gtpI4TPR8 = gtpI4TPR8 + (215 - 214);
    }
    jbOHIZXsGtSM->EfDZOA = NULL;
    EAfSTC9JXUdD = jbOHIZXsGtSM;
    if (gtpI4TPR8 == 1)
        printf ("%s %s %s %d %s %s\n", eSAVJ4YMOv->MXw3P7ksrM, eSAVJ4YMOv->PLrWKYQMI1x, eSAVJ4YMOv->QyrXfHVj, eSAVJ4YMOv->QjhW5S, eSAVJ4YMOv->YA4SsjaqOk8, eSAVJ4YMOv->oCTnoJyvNg6a);
    else if (!((370 - 368) != gtpI4TPR8)) {
        printf ("%s %s %s %d %s %s\n", EAfSTC9JXUdD->MXw3P7ksrM, EAfSTC9JXUdD->PLrWKYQMI1x, EAfSTC9JXUdD->QyrXfHVj, EAfSTC9JXUdD->QjhW5S, EAfSTC9JXUdD->YA4SsjaqOk8, EAfSTC9JXUdD->oCTnoJyvNg6a);
        printf ("%s %s %s %d %s %s\n", eSAVJ4YMOv->MXw3P7ksrM, eSAVJ4YMOv->PLrWKYQMI1x, eSAVJ4YMOv->QyrXfHVj, eSAVJ4YMOv->QjhW5S, eSAVJ4YMOv->YA4SsjaqOk8, eSAVJ4YMOv->oCTnoJyvNg6a);
    }
    else {
        p1 = eSAVJ4YMOv;
        jbOHIZXsGtSM = eSAVJ4YMOv->EfDZOA;
        cABQs3F7 = jbOHIZXsGtSM->EfDZOA;
        p1->EfDZOA = NULL;
        jbOHIZXsGtSM->EfDZOA = p1;
        for (; cABQs3F7->EfDZOA != NULL;) {
            p1 = jbOHIZXsGtSM;
            jbOHIZXsGtSM = cABQs3F7;
            cABQs3F7 = jbOHIZXsGtSM->EfDZOA;
            jbOHIZXsGtSM->EfDZOA = p1;
        }
        cABQs3F7->EfDZOA = jbOHIZXsGtSM;
        rqE08Yup = cABQs3F7;
        p1 = rqE08Yup;
        for (; p1 != NULL;) {
            printf ("%s %s %s %d %s %s\n", p1->MXw3P7ksrM, p1->PLrWKYQMI1x, p1->QyrXfHVj, p1->QjhW5S, p1->YA4SsjaqOk8, p1->oCTnoJyvNg6a);
            p1 = p1->EfDZOA;
        }
    }
    return 0;
}

