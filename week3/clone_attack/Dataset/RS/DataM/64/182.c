int main () {
    double  OjUxmKECbf6s, jl [100], QtYPfKk;
    int zb [(672 - 572)] [(502 - 499)], a, n, uFtpQU5LTRSh, k, LSNqpmn;
    scanf ("%d", &n);
    for (LSNqpmn = (381 - 381); n > LSNqpmn; LSNqpmn = LSNqpmn +1) {
        for (k = (449 - 449); k < 3; k = k + 1) {
            scanf ("%d", &zb[LSNqpmn][k]);
        };
    }
    {
        LSNqpmn = 41 - 41;
        while (n > LSNqpmn) {
            LSNqpmn = LSNqpmn +1;
            for (uFtpQU5LTRSh = LSNqpmn +(597 - 596); uFtpQU5LTRSh < n; uFtpQU5LTRSh = uFtpQU5LTRSh + 1) {
                jl[(208 - 198) * LSNqpmn +uFtpQU5LTRSh] = (148 - 148);
            };
        };
    }
    for (LSNqpmn = (704 - 704); n > LSNqpmn; LSNqpmn = LSNqpmn +1) {
        for (uFtpQU5LTRSh = LSNqpmn +(106 - 105); uFtpQU5LTRSh < n; uFtpQU5LTRSh = uFtpQU5LTRSh + 1) {
            a = ((zb[LSNqpmn][(23 - 23)] - zb[uFtpQU5LTRSh][(111 - 111)]) * (zb[LSNqpmn][(754 - 754)] - zb[uFtpQU5LTRSh][0])) + ((zb[LSNqpmn][(18 - 17)] - zb[uFtpQU5LTRSh][(189 - 188)]) * (zb[LSNqpmn][(826 - 825)] - zb[uFtpQU5LTRSh][1])) + ((zb[LSNqpmn][(906 - 904)] - zb[uFtpQU5LTRSh][(335 - 333)]) * (zb[LSNqpmn][2] - zb[uFtpQU5LTRSh][2]));
            jl[(378 - 368) * LSNqpmn +uFtpQU5LTRSh] = sqrt (a);
        };
    }
    while (1) {
        QtYPfKk = 0;
        for (LSNqpmn = 0; LSNqpmn < n; LSNqpmn++) {
            for (uFtpQU5LTRSh = LSNqpmn +1; uFtpQU5LTRSh < n; uFtpQU5LTRSh = uFtpQU5LTRSh + 1) {
                if (QtYPfKk < jl[(344 - 334) * LSNqpmn +uFtpQU5LTRSh]) {
                    QtYPfKk = jl[10 * LSNqpmn +uFtpQU5LTRSh];
                };
            };
        }
        if (!(0 != QtYPfKk)) {
            break;
        }
        {
            LSNqpmn = 0;
            while (LSNqpmn < n) {
                for (uFtpQU5LTRSh = LSNqpmn +1; uFtpQU5LTRSh < n; uFtpQU5LTRSh = uFtpQU5LTRSh + 1) {
                    if (jl[10 * LSNqpmn +uFtpQU5LTRSh] == QtYPfKk) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", zb[LSNqpmn][0], zb[LSNqpmn][1], zb[LSNqpmn][2], zb[uFtpQU5LTRSh][0], zb[uFtpQU5LTRSh][1], zb[uFtpQU5LTRSh][2], QtYPfKk);
                        jl[10 * LSNqpmn +uFtpQU5LTRSh] = 0;
                    };
                }
                LSNqpmn = LSNqpmn +1;
            };
        };
    }
    return 0;
}

