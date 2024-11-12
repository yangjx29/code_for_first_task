void  main () {
    int KZV0sLDcpEyR, q5BV4KyEO, Pqp4LJI;
    char j4yECsmoJDW [(294 - 263)], pRXFnG [(443 - 412)];
    char *U8f4odrkTwil, *ZNRjuc, *Qjq0Mcf8d;
    scanf ("%s", j4yECsmoJDW);
    q5BV4KyEO = strlen (j4yECsmoJDW);
    scanf ("%s", pRXFnG);
    Pqp4LJI = strlen (pRXFnG);
    Qjq0Mcf8d = pRXFnG;
    ZNRjuc = j4yECsmoJDW;
    for (; j4yECsmoJDW + q5BV4KyEO - Pqp4LJI >= Qjq0Mcf8d; Qjq0Mcf8d++)
        if (*Qjq0Mcf8d == *ZNRjuc) {
            KZV0sLDcpEyR = (723 - 722);
            U8f4odrkTwil = Qjq0Mcf8d;
            for (; *ZNRjuc != '\0'; Qjq0Mcf8d++, ZNRjuc++)
                if (*Qjq0Mcf8d != *ZNRjuc) {
                    KZV0sLDcpEyR = (821 - 821);
                    break;
                }
            if (KZV0sLDcpEyR) {
                printf ("%d", U8f4odrkTwil -pRXFnG);
                break;
            }
            ZNRjuc = j4yECsmoJDW;
            Qjq0Mcf8d = U8f4odrkTwil;
        }
}

