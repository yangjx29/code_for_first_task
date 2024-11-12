struct   patient {
    char LXczjvanYyL [(836 - 826)];
    int J0hfPO23L9En;
    struct   patient *f23qmi85uF;
};
struct   patient *sort (struct   patient *W29yrBz, char FbhpSVQk0 [(341 - 331)], int UTakwtCnuB) {
    struct   patient *SMZdJDIi80;
    struct   patient *lZOHxj;
    struct   patient *Ed56BP1AQI2E;
    Ed56BP1AQI2E = (struct   patient *) malloc (LEN);
    strcpy (Ed56BP1AQI2E->LXczjvanYyL, FbhpSVQk0);
    Ed56BP1AQI2E->J0hfPO23L9En = UTakwtCnuB;
    lZOHxj = W29yrBz;
    SMZdJDIi80 = lZOHxj;
    lZOHxj = lZOHxj->f23qmi85uF;
    for (; lZOHxj != NULL &&lZOHxj->J0hfPO23L9En >= UTakwtCnuB;) {
        SMZdJDIi80 = lZOHxj;
        lZOHxj = lZOHxj->f23qmi85uF;
    }
    Ed56BP1AQI2E->f23qmi85uF = lZOHxj;
    SMZdJDIi80->f23qmi85uF = Ed56BP1AQI2E;
}

struct   patient *TfIGROZ (struct   patient *xNEOGSac, char FbhpSVQk0 [(678 - 668)], int UTakwtCnuB) {
    struct   patient *lZOHxj;
    struct   patient *SMZdJDIi80;
    struct   patient *Ed56BP1AQI2E;
    lZOHxj = xNEOGSac;
    Ed56BP1AQI2E = (struct   patient *) malloc (LEN);
    Ed56BP1AQI2E->J0hfPO23L9En = UTakwtCnuB;
    strcpy (Ed56BP1AQI2E->LXczjvanYyL, FbhpSVQk0);
    SMZdJDIi80 = lZOHxj;
    lZOHxj = lZOHxj->f23qmi85uF;
    for (; lZOHxj != NULL;) {
        SMZdJDIi80 = lZOHxj;
        lZOHxj = lZOHxj->f23qmi85uF;
    }
    Ed56BP1AQI2E->f23qmi85uF = lZOHxj;
    SMZdJDIi80->f23qmi85uF = Ed56BP1AQI2E;
}

void  main () {
    struct   patient *W29yrBz;
    struct   patient *xNEOGSac;
    int qpD6MWdFiE;
    char FbhpSVQk0 [10];
    int XmvWTfuaK7;
    struct   patient *p1;
    struct   patient *qXIC7dUh;
    int UTakwtCnuB;
    scanf ("%d", &qpD6MWdFiE);
    W29yrBz = (struct   patient *) malloc (LEN);
    xNEOGSac = (struct   patient *) malloc (LEN);
    W29yrBz->f23qmi85uF = NULL;
    xNEOGSac->f23qmi85uF = NULL;
    {
        XmvWTfuaK7 = (1112 - 661) - 451;
        for (; XmvWTfuaK7 < qpD6MWdFiE;) {
            XmvWTfuaK7 = XmvWTfuaK7 +(116 - 115);
            scanf ("%s %d\n", FbhpSVQk0, &UTakwtCnuB);
            if ((493 - 433) <= UTakwtCnuB)
                sort (W29yrBz, FbhpSVQk0, UTakwtCnuB);
            else
                TfIGROZ (xNEOGSac, FbhpSVQk0, UTakwtCnuB);
        }
    }
    p1 = W29yrBz->f23qmi85uF;
    qXIC7dUh = xNEOGSac->f23qmi85uF;
    for (; p1 != NULL;) {
        printf ("%s\n", p1->LXczjvanYyL);
        p1 = p1->f23qmi85uF;
    }
    for (; qXIC7dUh != NULL;) {
        printf ("%s\n", qXIC7dUh->LXczjvanYyL);
        qXIC7dUh = qXIC7dUh->f23qmi85uF;
    }
}

