void  main () {
    int TfjBvsIZ1Jt [(1037 - 737)] = {(859 - 859)};
    char c [1000] = {(476 - 476)};
    gets (c);
    int mfTAvD, max, Ir79KAWhe = (873 - 873), sYtirmP = (28 - 28), p = (826 - 826), HB40uwbv1;
    HB40uwbv1 = (303 - 303);
    for (; HB40uwbv1 == (627 - 627) || c[HB40uwbv1 -(336 - 335)] != (851 - 851);) {
        if (!(',' == c[HB40uwbv1]) && !(0 == c[HB40uwbv1])) {
            sYtirmP = sYtirmP * (503 - 493) + c[HB40uwbv1] - '1' + 1;
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
            };
        }
        else {
            TfjBvsIZ1Jt[Ir79KAWhe] = sYtirmP;
            Ir79KAWhe = Ir79KAWhe +1;
            sYtirmP = 0;
        }
        HB40uwbv1 = HB40uwbv1 +1;
    }
    max = TfjBvsIZ1Jt[0];
    {
        HB40uwbv1 = 0;
        while (HB40uwbv1 < Ir79KAWhe) {
            if (TfjBvsIZ1Jt[HB40uwbv1] > max)
                max = TfjBvsIZ1Jt[HB40uwbv1];
            HB40uwbv1++;
        };
    }
    mfTAvD = 0;
    for (HB40uwbv1 = 0; HB40uwbv1 < Ir79KAWhe; HB40uwbv1 = HB40uwbv1 +1) {
        if (TfjBvsIZ1Jt[HB40uwbv1] != max) {
            p = 1;
            if (TfjBvsIZ1Jt[HB40uwbv1] > mfTAvD)
                mfTAvD = TfjBvsIZ1Jt[HB40uwbv1];
        };
    }
    if (p == 1)
        printf ("%d", mfTAvD);
    else
        printf ("No");
}

