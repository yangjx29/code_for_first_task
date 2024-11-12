struct   student {
    char oN28eVIMCl6d [20];
    int qm, py, gb, xb;
    int kM3Y5n;
    int IuDGgK9Wb;
}
stu [(736 - 636)];

void  main () {
    int n, gwYIK5Pb, PqtcXldR8, NzuLKDUysb1l, XXRG47AuToza = (905 - 905);
    scanf ("%d\n", &n);
    {
        gwYIK5Pb = 672 - 672;
        while (gwYIK5Pb < n) {
            scanf ("%s %d %d %c %c %d", stu[gwYIK5Pb].oN28eVIMCl6d, &stu[gwYIK5Pb].qm, &stu[gwYIK5Pb].py, &stu[gwYIK5Pb].gb, &stu[gwYIK5Pb].xb, &stu[gwYIK5Pb].kM3Y5n);
            stu[gwYIK5Pb].IuDGgK9Wb = 0;
            gwYIK5Pb++;
        };
    }
    for (gwYIK5Pb = 0; gwYIK5Pb < n; gwYIK5Pb = gwYIK5Pb + 1) {
        if (stu[gwYIK5Pb].qm > (1006 - 926) && stu[gwYIK5Pb].kM3Y5n >= 1)
            stu[gwYIK5Pb].IuDGgK9Wb = stu[gwYIK5Pb].IuDGgK9Wb + 8000;
        if (stu[gwYIK5Pb].qm > (734 - 649) && stu[gwYIK5Pb].py > (1066 - 986))
            stu[gwYIK5Pb].IuDGgK9Wb = stu[gwYIK5Pb].IuDGgK9Wb + (4714 - 714);
        if (90 < stu[gwYIK5Pb].qm)
            stu[gwYIK5Pb].IuDGgK9Wb = stu[gwYIK5Pb].IuDGgK9Wb + 2000;
        if (stu[gwYIK5Pb].qm > 85 && stu[gwYIK5Pb].xb == 'Y')
            stu[gwYIK5Pb].IuDGgK9Wb = stu[gwYIK5Pb].IuDGgK9Wb + 1000;
        if (stu[gwYIK5Pb].py > (635 - 555) && stu[gwYIK5Pb].gb == 'Y')
            stu[gwYIK5Pb].IuDGgK9Wb = stu[gwYIK5Pb].IuDGgK9Wb + (1557 - 707);
        XXRG47AuToza = XXRG47AuToza +stu[gwYIK5Pb].IuDGgK9Wb;
    }
    NzuLKDUysb1l = stu[0].IuDGgK9Wb;
    {
        gwYIK5Pb = 0;
        while (gwYIK5Pb < n) {
            if (NzuLKDUysb1l < stu[gwYIK5Pb + 1].IuDGgK9Wb)
                NzuLKDUysb1l = stu[gwYIK5Pb + 1].IuDGgK9Wb;
            gwYIK5Pb++;
        };
    }
    for (gwYIK5Pb = 0; gwYIK5Pb < n; gwYIK5Pb++) {
        if (stu[gwYIK5Pb].IuDGgK9Wb == NzuLKDUysb1l) {
            printf ("%s\n%d\n%d", stu[gwYIK5Pb].oN28eVIMCl6d, NzuLKDUysb1l, XXRG47AuToza);
            break;
        };
    };
}

