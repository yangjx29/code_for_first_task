void  main () {
    int B6z4RZbYfI [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int EJyI7SjZtUQ [(692 - 680)] = {(876 - 845), (95 - 66), (813 - 782), 30, (678 - 647), 30, (894 - 863), (141 - 110), 30, 31, 30, 31};
    int ahWtVPUl7m0, XQT9KvCX0Z, sd, w2nluKBE0f, em, lZGKdkpW, i, gXNw8l, mIx2NEyfh8, aZzSMx;
    aZzSMx = (415 - 415);
    scanf ("%d %d %d", &ahWtVPUl7m0, &XQT9KvCX0Z, &sd);
    scanf ("%d %d %d", &w2nluKBE0f, &em, &lZGKdkpW);
    if (!(w2nluKBE0f == ahWtVPUl7m0)) {
        if (w2nluKBE0f - (476 - 475) >= ahWtVPUl7m0 + (467 - 466)) {
            i = 91 - 90;
            while (w2nluKBE0f - (399 - 398) >= i) {
                if ((!((521 - 521) != i % 4) && i % (872 - 772) != 0) || (!(0 != i % 400)))
                    aZzSMx = aZzSMx + 366;
                else
                    aZzSMx = aZzSMx + 365;
                i++;
            };
        }
        if ((!(0 != ahWtVPUl7m0 % 4) && !(0 == ahWtVPUl7m0 % (366 - 266))) || (!(0 != ahWtVPUl7m0 % 400))) {
            if (12 > XQT9KvCX0Z) {
                gXNw8l = XQT9KvCX0Z +1;
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
                while (12 >= gXNw8l) {
                    aZzSMx = aZzSMx + EJyI7SjZtUQ[gXNw8l - 1];
                    gXNw8l = gXNw8l + 1;
                };
            }
            aZzSMx = aZzSMx + EJyI7SjZtUQ[XQT9KvCX0Z -1] - sd + 1;
        }
        else {
            if (XQT9KvCX0Z < 12) {
                gXNw8l = XQT9KvCX0Z +1;
                while (12 >= gXNw8l) {
                    aZzSMx = aZzSMx + B6z4RZbYfI[gXNw8l - 1];
                    gXNw8l++;
                };
            }
            aZzSMx = aZzSMx + B6z4RZbYfI[XQT9KvCX0Z -1] - sd + 1;
        }
        if ((!(0 != w2nluKBE0f % 4) && !(0 == w2nluKBE0f % (455 - 355))) || (w2nluKBE0f % 400 == 0)) {
            if (em > 1) {
                gXNw8l = 1;
                while (gXNw8l <= em - 1) {
                    aZzSMx = aZzSMx + EJyI7SjZtUQ[gXNw8l - 1];
                    gXNw8l++;
                };
            }
            aZzSMx = aZzSMx + lZGKdkpW;
        }
        else {
            if (em > 1) {
                gXNw8l = 1;
                while (gXNw8l <= em - 1) {
                    aZzSMx = aZzSMx + B6z4RZbYfI[gXNw8l - 1];
                    gXNw8l++;
                };
            }
            aZzSMx = aZzSMx + lZGKdkpW;
        };
    }
    else {
        if ((ahWtVPUl7m0 % 4 == 0 && ahWtVPUl7m0 % 100 != 0) || (ahWtVPUl7m0 % 400 == 0)) {
            if (XQT9KvCX0Z != em) {
                if (XQT9KvCX0Z +1 <= em - 1)
                    for (mIx2NEyfh8 = XQT9KvCX0Z +1; mIx2NEyfh8 <= em - 1; mIx2NEyfh8 = mIx2NEyfh8 + 1)
                        aZzSMx = aZzSMx + EJyI7SjZtUQ[mIx2NEyfh8 - 1];
                aZzSMx = aZzSMx + EJyI7SjZtUQ[XQT9KvCX0Z -1] - sd + 1;
                aZzSMx = aZzSMx + lZGKdkpW;
            }
            else
                aZzSMx = aZzSMx + lZGKdkpW - sd + 1;
        }
        else {
            if (XQT9KvCX0Z != em) {
                if (XQT9KvCX0Z +1 <= em - 1) {
                    mIx2NEyfh8 = XQT9KvCX0Z +1;
                    while (mIx2NEyfh8 <= em - 1) {
                        aZzSMx = aZzSMx + B6z4RZbYfI[mIx2NEyfh8 - 1];
                        mIx2NEyfh8++;
                    };
                }
                aZzSMx = aZzSMx + B6z4RZbYfI[XQT9KvCX0Z -1] - sd + 1;
                aZzSMx = aZzSMx + lZGKdkpW;
            }
            else
                aZzSMx = aZzSMx + lZGKdkpW - sd + 1;
        };
    }
    printf ("%d\n", aZzSMx - 1);
}

