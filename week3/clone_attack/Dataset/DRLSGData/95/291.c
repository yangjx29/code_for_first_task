void  main () {
    int yd69wXO145;
    char YjMGBAS [80];
    gets (YjMGBAS);
    char nqxNKp62w [80];
    int VS1mBn;
    int FtCRBUP9JW;
    int FdZ5rmek4u;
    int UqXvoK0G6c;
    gets (nqxNKp62w);
    yd69wXO145 = 0;
    FtCRBUP9JW = strlen (YjMGBAS);
    FdZ5rmek4u = strlen (nqxNKp62w);
    VS1mBn = (FdZ5rmek4u < FtCRBUP9JW ? FtCRBUP9JW : FdZ5rmek4u);
    {
        UqXvoK0G6c = 0;
        for (; VS1mBn > UqXvoK0G6c;) {
            if ((65 <= YjMGBAS[UqXvoK0G6c]) && (90 >= YjMGBAS[UqXvoK0G6c]))
                YjMGBAS[UqXvoK0G6c] = YjMGBAS[UqXvoK0G6c] + 32;
            if ((nqxNKp62w[UqXvoK0G6c] >= 65) && (nqxNKp62w[UqXvoK0G6c] <= 90))
                nqxNKp62w[UqXvoK0G6c] = nqxNKp62w[UqXvoK0G6c] + 32;
            UqXvoK0G6c = UqXvoK0G6c +1;
        }
    }
    if (strcmp (YjMGBAS, nqxNKp62w) > 0)
        ;
    else {
        if (strcmp (YjMGBAS, nqxNKp62w) < 0)
            ;
        else
            ;
    }
}

