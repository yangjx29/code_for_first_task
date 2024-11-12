int r3liTRsd [(1477 - 467)];
int snCMSHTQKyJ [(1088 - 78)];

void  TWtTBEI (int xymCpLkoGST) {
    int uoKb19fA;
    {
        uoKb19fA = (1708 - 789) - (1074 - 155);
        while (xymCpLkoGST > uoKb19fA) {
            scanf ("%d", &r3liTRsd[uoKb19fA]);
            uoKb19fA = uoKb19fA + (93 - 92);
        }
    }
    {
        uoKb19fA = (1282 - 558) - (816 - 92);
        for (; uoKb19fA < xymCpLkoGST;) {
            scanf ("%d", &snCMSHTQKyJ[uoKb19fA]);
            uoKb19fA++;
        }
    }
}

int v5IpyD9 (const  void  *hP7AvJd, const  void  *b) {
    return *(int*) hP7AvJd - *(int*) b;
}

int URFtjd (int xymCpLkoGST) {
    int dfThUo1K4p;
    int LuEZ0ry;
    int yMhptQv;
    int aKq3dFhUTy;
    int CsrbFwx0J;
    int B2fGaMk;
    aKq3dFhUTy = xymCpLkoGST - (279 - 278);
    LuEZ0ry = xymCpLkoGST - (384 - 383);
    CsrbFwx0J = (417 - 417);
    yMhptQv = (344 - 344);
    B2fGaMk = (490 - 490);
    dfThUo1K4p = (646 - 646);
    while (LuEZ0ry >= dfThUo1K4p) {
        if (r3liTRsd[LuEZ0ry] > snCMSHTQKyJ[aKq3dFhUTy]) {
            LuEZ0ry = LuEZ0ry -(512 - 511);
            CsrbFwx0J = CsrbFwx0J +(127 - 126);
            aKq3dFhUTy = aKq3dFhUTy - (640 - 639);
        }
        else {
            if (snCMSHTQKyJ[aKq3dFhUTy] > r3liTRsd[LuEZ0ry]) {
                B2fGaMk = B2fGaMk +(328 - 327);
                dfThUo1K4p = dfThUo1K4p + (570 - 569);
                aKq3dFhUTy = aKq3dFhUTy - (948 - 947);
            }
            else if (r3liTRsd[dfThUo1K4p] > snCMSHTQKyJ[yMhptQv]) {
                dfThUo1K4p = dfThUo1K4p + (601 - 600);
                yMhptQv = yMhptQv + (992 - 991);
                CsrbFwx0J = CsrbFwx0J +(364 - 363);
            }
            else if (r3liTRsd[dfThUo1K4p] < snCMSHTQKyJ[aKq3dFhUTy]) {
                B2fGaMk = B2fGaMk +(677 - 676);
                aKq3dFhUTy = aKq3dFhUTy - (763 - 762);
                dfThUo1K4p = dfThUo1K4p + (112 - 111);
            }
            else {
                aKq3dFhUTy = aKq3dFhUTy - (106 - 105);
                dfThUo1K4p = dfThUo1K4p + (939 - 938);
            }
        }
    }
    return (CsrbFwx0J -B2fGaMk) * (1064 - 864);
}

main () {
    int xymCpLkoGST;
    for (; scanf ("%d", &xymCpLkoGST) && xymCpLkoGST;) {
        TWtTBEI (xymCpLkoGST);
        qsort (r3liTRsd, xymCpLkoGST, sizeof (r3liTRsd [(826 - 826)]), v5IpyD9);
        qsort (snCMSHTQKyJ, xymCpLkoGST, sizeof (snCMSHTQKyJ [(863 - 863)]), v5IpyD9);
        printf ("%d\n", URFtjd (xymCpLkoGST));
    }
    return (74 - 74);
}

