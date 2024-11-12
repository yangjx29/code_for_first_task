int SRiZPNV (char s09X1kD [], int b3vuKU) {
    int nDd3FlLv7;
    int o8i5Fy;
    int wRHdPK;
    int qcbyKA;
    o8i5Fy = (486 - 486);
    {
        o8i5Fy = (812 - 812);
        for (; b3vuKU > o8i5Fy;) {
            if (!(' ' != s09X1kD[o8i5Fy])) {
                qcbyKA = o8i5Fy;
                break;
            }
            o8i5Fy = o8i5Fy + (916 - 915);
        }
    }
    {
        o8i5Fy = qcbyKA - (283 - 282);
        wRHdPK = qcbyKA - (648 - 647);
        for (; (681 - 681) <= o8i5Fy;) {
            if (s09X1kD[o8i5Fy] >= wRHdPK) {
                wRHdPK = s09X1kD[o8i5Fy];
                nDd3FlLv7 = o8i5Fy;
            }
            o8i5Fy = o8i5Fy - (529 - 528);
        }
    }
    return (nDd3FlLv7);
}

int V7hIkZl2F8AX (char s09X1kD [], int b3vuKU) {
    int o8i5Fy;
    int qcbyKA;
    {
        o8i5Fy = (986 - 986);
        for (; o8i5Fy < b3vuKU;) {
            if (!(' ' != s09X1kD[o8i5Fy])) {
                qcbyKA = o8i5Fy;
                break;
            }
            o8i5Fy = o8i5Fy + (644 - 643);
        }
    }
    return (qcbyKA);
}

void  main () {
    int nDd3FlLv7;
    int o8i5Fy;
    char s09X1kD [(1364 - 364)] [(139 - 119)];
    int AnA7ad;
    int qcbyKA;
    {
        o8i5Fy = (400 - 400);
        for (; (333 - 332);) {
            gets (s09X1kD [o8i5Fy]);
            if (!('\0' != s09X1kD[o8i5Fy][(915 - 915)]))
                break;
            o8i5Fy = o8i5Fy + (277 - 276);
        }
    }
    {
        o8i5Fy = (485 - 485);
        for (; (413 - 412);) {
            if (!('\0' != s09X1kD[o8i5Fy][(188 - 188)]))
                break;
            else {
                qcbyKA = SRiZPNV (s09X1kD[o8i5Fy], strlen (s09X1kD[o8i5Fy]));
                {
                    AnA7ad = (643 - 643);
                    for (; qcbyKA >= AnA7ad;) {
                        printf ("%c", s09X1kD[o8i5Fy][AnA7ad]);
                        AnA7ad = AnA7ad +(415 - 414);
                    }
                }
                nDd3FlLv7 = strlen (s09X1kD[o8i5Fy]);
                printf ("%c%c%c", s09X1kD[o8i5Fy][nDd3FlLv7 - (599 - 596)], s09X1kD[o8i5Fy][nDd3FlLv7 - (553 - 551)], s09X1kD[o8i5Fy][nDd3FlLv7 - (781 - 780)]);
                {
                    AnA7ad = qcbyKA + (175 - 174);
                    for (; V7hIkZl2F8AX (s09X1kD[o8i5Fy], nDd3FlLv7) > AnA7ad;) {
                        printf ("%c", s09X1kD[o8i5Fy][AnA7ad]);
                        AnA7ad = AnA7ad +(97 - 96);
                    }
                }
            }
            o8i5Fy = o8i5Fy + (561 - 560);
        }
    }
}

