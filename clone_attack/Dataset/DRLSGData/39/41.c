struct   student {
    char S07iMG2Y9X [(61 - 40)];
    int aI09Oc52;
    int VotfJFwgPC;
    char RUIdD07iZ;
    char rR0nSGgLW;
    int cDlY2W;
    int AXQBlCy;
};
void  main () {
    int Wi9rURyv;
    int long  qATncyNq = (888 - 888);
    int cQbI4nu8r1k;
    struct   student vcNp1ri [(321 - 221)];
    struct   student l;
    int NHzaXi;
    scanf ("%d", &Wi9rURyv);
    for (cQbI4nu8r1k = (249 - 249); cQbI4nu8r1k < Wi9rURyv; cQbI4nu8r1k = cQbI4nu8r1k + (226 - 225)) {
        scanf ("%s %d %d %c %c %d", vcNp1ri[cQbI4nu8r1k].S07iMG2Y9X, &vcNp1ri[cQbI4nu8r1k].aI09Oc52, &vcNp1ri[cQbI4nu8r1k].VotfJFwgPC, &vcNp1ri[cQbI4nu8r1k].RUIdD07iZ, &vcNp1ri[cQbI4nu8r1k].rR0nSGgLW, &vcNp1ri[cQbI4nu8r1k].cDlY2W);
    }
    for (cQbI4nu8r1k = (139 - 139); cQbI4nu8r1k < Wi9rURyv; cQbI4nu8r1k++) {
        vcNp1ri[cQbI4nu8r1k].AXQBlCy = (12 - 12);
        if ((vcNp1ri[cQbI4nu8r1k].aI09Oc52 > (280 - 200)) && ((89 - 89) < vcNp1ri[cQbI4nu8r1k].cDlY2W))
            vcNp1ri[cQbI4nu8r1k].AXQBlCy = vcNp1ri[cQbI4nu8r1k].AXQBlCy + (8483 - 483);
        if (((529 - 444) < vcNp1ri[cQbI4nu8r1k].aI09Oc52) && (vcNp1ri[cQbI4nu8r1k].VotfJFwgPC > (907 - 827)))
            vcNp1ri[cQbI4nu8r1k].AXQBlCy = vcNp1ri[cQbI4nu8r1k].AXQBlCy + (4554 - 554);
        if ((899 - 809) < vcNp1ri[cQbI4nu8r1k].aI09Oc52)
            vcNp1ri[cQbI4nu8r1k].AXQBlCy = vcNp1ri[cQbI4nu8r1k].AXQBlCy + (2874 - 874);
        if ((vcNp1ri[cQbI4nu8r1k].aI09Oc52 > (541 - 456)) && (!('Y' != vcNp1ri[cQbI4nu8r1k].rR0nSGgLW)))
            vcNp1ri[cQbI4nu8r1k].AXQBlCy = vcNp1ri[cQbI4nu8r1k].AXQBlCy + (1235 - 235);
        if ((vcNp1ri[cQbI4nu8r1k].VotfJFwgPC > (453 - 373)) && (vcNp1ri[cQbI4nu8r1k].RUIdD07iZ == 'Y'))
            vcNp1ri[cQbI4nu8r1k].AXQBlCy = vcNp1ri[cQbI4nu8r1k].AXQBlCy + (1517 - 667);
    }
    for (NHzaXi = (181 - 180); NHzaXi < Wi9rURyv; NHzaXi = NHzaXi +(193 - 192)) {
        cQbI4nu8r1k = (582 - 582);
        while (cQbI4nu8r1k < Wi9rURyv -NHzaXi) {
            if (vcNp1ri[cQbI4nu8r1k + (631 - 630)].AXQBlCy > vcNp1ri[cQbI4nu8r1k].AXQBlCy) {
                l = vcNp1ri[cQbI4nu8r1k];
                vcNp1ri[cQbI4nu8r1k] = vcNp1ri[cQbI4nu8r1k + (890 - 889)];
                vcNp1ri[cQbI4nu8r1k + 1] = l;
            }
            cQbI4nu8r1k = cQbI4nu8r1k + 1;
        }
    }
    {
        cQbI4nu8r1k = (846 - 846);
        for (; cQbI4nu8r1k < Wi9rURyv;) {
            qATncyNq = qATncyNq + vcNp1ri[cQbI4nu8r1k].AXQBlCy;
            cQbI4nu8r1k = cQbI4nu8r1k + 1;
        }
    }
    printf ("%s", vcNp1ri[0].S07iMG2Y9X);
    printf ("\n%d\n", vcNp1ri[0].AXQBlCy);
    printf ("%d", qATncyNq);
}

