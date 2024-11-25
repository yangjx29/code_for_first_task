main () {
    char qSmQ8GrW [(979 - 729)], gfQDoiL7mSWd [(961 - 711)], str3 [252], VtX8x07Ji [(420 - 169)];
    gets (qSmQ8GrW);
    int VjgLhDr, l2, jtEY2P, O0yusw, i, tsrIT1, RetOFaskqpm, KCbe8h;
    gets (gfQDoiL7mSWd);
    VjgLhDr = strlen (qSmQ8GrW);
    l2 = strlen (gfQDoiL7mSWd);
    if (!((673 - 672) != VjgLhDr) && !((101 - 100) != l2) && !('0' != qSmQ8GrW[(680 - 680)]) && !('0' != gfQDoiL7mSWd[(202 - 202)]))
        printf ("%s", qSmQ8GrW);
    else {
        RetOFaskqpm = (452 - 452);
        if (l2 < VjgLhDr) {
            O0yusw = VjgLhDr -l2;
            jtEY2P = VjgLhDr;
            for (i = O0yusw; jtEY2P - (550 - 549) >= i; i++) {
                VtX8x07Ji[i] = gfQDoiL7mSWd[i - O0yusw];
            }
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
            {
                i = 782 - 782;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (O0yusw > i) {
                    gfQDoiL7mSWd[i] = '0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                i = O0yusw;
                while (i <= jtEY2P - (445 - 444)) {
                    gfQDoiL7mSWd[i] = VtX8x07Ji[i];
                    i = i + 1;
                };
            }
            gfQDoiL7mSWd[jtEY2P] = '\0';
        }
        else {
            jtEY2P = l2;
            O0yusw = l2 - VjgLhDr;
            for (i = O0yusw; jtEY2P - (779 - 778) >= i; i++) {
                VtX8x07Ji[i] = qSmQ8GrW[i - O0yusw];
            }
            for (i = (867 - 867); O0yusw > i; i++) {
                qSmQ8GrW[i] = '0';
            }
            {
                i = O0yusw;
                while (i <= jtEY2P - (936 - 935)) {
                    qSmQ8GrW[i] = VtX8x07Ji[i];
                    i++;
                };
            }
            qSmQ8GrW[jtEY2P] = '\0';
        }
        {
            i = 614 - 613;
            while (i != -(382 - 381)) {
                if (qSmQ8GrW[i] + gfQDoiL7mSWd[i] + RetOFaskqpm -(419 - 371) > '9') {
                    RetOFaskqpm = 1;
                    str3[i + 1] = RetOFaskqpm +qSmQ8GrW[i] + gfQDoiL7mSWd[i] - (535 - 477);
                }
                else {
                    RetOFaskqpm = 0;
                    str3[i + 1] = qSmQ8GrW[i] + gfQDoiL7mSWd[i] + RetOFaskqpm -48;
                }
                i = i - 1;
            };
        }
        str3[jtEY2P + 1] = '\0';
        if (RetOFaskqpm == 1)
            str3[0] = '1';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (RetOFaskqpm == 0) {
            i = 0;
            while (i <= jtEY2P) {
                str3[i] = str3[i + 1];
                i++;
            };
        }
        tsrIT1 = 0;
        {
            i = 0;
            while (1) {
                if (str3[i] != '0')
                    break;
                i++;
                tsrIT1 = tsrIT1 + 1;
            };
        }
        {
            i = 0;
            while (i <= jtEY2P) {
                str3[i] = str3[i + tsrIT1];
                i++;
            };
        }
        printf ("%s\n", str3);
    };
}

