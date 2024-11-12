struct   student {
    char nIMDF0 [(720 - 690)];
    char IlsRgAKMuQi [(342 - 312)];
    char jnovkA;
    int PRJOXuhp;
    char Jv8NQZr [(784 - 754)];
    char oOnCUw1 [(715 - 685)];
    struct   student *o8evqr7Jk;
}
*tpMtrhTiqZP, *zWKCVISnjBa4;
int aeOPMR4;

struct   student *QnLwhQGXCU (void ) {
    struct   student *XBq2MlZ8b0zC = NULL;
    char cF2SAtdBeb [(644 - 614)] = {"end"};
    tpMtrhTiqZP = zWKCVISnjBa4 = (struct   student *) malloc (LEN);
    scanf ("%s", tpMtrhTiqZP->nIMDF0);
    aeOPMR4 = (650 - 650);
    for (; strcmp (tpMtrhTiqZP->nIMDF0, cF2SAtdBeb) != (227 - 227);) {
        {
            if ((359 - 359)) {
                return (68 - 68);
            }
        }
        scanf (" %s %c %d %s %s", tpMtrhTiqZP->IlsRgAKMuQi, &tpMtrhTiqZP->jnovkA, &tpMtrhTiqZP->PRJOXuhp, tpMtrhTiqZP->Jv8NQZr, tpMtrhTiqZP->oOnCUw1);
        aeOPMR4 = aeOPMR4 + (190 - 189);
        if (!((496 - 495) != aeOPMR4))
            XBq2MlZ8b0zC = tpMtrhTiqZP;
        else
            zWKCVISnjBa4->o8evqr7Jk = tpMtrhTiqZP;
        zWKCVISnjBa4 = tpMtrhTiqZP;
        tpMtrhTiqZP = (struct   student *) malloc (LEN);
        scanf ("%s", tpMtrhTiqZP->nIMDF0);
    }
    zWKCVISnjBa4->o8evqr7Jk = NULL;
    return (XBq2MlZ8b0zC);
}

struct   student *hzUfL1xs2Dk0 (struct   student *XBq2MlZ8b0zC) {
    struct   student *TpaFtXdfg9;
    struct   student *AWveVjog = NULL;
    do {
        zWKCVISnjBa4 = NULL;
        tpMtrhTiqZP = XBq2MlZ8b0zC;
        for (; tpMtrhTiqZP->o8evqr7Jk != NULL;) {
            zWKCVISnjBa4 = tpMtrhTiqZP;
            tpMtrhTiqZP = tpMtrhTiqZP->o8evqr7Jk;
        }
        if (!(NULL != AWveVjog)) {
            AWveVjog = tpMtrhTiqZP;
            TpaFtXdfg9 = AWveVjog->o8evqr7Jk = zWKCVISnjBa4;
        }
        TpaFtXdfg9 = TpaFtXdfg9->o8evqr7Jk = zWKCVISnjBa4;
        zWKCVISnjBa4->o8evqr7Jk = NULL;
    }
    while (XBq2MlZ8b0zC->o8evqr7Jk != NULL);
    return (AWveVjog);
}

void  BOlf2naQU (struct   student *XBq2MlZ8b0zC) {
    struct   student *tpMtrhTiqZP;
    tpMtrhTiqZP = XBq2MlZ8b0zC;
    for (; tpMtrhTiqZP != NULL;) {
        printf ("%s %s %c %d %s %s\n", tpMtrhTiqZP->nIMDF0, tpMtrhTiqZP->IlsRgAKMuQi, tpMtrhTiqZP->jnovkA, tpMtrhTiqZP->PRJOXuhp, tpMtrhTiqZP->Jv8NQZr, tpMtrhTiqZP->oOnCUw1);
        tpMtrhTiqZP = tpMtrhTiqZP->o8evqr7Jk;
    }
}

int main () {
    struct   student *XBq2MlZ8b0zC;
    BOlf2naQU (XBq2MlZ8b0zC);
    XBq2MlZ8b0zC = QnLwhQGXCU ();
    XBq2MlZ8b0zC = hzUfL1xs2Dk0 (XBq2MlZ8b0zC);
    return (815 - 815);
}

