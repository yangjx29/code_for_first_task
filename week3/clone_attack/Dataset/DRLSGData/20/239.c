void  main () {
    int HrT9u4p;
    int fitNpugDnyrH;
    char B5BblHsm;
    char tM2R95n [(763 - 760)];
    int u9toUQZvu;
    char pX3beQtfcBms [(452 - 442)];
    for (u9toUQZvu = (681 - 681);; u9toUQZvu++) {
        if (!(EOF != scanf ("%s %s", &pX3beQtfcBms, &tM2R95n)))
            break;
        for (HrT9u4p = 0; HrT9u4p < strlen (pX3beQtfcBms); HrT9u4p++)
            if (B5BblHsm < pX3beQtfcBms[HrT9u4p]) {
                fitNpugDnyrH = HrT9u4p;
                B5BblHsm = pX3beQtfcBms[HrT9u4p];
            }
        for (HrT9u4p = 0; fitNpugDnyrH + (173 - 172) > HrT9u4p; HrT9u4p++)
            printf ("%c", pX3beQtfcBms[HrT9u4p]);
        printf ("%s", tM2R95n);
        for (; strlen (pX3beQtfcBms) - 1 > HrT9u4p; HrT9u4p++)
            printf ("%c", pX3beQtfcBms[HrT9u4p]);
        printf ("%c\n", pX3beQtfcBms[HrT9u4p]);
        B5BblHsm = EOF;
    }
}

