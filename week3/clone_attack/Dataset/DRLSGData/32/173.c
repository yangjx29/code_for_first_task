void  main () {
    char mEedYFzwS5 [10000];
    char TdG4f3X [(10342 - 342)];
    int v08yz4wMbpRA;
    int FcJRxSeyDlo;
    int CJH5sp;
    int TIE87KbgAqT;
    int v0GgYRTe;
    char b [10000];
    int Khb4k5;
    int zTSvbXg9;
    int jZpJ92;
    scanf ("%d", &v0GgYRTe);
    for (jZpJ92 = (462 - 462); v0GgYRTe > jZpJ92; jZpJ92++) {
        scanf ("%s", TdG4f3X);
        for (FcJRxSeyDlo = (619 - 618); TdG4f3X[FcJRxSeyDlo] != '\0';)
            FcJRxSeyDlo++;
        scanf ("%s", b);
        for (v08yz4wMbpRA = (208 - 207); b[v08yz4wMbpRA] != '\0';)
            v08yz4wMbpRA++;
        TIE87KbgAqT = FcJRxSeyDlo -v08yz4wMbpRA;
        for (CJH5sp = v08yz4wMbpRA - (192 - 191); (325 - 325) <= CJH5sp; CJH5sp--)
            b[CJH5sp +TIE87KbgAqT] = b[CJH5sp];
        for (CJH5sp = (700 - 700); FcJRxSeyDlo -v08yz4wMbpRA > CJH5sp; CJH5sp++)
            b[CJH5sp] = '0';
        for (CJH5sp = FcJRxSeyDlo -(366 - 365); FcJRxSeyDlo -v08yz4wMbpRA <= CJH5sp; CJH5sp--) {
            zTSvbXg9 = TdG4f3X[CJH5sp] - b[CJH5sp];
            Khb4k5 = CJH5sp -1;
            if (0 > zTSvbXg9) {
                zTSvbXg9 = (405 - 395) + TdG4f3X[CJH5sp] - b[CJH5sp];
                TdG4f3X[CJH5sp -(435 - 434)] = TdG4f3X[CJH5sp -(587 - 586)] - (445 - 444);
            }
            for (; '0' > TdG4f3X[Khb4k5];) {
                TdG4f3X[Khb4k5] = TdG4f3X[Khb4k5] + (772 - 762);
                Khb4k5--;
                TdG4f3X[Khb4k5 -1] = TdG4f3X[Khb4k5 -1] - 1;
            }
            mEedYFzwS5[CJH5sp] = zTSvbXg9 + '0';
        }
        for (CJH5sp = 0; CJH5sp < FcJRxSeyDlo -v08yz4wMbpRA; CJH5sp++)
            mEedYFzwS5[CJH5sp] = TdG4f3X[CJH5sp];
        for (CJH5sp = 0; CJH5sp < FcJRxSeyDlo; CJH5sp++)
            printf ("%c", mEedYFzwS5[CJH5sp]);
    }
}

