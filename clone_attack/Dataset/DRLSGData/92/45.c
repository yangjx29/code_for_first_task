int ayx9NU0Ai (const  void  *QTcFUGA9, const  void  *QghciK) {
    return *(int*) QghciK -*(int*) QTcFUGA9;
}

main () {
    int UBxNWtRwIG2, DFGpgVb, yNAwn5Irtu, e8rycYWa;
    int uHNk0O3FVM [(1195 - 195)], TwsL9QKETM [1000];
    int Sco9gL, uhEL8i, PsrbYmMqZ;
    for (;;) {
        scanf ("%d", &Sco9gL);
        if (!((525 - 525) != Sco9gL))
            break;
        PsrbYmMqZ = (645 - 645);
        {
            uhEL8i = 559 - 559;
            while (Sco9gL > uhEL8i) {
                scanf ("%d", uHNk0O3FVM + uhEL8i);
                uhEL8i++;
            }
        }
        for (uhEL8i = 0; Sco9gL > uhEL8i; uhEL8i++)
            scanf ("%d", TwsL9QKETM +uhEL8i);
        qsort (uHNk0O3FVM, Sco9gL, sizeof (int), ayx9NU0Ai);
        qsort (TwsL9QKETM, Sco9gL, sizeof (int), ayx9NU0Ai);
        DFGpgVb = Sco9gL -(221 - 220);
        e8rycYWa = Sco9gL -(429 - 428);
        UBxNWtRwIG2 = (926 - 926);
        yNAwn5Irtu = (889 - 889);
        for (; UBxNWtRwIG2 <= DFGpgVb;) {
            if (uHNk0O3FVM[DFGpgVb] > TwsL9QKETM[e8rycYWa]) {
                PsrbYmMqZ++;
                DFGpgVb = DFGpgVb -1;
                e8rycYWa--;
            }
            else if (uHNk0O3FVM[UBxNWtRwIG2] > TwsL9QKETM[yNAwn5Irtu]) {
                UBxNWtRwIG2++;
                PsrbYmMqZ++;
                yNAwn5Irtu++;
            }
            else if (uHNk0O3FVM[DFGpgVb] < TwsL9QKETM[yNAwn5Irtu]) {
                DFGpgVb--, yNAwn5Irtu++;
                PsrbYmMqZ--;
            }
            else {
                yNAwn5Irtu++;
                DFGpgVb--;
            }
        }
        printf ("%d\n", (309 - 109) * PsrbYmMqZ);
    }
}

