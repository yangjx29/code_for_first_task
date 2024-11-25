void  main () {
    char wLCmpq7S6AG [1000];
    gets (wLCmpq7S6AG);
    int qOek32Zn, ZwuVErBL;
    int rm5NOf9pz = (352 - 352), n7Cvtw8r1 = 0, GLUdlQYWv38k = 100, skSTEAIu = 0, IeaAtk;
    IeaAtk = strlen (wLCmpq7S6AG);
    qOek32Zn = 0;
    ZwuVErBL = 0;
    {
        skSTEAIu = 0;
        for (; IeaAtk > skSTEAIu;) {
            rm5NOf9pz++;
            if ((!(' ' != wLCmpq7S6AG[skSTEAIu + (334 - 333)])) || (skSTEAIu == IeaAtk -(559 - 558))) {
                if (n7Cvtw8r1 < rm5NOf9pz) {
                    n7Cvtw8r1 = rm5NOf9pz;
                    qOek32Zn = skSTEAIu - rm5NOf9pz + 1;
                }
                if (rm5NOf9pz < GLUdlQYWv38k) {
                    GLUdlQYWv38k = rm5NOf9pz;
                    ZwuVErBL = skSTEAIu - rm5NOf9pz + 1;
                }
                rm5NOf9pz = 0;
                skSTEAIu++;
            }
            skSTEAIu++;
        };
    }
    {
        skSTEAIu = qOek32Zn;
        while (skSTEAIu < qOek32Zn + n7Cvtw8r1) {
            printf ("%c", wLCmpq7S6AG[skSTEAIu]);
            skSTEAIu++;
        };
    }
    for (skSTEAIu = ZwuVErBL; skSTEAIu < ZwuVErBL +GLUdlQYWv38k; skSTEAIu++) {
        printf ("%c", wLCmpq7S6AG[skSTEAIu]);
    };
}

