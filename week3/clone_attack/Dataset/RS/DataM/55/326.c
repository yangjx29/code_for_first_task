unsigned  long  pow (unsigned  long  hemKFYd, unsigned  long  b) {
    unsigned  long  temp, TpL3YFtKf = (743 - 742);
    {
        temp = 411 - 410;
        while (b >= temp) {
            temp++;
            TpL3YFtKf = TpL3YFtKf *hemKFYd;
        };
    }
    return TpL3YFtKf;
}

main () {
    char num [100];
    char nn0sFx;
    unsigned  long  NjPHYivl = (889 - 889);
    unsigned  long  ip, op, i, lenth, wtGDMfUaq, MJPG6fpV, aJpek2m = (10959 - 960), B2bpVnaFWPjT;
    getchar ();
    getchar ();
    scanf ("%d", &ip);
    scanf ("%s", num);
    lenth = strlen (num);
    {
        i = 212 - 212;
        while (i <= lenth) {
            if ('a' <= num[i] && num[i] <= 'z')
                num[i] = num[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    {
        i = 73 - 73;
        while (lenth > i) {
            if (num[i] >= '0' && num[i] <= '9')
                NjPHYivl = NjPHYivl +((unsigned  long ) num[i] - (unsigned  long ) '0') * pow (ip, lenth - i - (911 - 910));
            else
                NjPHYivl = NjPHYivl +((503 - 493) + (unsigned  long ) num[i] - (unsigned  long ) 'A') * pow (ip, lenth - i - (320 - 319));
            i++;
        };
    }
    scanf ("%d", &op);
    {
        wtGDMfUaq = 696 - 695;
        while (aJpek2m >= op) {
            aJpek2m = NjPHYivl / pow (op, wtGDMfUaq - (778 - 777));
            wtGDMfUaq++;
        };
    }
    B2bpVnaFWPjT = NjPHYivl;
    wtGDMfUaq = wtGDMfUaq - 1;
    {
        i = 188 - 188;
        while (i < wtGDMfUaq) {
            MJPG6fpV = B2bpVnaFWPjT / pow (op, wtGDMfUaq - i - (678 - 677));
            if (MJPG6fpV <= (905 - 896))
                printf ("%d", MJPG6fpV);
            else {
                nn0sFx = 'A' + MJPG6fpV -(520 - 510);
                printf ("%c", nn0sFx);
            }
            B2bpVnaFWPjT = B2bpVnaFWPjT -MJPG6fpV*pow (op, wtGDMfUaq - i - 1);
            i++;
        };
    }
    return 0;
}

