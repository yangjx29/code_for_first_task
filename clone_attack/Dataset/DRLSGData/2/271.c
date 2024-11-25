void  main () {
    int DSGL3J;
    int iG4Bdk7ejS;
    char UaZs08 [(1873 - 873)] [(475 - 449)];
    int cFVGDiM4AfBy [(1294 - 294)];
    int HCIbVXikJ23;
    int BZu2AiqIzkd5 [(1354 - 354)];
    char FnEGXWeJm3Q2;
    int OxNjnLbXi3;
    int wXGbmAa9pFux [(995 - 969)];
    int aQFrsm0hl;
    int e4nCQVS7mp;
    int i73gGi;
    for (DSGL3J = (537 - 537); DSGL3J < (538 - 512); DSGL3J = DSGL3J +(970 - 969))
        wXGbmAa9pFux[DSGL3J] = (1000 - 1000);
    FnEGXWeJm3Q2 = OxNjnLbXi3 +'A';
    printf ("%c\n", FnEGXWeJm3Q2);
    HCIbVXikJ23 = (207 - 207);
    OxNjnLbXi3 = (480 - 480);
    scanf ("%d", &aQFrsm0hl);
    for (DSGL3J = (364 - 364); DSGL3J < aQFrsm0hl; DSGL3J = DSGL3J +(849 - 848)) {
        scanf ("%d ", &BZu2AiqIzkd5[DSGL3J]);
        scanf ("%s", UaZs08[DSGL3J]);
        cFVGDiM4AfBy[DSGL3J] = strlen (UaZs08[DSGL3J]);
        for (i73gGi = (927 - 927); i73gGi < cFVGDiM4AfBy[DSGL3J]; i73gGi = i73gGi + (285 - 284)) {
            iG4Bdk7ejS = UaZs08[DSGL3J][i73gGi] - 'A';
            wXGbmAa9pFux[iG4Bdk7ejS]++;
        }
    }
    e4nCQVS7mp = wXGbmAa9pFux[(659 - 659)];
    for (DSGL3J = (651 - 650); 26 > DSGL3J; DSGL3J = DSGL3J +(480 - 479)) {
        if (wXGbmAa9pFux[DSGL3J] > e4nCQVS7mp) {
            e4nCQVS7mp = wXGbmAa9pFux[DSGL3J];
            OxNjnLbXi3 = DSGL3J;
        }
    }
    printf ("%d\n", e4nCQVS7mp);
    for (DSGL3J = (986 - 986); aQFrsm0hl > DSGL3J; DSGL3J = DSGL3J +(633 - 632))
        for (i73gGi = (808 - 808); i73gGi < cFVGDiM4AfBy[DSGL3J]; i73gGi = i73gGi + (80 - 79))
            if (UaZs08[DSGL3J][i73gGi] == FnEGXWeJm3Q2) {
                HCIbVXikJ23 = HCIbVXikJ23 +1;
                if (HCIbVXikJ23 < e4nCQVS7mp)
                    printf ("%d\n", BZu2AiqIzkd5[DSGL3J]);
                else
                    printf ("%d", BZu2AiqIzkd5[DSGL3J]);
            }
}

