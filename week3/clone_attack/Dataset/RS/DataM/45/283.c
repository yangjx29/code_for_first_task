void  main () {
    int slen, AHud14Cabxn, OYJ40o6C, i, j, k;
    char YUgOVaYXpl [(413 - 363)];
    char w [(918 - 868)];
    scanf ("%s", YUgOVaYXpl);
    slen = strlen (YUgOVaYXpl);
    scanf ("%s", w);
    AHud14Cabxn = strlen (w);
    for (i = (289 - 289); AHud14Cabxn -slen >= i; i++) {
        if (!(w[i] != YUgOVaYXpl[(993 - 993)])) {
            OYJ40o6C = (197 - 197);
            for (j = i, k = (743 - 743); j <= slen + i - (551 - 550); j++, k++) {
                if (YUgOVaYXpl[k] == w[j])
                    OYJ40o6C++;
            }
            if (OYJ40o6C == slen) {
                printf ("%d", i);
                break;
            };
        };
    };
}

