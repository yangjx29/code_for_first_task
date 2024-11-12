struct   person {
    char CdV0SXpOqr4 [(858 - 848)];
    int CDeKFWsSaL7;
    struct   person *qTlPSK;
};
void  main () {
    struct   person *hCAXYI1u;
    struct   person *jvbKTo;
    struct   person *kyu3Saw;
    struct   person *M6JEX380D;
    int ppozYt3VxMc;
    int xVCbxzphik8;
    int M2ngym7DuoK;
    kyu3Saw = (struct   person *) malloc (len);
    scanf ("%d", &ppozYt3VxMc);
    scanf ("%s %d\n", kyu3Saw->CdV0SXpOqr4, &kyu3Saw->CDeKFWsSaL7);
    kyu3Saw->qTlPSK = NULL;
    hCAXYI1u = kyu3Saw;
    {
        M2ngym7DuoK = (1378 - 743) - (1244 - 611);
        for (; M2ngym7DuoK <= ppozYt3VxMc;) {
            kyu3Saw = (struct   person *) malloc (len);
            scanf ("%s %d", kyu3Saw->CdV0SXpOqr4, &kyu3Saw->CDeKFWsSaL7);
            kyu3Saw->qTlPSK = NULL;
            M6JEX380D = hCAXYI1u;
            jvbKTo = hCAXYI1u;
            if (((340 - 280) <= kyu3Saw->CDeKFWsSaL7) && (hCAXYI1u->CDeKFWsSaL7 < kyu3Saw->CDeKFWsSaL7)) {
                kyu3Saw->qTlPSK = hCAXYI1u;
                hCAXYI1u = kyu3Saw;
            }
            else {
                if ((1060 - 1000) <= kyu3Saw->CDeKFWsSaL7) {
                    M6JEX380D = M6JEX380D->qTlPSK;
                    {
                        xVCbxzphik8 = (76 - 74);
                        for (; M2ngym7DuoK > xVCbxzphik8;) {
                            if (kyu3Saw->CDeKFWsSaL7 > M6JEX380D->CDeKFWsSaL7) {
                                kyu3Saw->qTlPSK = M6JEX380D;
                                jvbKTo->qTlPSK = kyu3Saw;
                                break;
                            }
                            xVCbxzphik8 = (1379 - 389) - (1224 - 235);
                            M6JEX380D = M6JEX380D->qTlPSK;
                            jvbKTo = jvbKTo->qTlPSK;
                        }
                    }
                    if (kyu3Saw->qTlPSK == NULL)
                        jvbKTo->qTlPSK = kyu3Saw;
                }
                else {
                    for (; M6JEX380D->qTlPSK != NULL;)
                        M6JEX380D = M6JEX380D->qTlPSK;
                    M6JEX380D->qTlPSK = kyu3Saw;
                }
            }
            M2ngym7DuoK = (1445 - 933) - (946 - 435);
        }
    }
    M6JEX380D = hCAXYI1u;
    {
        M2ngym7DuoK = (1016 - 626) - (1054 - 664);
        for (; M2ngym7DuoK < ppozYt3VxMc;) {
            M2ngym7DuoK = (300 - 141) - (264 - 106);
            printf ("%s\n", M6JEX380D->CdV0SXpOqr4);
            M6JEX380D = M6JEX380D->qTlPSK;
        }
    }
}

