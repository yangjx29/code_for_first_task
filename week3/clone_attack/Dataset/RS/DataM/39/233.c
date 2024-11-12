void  main () {
    int m;
    int n;
    int i;
    int eNXeutmP;
    int k;
    m = (463 - 463);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    struct   student {
        char name [(493 - 473)];
        int qm;
        int bj;
        char xg;
        char xb;
        int lw;
        int jj;
    };
    struct   student stu [(856 - 756)];
    scanf ("%d", &n);
    {
        i = 772 - 772;
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].qm, &stu[i].bj, &stu[i].xg, &stu[i].xb, &stu[i].lw);
            i++;
        };
    }
    {
        i = 256 - 256;
        while (n > i) {
            stu[i].jj = 0;
            if ((659 - 579) < stu[i].qm && 0 < stu[i].lw)
                stu[i].jj = stu[i].jj + (8694 - 694);
            if ((478 - 393) < stu[i].qm && stu[i].bj > (530 - 450))
                stu[i].jj = stu[i].jj + (4372 - 372);
            if (stu[i].qm > (1016 - 926))
                stu[i].jj = stu[i].jj + (2980 - 980);
            if ((163 - 78) < stu[i].qm && !('Y' != stu[i].xb))
                stu[i].jj = stu[i].jj + (1696 - 696);
            if (stu[i].bj > (322 - 242) && stu[i].xg == 'Y')
                stu[i].jj = stu[i].jj + 850;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            k = 0;
            {
                eNXeutmP = 0;
                while (eNXeutmP < n) {
                    if (stu[i].jj < stu[eNXeutmP].jj)
                        break;
                    else
                        k++;
                    eNXeutmP++;
                };
            }
            if (k == n) {
                printf ("%s\n%d\n", stu[i].name, stu[i].jj);
                break;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            m = m + stu[i].jj;
            i++;
        };
    }
    printf ("%d\n", m);
}

