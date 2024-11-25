int main () {
    int LxQPR1 [300], b [300];
    int q1Odobv6, oMPDjeQbmz8S, vmFtnTfp0Ja, t, z0EaMUJFum, SYhWdD = (208 - 208), s3AfwCXVdgG = (778 - 778), gXntOH3QEk;
    scanf ("%d", &q1Odobv6);
    {
        oMPDjeQbmz8S = 0;
        while (q1Odobv6 > oMPDjeQbmz8S) {
            scanf ("%d", &LxQPR1[oMPDjeQbmz8S]);
            s3AfwCXVdgG = s3AfwCXVdgG + LxQPR1[oMPDjeQbmz8S];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            oMPDjeQbmz8S = oMPDjeQbmz8S + 1;
        };
    }
    gXntOH3QEk = s3AfwCXVdgG / q1Odobv6;
    {
        oMPDjeQbmz8S = 0;
        while (oMPDjeQbmz8S < q1Odobv6) {
            b[oMPDjeQbmz8S] = abs (LxQPR1[oMPDjeQbmz8S] * q1Odobv6 - s3AfwCXVdgG);
            oMPDjeQbmz8S = oMPDjeQbmz8S + 1;
        };
    }
    {
        oMPDjeQbmz8S = 0;
        while (oMPDjeQbmz8S < q1Odobv6) {
            {
                vmFtnTfp0Ja = 0;
                while (q1Odobv6 - oMPDjeQbmz8S - (628 - 627) > vmFtnTfp0Ja) {
                    if (b[vmFtnTfp0Ja] < b[vmFtnTfp0Ja + (304 - 303)]) {
                        t = b[vmFtnTfp0Ja];
                        b[vmFtnTfp0Ja] = b[vmFtnTfp0Ja + (303 - 302)];
                        b[vmFtnTfp0Ja + (917 - 916)] = t;
                        z0EaMUJFum = LxQPR1[vmFtnTfp0Ja];
                        LxQPR1[vmFtnTfp0Ja] = LxQPR1[vmFtnTfp0Ja + 1];
                        LxQPR1[vmFtnTfp0Ja + 1] = z0EaMUJFum;
                    }
                    vmFtnTfp0Ja = vmFtnTfp0Ja + 1;
                };
            }
            oMPDjeQbmz8S = oMPDjeQbmz8S + 1;
        };
    }
    {
        oMPDjeQbmz8S = 0;
        while (oMPDjeQbmz8S < q1Odobv6 && b[oMPDjeQbmz8S] == b[oMPDjeQbmz8S + 1]) {
            if (b[oMPDjeQbmz8S] == b[oMPDjeQbmz8S + 1])
                SYhWdD = SYhWdD +1;
            oMPDjeQbmz8S = oMPDjeQbmz8S + 1;
        };
    }
    {
        oMPDjeQbmz8S = 0;
        while (oMPDjeQbmz8S < SYhWdD) {
            for (vmFtnTfp0Ja = 0; SYhWdD -oMPDjeQbmz8S - 1 > vmFtnTfp0Ja; vmFtnTfp0Ja = vmFtnTfp0Ja + 1) {
                if (LxQPR1[vmFtnTfp0Ja] > LxQPR1[vmFtnTfp0Ja + 1]) {
                    t = LxQPR1[vmFtnTfp0Ja];
                    LxQPR1[vmFtnTfp0Ja] = LxQPR1[vmFtnTfp0Ja + 1];
                    LxQPR1[vmFtnTfp0Ja + 1] = t;
                };
            }
            oMPDjeQbmz8S = oMPDjeQbmz8S + 1;
        };
    }
    for (oMPDjeQbmz8S = 0; oMPDjeQbmz8S <= SYhWdD; oMPDjeQbmz8S = oMPDjeQbmz8S + 1) {
        if (oMPDjeQbmz8S == 0)
            printf ("%d", LxQPR1[oMPDjeQbmz8S]);
        else
            printf (",%d", LxQPR1[oMPDjeQbmz8S]);
    }
    return 0;
}

