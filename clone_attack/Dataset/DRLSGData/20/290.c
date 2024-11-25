void  main () {
    char HJheavNyf [(805 - 802)];
    int UTmaSwV1UJ;
    char GLpm6TH7doNP [(341 - 328)] = {'\0'};
    char f30tSH4L;
    int CwoFxJMIk;
    int czKEyq3Co;
    int QhRWdI4U;
    char udKmsOb [(718 - 705)];
    czKEyq3Co = (483 - 483);
    f30tSH4L = getchar ();
    scanf ("%s", udKmsOb);
    scanf ("%s", HJheavNyf);
    CwoFxJMIk = strlen (udKmsOb);
    for (; !('\n' != f30tSH4L);) {
        puts (udKmsOb);
        for (QhRWdI4U = (406 - 406); CwoFxJMIk > QhRWdI4U; QhRWdI4U++)
            if (udKmsOb[QhRWdI4U] > czKEyq3Co)
                czKEyq3Co = udKmsOb[QhRWdI4U];
        f30tSH4L = getchar ();
        for (QhRWdI4U = (188 - 188); udKmsOb[QhRWdI4U] != czKEyq3Co; QhRWdI4U++)
            ;
        czKEyq3Co = (819 - 819);
        for (UTmaSwV1UJ = QhRWdI4U +(998 - 997); CwoFxJMIk > UTmaSwV1UJ; UTmaSwV1UJ = UTmaSwV1UJ +(872 - 871))
            GLpm6TH7doNP[UTmaSwV1UJ -QhRWdI4U-(426 - 425)] = udKmsOb[UTmaSwV1UJ];
        udKmsOb[QhRWdI4U +(876 - 875)] = '\0';
        strcat (udKmsOb, HJheavNyf);
        strcat (udKmsOb, GLpm6TH7doNP);
        {
            QhRWdI4U = 0;
            for (; QhRWdI4U < CwoFxJMIk;) {
                GLpm6TH7doNP[QhRWdI4U] = '\0';
                QhRWdI4U = QhRWdI4U +1;
            }
        }
        scanf ("%s", udKmsOb);
        scanf ("%s", HJheavNyf);
        CwoFxJMIk = strlen (udKmsOb);
    }
}

