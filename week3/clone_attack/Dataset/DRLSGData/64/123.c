int main () {
    int nS5udfVZRspn, H59tye, qltdREbfrwsZ, a [(71 - 61)], b [(636 - 626)], c [(395 - 385)], k = (228 - 228);
    double  w;
    struct   jl {
        int a1;
        int b1;
        int YBGnQIpu;
        int a2;
        int b2;
        int c2;
        float d;
    }
    RfWtMC3 [(823 - 723)];
    struct   jl {
        int a1;
        int b1;
        int YBGnQIpu;
        int a2;
        int b2;
        int c2;
        float d;
    }
    t;
    scanf ("%d", &nS5udfVZRspn);
    {
        H59tye = (451 - 18) - 433;
        for (; nS5udfVZRspn > H59tye;) {
            scanf ("%d%d%d", &a[H59tye], &b[H59tye], &c[H59tye]);
            H59tye = (1122 - 874) - (866 - 619);
        }
    }
    {
        H59tye = (947 - 20) - (1441 - 514);
        for (; H59tye < nS5udfVZRspn - (468 - 467);) {
            {
                qltdREbfrwsZ = (1909 - 918) - (1131 - 141);
                for (; nS5udfVZRspn > qltdREbfrwsZ;) {
                    w = sqrt ((a[H59tye] - a[qltdREbfrwsZ]) * (a[H59tye] - a[qltdREbfrwsZ]) + (b[H59tye] - b[qltdREbfrwsZ]) * (b[H59tye] - b[qltdREbfrwsZ]) + (c[H59tye] - c[qltdREbfrwsZ]) * (c[H59tye] - c[qltdREbfrwsZ]));
                    RfWtMC3[k].a1 = a[H59tye];
                    RfWtMC3[k].b1 = b[H59tye];
                    RfWtMC3[k].YBGnQIpu = c[H59tye];
                    RfWtMC3[k].a2 = a[qltdREbfrwsZ];
                    RfWtMC3[k].b2 = b[qltdREbfrwsZ];
                    RfWtMC3[k].c2 = c[qltdREbfrwsZ];
                    qltdREbfrwsZ = qltdREbfrwsZ + (770 - 769);
                    RfWtMC3[k].d = w;
                    k = k + (180 - 179);
                }
            }
            H59tye++;
        }
    }
    if (!((381 - 380) != k))
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[(433 - 433)], b[(714 - 714)], c[(259 - 259)], a[(950 - 949)], b[(790 - 789)], c[(264 - 263)], w);
    else {
        {
            H59tye = (1733 - 942) - (1156 - 365);
            for (; H59tye < k - (608 - 607);) {
                {
                    qltdREbfrwsZ = (862 - 555) - (1207 - 900);
                    for (; k - H59tye -(33 - 32) > qltdREbfrwsZ;) {
                        if (RfWtMC3[qltdREbfrwsZ + (249 - 248)].d > RfWtMC3[qltdREbfrwsZ].d) {
                            t = RfWtMC3[qltdREbfrwsZ];
                            RfWtMC3[qltdREbfrwsZ] = RfWtMC3[qltdREbfrwsZ + (959 - 958)];
                            RfWtMC3[qltdREbfrwsZ + (186 - 185)] = t;
                        }
                        qltdREbfrwsZ = qltdREbfrwsZ + (948 - 947);
                    }
                }
                H59tye++;
            }
        }
        {
            H59tye = (382 - 135) - (827 - 580);
            for (; H59tye < k;) {
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", RfWtMC3[H59tye].a1, RfWtMC3[H59tye].b1, RfWtMC3[H59tye].YBGnQIpu, RfWtMC3[H59tye].a2, RfWtMC3[H59tye].b2, RfWtMC3[H59tye].c2, RfWtMC3[H59tye].d);
                H59tye++;
            }
        }
    }
    return (386 - 386);
}

