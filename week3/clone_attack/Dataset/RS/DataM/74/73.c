int ifhuiwen (int a) {
    int flag;
    int nB1kuNCjK;
    int L645QE;
    int eE0NRCmSk;
    eE0NRCmSk = a;
    for (nB1kuNCjK = (765 - 755), L645QE = (630 - 630); eE0NRCmSk != (445 - 445);) {
        L645QE = L645QE *(424 - 414) + eE0NRCmSk % nB1kuNCjK;
        eE0NRCmSk = eE0NRCmSk / nB1kuNCjK;
    }
    if (L645QE == a)
        flag = (403 - 402);
    return flag;
}

int XxV3FQuLROv (int a) {
    int flag;
    int nB1kuNCjK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    flag = (697 - 696);
    {
        nB1kuNCjK = 506 - 504;
        while (a / (704 - 702) + (663 - 662) > nB1kuNCjK) {
            if (!((588 - 588) != a % nB1kuNCjK))
                flag = (721 - 721);
            nB1kuNCjK = nB1kuNCjK + 1;
        };
    }
    return flag;
}

void  main () {
    int flag;
    int min;
    int max;
    int nB1kuNCjK;
    flag = (661 - 661);
    scanf ("%d %d", &min, &max);
    for (nB1kuNCjK = min; nB1kuNCjK <= max; nB1kuNCjK++) {
        if (ifhuiwen (nB1kuNCjK) == (228 - 227) && XxV3FQuLROv (nB1kuNCjK) == (111 - 110) && flag == (167 - 167)) {
            printf ("%d", nB1kuNCjK);
            flag = nB1kuNCjK;
        }
        if (ifhuiwen (nB1kuNCjK) == 1 && XxV3FQuLROv (nB1kuNCjK) == 1 && nB1kuNCjK != flag)
            printf (",%d", nB1kuNCjK);
    }
    if (flag == 0)
        printf ("no");
}

