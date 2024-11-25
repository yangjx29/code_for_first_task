int e81SomRIX9gh [(775 - 762)] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

main () {
    int w0Oaj7Yv, sB0ULq;
    int VVvwAQOfUc23, DdkpG3sU2un, CExJrRAk, EM85RsZQ = (317 - 316), ynKAXpBG = 1;
    scanf ("%d", &w0Oaj7Yv);
    CExJrRAk = w0Oaj7Yv;
    for (sB0ULq = 1; 365 >= sB0ULq; sB0ULq = sB0ULq + 1) {
        CExJrRAk = CExJrRAk +1;
        if (!(8 != CExJrRAk))
            CExJrRAk = 1;
        EM85RsZQ++;
        if (EM85RsZQ > e81SomRIX9gh[ynKAXpBG]) {
            ynKAXpBG++;
            EM85RsZQ = 1;
        }
        if (EM85RsZQ == 13 && CExJrRAk == 5)
            printf ("%d\n", ynKAXpBG);
    };
}

