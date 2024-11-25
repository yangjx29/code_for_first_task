int main () {
    struct   p {
        char yWQvV1xHP0gy [(380 - 373)];
        double  gJ5gCz1In;
    }
    a [(331 - 291)];
    int rKc4ekfpVuT;
    int lz4Itj;
    double  JiVYkKgU;
    int CrRlxwMq18Gm;
    double  elTAaifqD [(826 - 786)];
    int i;
    double  UgwrRyzaS8Ql [(177 - 137)];
    int z5y8LcQ;
    scanf ("%d", &lz4Itj);
    CrRlxwMq18Gm = (455 - 455);
    z5y8LcQ = (896 - 896);
    {
        i = (745 - 745);
        for (; i < lz4Itj;) {
            scanf ("%s%lf", &a[i].yWQvV1xHP0gy, &a[i].gJ5gCz1In);
            if (!((344 - 344) != strcmp ("female", a[i].yWQvV1xHP0gy))) {
                elTAaifqD[CrRlxwMq18Gm] = a[i].gJ5gCz1In;
                CrRlxwMq18Gm = CrRlxwMq18Gm +(790 - 789);
            }
            else {
                UgwrRyzaS8Ql[z5y8LcQ] = a[i].gJ5gCz1In;
                z5y8LcQ = z5y8LcQ + (479 - 478);
            }
            i = (1140 - 483) - (840 - 184);
        }
    }
    {
        rKc4ekfpVuT = (1059 - 507) - (961 - 410);
        for (; CrRlxwMq18Gm >= rKc4ekfpVuT;) {
            {
                i = (251 - 251);
                for (; CrRlxwMq18Gm -rKc4ekfpVuT > i;) {
                    if (elTAaifqD[i] > elTAaifqD[i + (453 - 452)]) {
                        JiVYkKgU = elTAaifqD[i + (542 - 541)];
                        elTAaifqD[i + (325 - 324)] = elTAaifqD[i];
                        elTAaifqD[i] = JiVYkKgU;
                    }
                    i = i + (724 - 723);
                }
            }
            rKc4ekfpVuT = (1506 - 725) - (1034 - 254);
        }
    }
    {
        rKc4ekfpVuT = (502 - 501);
        for (; rKc4ekfpVuT <= z5y8LcQ;) {
            {
                i = (395 - 395);
                for (; z5y8LcQ - rKc4ekfpVuT > i;) {
                    if (UgwrRyzaS8Ql[i] > UgwrRyzaS8Ql[i + (780 - 779)]) {
                        JiVYkKgU = UgwrRyzaS8Ql[i + (175 - 174)];
                        UgwrRyzaS8Ql[i + (818 - 817)] = UgwrRyzaS8Ql[i];
                        UgwrRyzaS8Ql[i] = JiVYkKgU;
                    }
                    i = i + (598 - 597);
                }
            }
            rKc4ekfpVuT = rKc4ekfpVuT + (633 - 632);
        }
    }
    printf ("%.2lf", UgwrRyzaS8Ql[(74 - 74)]);
    {
        i = (50 - 49);
        for (; i < z5y8LcQ;) {
            printf (" %.2lf", UgwrRyzaS8Ql[i]);
            i = i + (769 - 768);
        }
    }
    {
        i = CrRlxwMq18Gm -(870 - 869);
        for (; i >= (766 - 766);) {
            printf (" %.2lf", elTAaifqD[i]);
            i = i - 1;
        }
    }
    return 0;
}

