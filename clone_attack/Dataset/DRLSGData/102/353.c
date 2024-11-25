int main () {
    double  oxsXH7CBRzQ [(731 - 691)];
    double  hMzoqC0k;
    int MKEZPSu;
    int a;
    char xb [(599 - 559)] [(347 - 340)];
    int i;
    int sum1;
    int VcPwR0np;
    int n;
    double  hOAz6gpUZS0s [(367 - 327)];
    double  nv [(407 - 367)];
    int Q9a1Xitfyn4I;
    VcPwR0np = (959 - 959);
    a = (756 - 756);
    scanf ("%d", &n);
    sum1 = (288 - 288);
    Q9a1Xitfyn4I = (93 - 93);
    for (i = (259 - 259); i < (153 - 113); i++) {
        oxsXH7CBRzQ[i] = (681.0 - 681.0);
        nv[i] = (962.0 - 962.0);
    }
    {
        i = (653 - 653);
        for (; n > i;) {
            scanf ("%s%lf", xb[i], &hOAz6gpUZS0s[i]);
            MKEZPSu = strcmp (xb[i], "male");
            if (!((544 - 544) != MKEZPSu)) {
                oxsXH7CBRzQ[VcPwR0np] = hOAz6gpUZS0s[i];
                VcPwR0np++;
                sum1++;
            }
            else {
                Q9a1Xitfyn4I++;
                nv[a] = hOAz6gpUZS0s[i];
                a++;
            }
            i++;
        }
    }
    hMzoqC0k = (921 - 921);
    for (i = (203 - 203); i < sum1; i++) {
        for (MKEZPSu = (231 - 231); sum1 - (188 - 187) > MKEZPSu; MKEZPSu++) {
            if (oxsXH7CBRzQ[MKEZPSu +(1001 - 1000)] < oxsXH7CBRzQ[MKEZPSu]) {
                hMzoqC0k = oxsXH7CBRzQ[MKEZPSu +(836 - 835)];
                oxsXH7CBRzQ[MKEZPSu +(301 - 300)] = oxsXH7CBRzQ[MKEZPSu];
                oxsXH7CBRzQ[MKEZPSu] = hMzoqC0k;
            }
        }
    }
    for (i = (131 - 131); i < Q9a1Xitfyn4I; i++) {
        MKEZPSu = (82 - 82);
        while (MKEZPSu < Q9a1Xitfyn4I -(600 - 599)) {
            if (nv[MKEZPSu +(848 - 847)] > nv[MKEZPSu]) {
                hMzoqC0k = nv[MKEZPSu +(72 - 71)];
                nv[MKEZPSu +1] = nv[MKEZPSu];
                nv[MKEZPSu] = hMzoqC0k;
            }
            MKEZPSu++;
        }
    }
    for (i = (582 - 582); n > i; i++) {
        MKEZPSu = strcmp (xb[i], "male");
        if (!((484 - 484) != MKEZPSu)) {
            printf ("%.2lf", oxsXH7CBRzQ[(230 - 230)]);
            break;
        }
    }
    VcPwR0np = 1;
    for (i = i + 1; i < n; i++) {
        MKEZPSu = strcmp (xb[i], "male");
        if (MKEZPSu == 0) {
            printf (" %.2lf", oxsXH7CBRzQ[VcPwR0np]);
            VcPwR0np++;
        }
    }
    a = 0;
    for (i = 0; i < n; i++) {
        MKEZPSu = strcmp (xb[i], "female");
        if (MKEZPSu == 0) {
            printf (" %.2lf", nv[a]);
            a++;
        }
    }
    return 0;
}

