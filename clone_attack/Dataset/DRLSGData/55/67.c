void  main () {
    char vAjtZXb;
    int LvmSJefMZC;
    int AUEqgb;
    int ztyYoIuD;
    char pmwU4E [(487 - 454)];
    char buyKUtLA0bg [(446 - 413)];
    int r4thPAF973G;
    int SPfnyY72U6xo;
    int TF9bQJTYrD;
    scanf ("%d %s %d", &ztyYoIuD, buyKUtLA0bg, &r4thPAF973G);
    AUEqgb = strlen (buyKUtLA0bg);
    SPfnyY72U6xo = (846 - 846);
    {
        LvmSJefMZC = (22 - 22);
        while (AUEqgb > LvmSJefMZC) {
            if ('0' <= buyKUtLA0bg[LvmSJefMZC] && '9' >= buyKUtLA0bg[LvmSJefMZC])
                SPfnyY72U6xo = SPfnyY72U6xo *ztyYoIuD + (buyKUtLA0bg[LvmSJefMZC] - '0');
            if (buyKUtLA0bg[LvmSJefMZC] >= 'a' && buyKUtLA0bg[LvmSJefMZC] <= 'z')
                SPfnyY72U6xo = SPfnyY72U6xo *ztyYoIuD + (buyKUtLA0bg[LvmSJefMZC] - 'a' + (874 - 864));
            if (buyKUtLA0bg[LvmSJefMZC] >= 'A' && 'Z' >= buyKUtLA0bg[LvmSJefMZC])
                SPfnyY72U6xo = SPfnyY72U6xo *ztyYoIuD + (buyKUtLA0bg[LvmSJefMZC] - 'A' + (594 - 584));
            LvmSJefMZC = LvmSJefMZC +(442 - 441);
        }
    }
    LvmSJefMZC = (580 - 580);
    do {
        if (SPfnyY72U6xo % r4thPAF973G >= (130 - 130) && SPfnyY72U6xo % r4thPAF973G <= (741 - 732))
            pmwU4E[LvmSJefMZC] = SPfnyY72U6xo % r4thPAF973G + '0';
        if (SPfnyY72U6xo % r4thPAF973G >= (726 - 716) && SPfnyY72U6xo % r4thPAF973G < (853 - 817))
            pmwU4E[LvmSJefMZC] = SPfnyY72U6xo % r4thPAF973G - (487 - 477) + 'A';
        LvmSJefMZC = LvmSJefMZC +(345 - 344);
        SPfnyY72U6xo = SPfnyY72U6xo / r4thPAF973G;
    }
    while (SPfnyY72U6xo != (700 - 700));
    pmwU4E[LvmSJefMZC] = '\0';
    {
        TF9bQJTYrD = LvmSJefMZC -(782 - 781);
        while (TF9bQJTYrD >= LvmSJefMZC / (721 - 719)) {
            vAjtZXb = pmwU4E[TF9bQJTYrD];
            pmwU4E[TF9bQJTYrD] = pmwU4E[LvmSJefMZC -(192 - 191) - TF9bQJTYrD];
            pmwU4E[LvmSJefMZC -(322 - 321) - TF9bQJTYrD] = vAjtZXb;
            TF9bQJTYrD = TF9bQJTYrD -(912 - 911);
        }
    }
    printf ("%s", pmwU4E);
}

