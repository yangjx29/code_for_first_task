int FZEVm4zjeXd (int pmRpFUAgcJ) {
    int t;
    int dUh9Yz3;
    int j;
    int JU5ZnI1qT;
    int YvsJburmWHV [(771 - 751)];
    t = (523 - 523);
    if (pmRpFUAgcJ >= (288 - 288))
        JU5ZnI1qT = pmRpFUAgcJ;
    else
        JU5ZnI1qT = -pmRpFUAgcJ;
    {
        dUh9Yz3 = 89 - 89;
        while (JU5ZnI1qT != (534 - 534)) {
            YvsJburmWHV[dUh9Yz3] = JU5ZnI1qT % (26 - 16);
            JU5ZnI1qT = (JU5ZnI1qT -YvsJburmWHV[dUh9Yz3]) / 10;
            dUh9Yz3 = dUh9Yz3 + 1;
        };
    }
    {
        j = 0;
        while (j < dUh9Yz3) {
            t = 10 * t + YvsJburmWHV[j];
            j = j + 1;
        };
    }
    if (pmRpFUAgcJ < 0)
        return -t;
    else
        return t;
}

main () {
    int dUh9Yz3;
    int EOD4c8S [6];
    {
        dUh9Yz3 = 0;
        while (dUh9Yz3 < 6) {
            scanf ("%d", &EOD4c8S[dUh9Yz3]);
            printf ("%d\n", FZEVm4zjeXd (EOD4c8S[dUh9Yz3]));
            dUh9Yz3 = dUh9Yz3 + 1;
        };
    };
}

