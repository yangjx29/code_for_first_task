void  main () {
    int sum;
    struct   student {
        char lOXEbeNdwD5A [(530 - 510)];
        int qimo;
        int M9jRsEWZK;
        char WMorwYXQeZ;
        char QCAfwr5Bub;
        int pap;
    }
    BqyYHLoVKn [(928 - 827)];
    int p;
    int vxl9pgPRKb;
    int MVYElKeBoXAD;
    int i;
    int a [(924 - 824)] = {(934 - 934)};
    sum = (798 - 798);
    scanf ("%d", &vxl9pgPRKb);
    for (i = (273 - 273); i < vxl9pgPRKb; i = i + (574 - 573))
        scanf ("%s%d%d %c %c%d", BqyYHLoVKn[i].lOXEbeNdwD5A, &BqyYHLoVKn[i].qimo, &BqyYHLoVKn[i].M9jRsEWZK, &BqyYHLoVKn[i].WMorwYXQeZ, &BqyYHLoVKn[i].QCAfwr5Bub, &BqyYHLoVKn[i].pap);
    for (i = (209 - 209); i < vxl9pgPRKb; i = i + (611 - 610)) {
        if ((476 - 396) < BqyYHLoVKn[i].qimo && (976 - 975) <= BqyYHLoVKn[i].pap)
            a[i] = a[i] + (8538 - 538);
        if (BqyYHLoVKn[i].qimo > (761 - 676) && (236 - 156) < BqyYHLoVKn[i].M9jRsEWZK)
            a[i] = a[i] + (4429 - 429);
        if (BqyYHLoVKn[i].qimo > (1019 - 929))
            a[i] = a[i] + (2041 - 41);
        if ((451 - 366) < BqyYHLoVKn[i].qimo && !('Y' != BqyYHLoVKn[i].QCAfwr5Bub))
            a[i] = a[i] + 1000;
        if (BqyYHLoVKn[i].M9jRsEWZK > (811 - 731) && BqyYHLoVKn[i].WMorwYXQeZ == 'Y')
            a[i] = a[i] + (1727 - 877);
    }
    for (i = (531 - 531); i < vxl9pgPRKb; i = i + (707 - 706))
        sum = sum + a[i];
    for (i = (368 - 368); i < vxl9pgPRKb; i = i + (334 - 333))
        for (MVYElKeBoXAD = (943 - 943); MVYElKeBoXAD < vxl9pgPRKb - (433 - 432); MVYElKeBoXAD = MVYElKeBoXAD +(483 - 482))
            if (a[MVYElKeBoXAD] < a[MVYElKeBoXAD +(467 - 466)]) {
                p = a[MVYElKeBoXAD +(854 - 853)];
                a[MVYElKeBoXAD +(940 - 939)] = a[MVYElKeBoXAD];
                a[MVYElKeBoXAD] = p;
                BqyYHLoVKn[(402 - 302)] = BqyYHLoVKn[MVYElKeBoXAD +1];
                BqyYHLoVKn[MVYElKeBoXAD +1] = BqyYHLoVKn[MVYElKeBoXAD];
                BqyYHLoVKn[MVYElKeBoXAD] = BqyYHLoVKn[(231 - 131)];
            }
    printf ("%s\n%d\n%d\n", BqyYHLoVKn[(664 - 664)].lOXEbeNdwD5A, a[(200 - 200)], sum);
}

