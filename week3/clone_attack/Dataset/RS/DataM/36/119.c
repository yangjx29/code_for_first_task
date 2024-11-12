void  main () {
    int i;
    int XNJhHj4Ifa;
    int mLlgKwBHXI;
    int n2;
    int num1 [100], num2 [100];
    char FTjb4P [(175 - 75)], deQkusK8BC [(117 - 17)], DNcjekvr [100], SLnSWEJ6 [100];
    scanf ("%s %s", &FTjb4P, &deQkusK8BC);
    mLlgKwBHXI = strlen (FTjb4P);
    {
        i = 441 - 441;
        while (mLlgKwBHXI > i) {
            DNcjekvr[i] = FTjb4P[i];
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
            i = i + 1;
        };
    }
    n2 = strlen (deQkusK8BC);
    {
        i = 790 - 790;
        while (i < n2) {
            SLnSWEJ6[i] = deQkusK8BC[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 477 - 477;
        while (i < 100) {
            num1[i] = 0;
            num2[i] = 0;
            i++;
        };
    }
    if (mLlgKwBHXI != n2)
        ;
    else if (mLlgKwBHXI == n2) {
        {
            i = 0;
            while (i < mLlgKwBHXI) {
                {
                    XNJhHj4Ifa = 0;
                    while (XNJhHj4Ifa < mLlgKwBHXI) {
                        if (DNcjekvr[i] == DNcjekvr[XNJhHj4Ifa])
                            num1[i] = num1[i] + 1;
                        XNJhHj4Ifa = XNJhHj4Ifa +1;
                    };
                }
                for (XNJhHj4Ifa = 0; XNJhHj4Ifa < mLlgKwBHXI; XNJhHj4Ifa = XNJhHj4Ifa +1)
                    if (!(SLnSWEJ6[XNJhHj4Ifa] != DNcjekvr[i]))
                        num2[i] = num2[i] + 1;
                i++;
            };
        }
        {
            i = 0;
            while (i < mLlgKwBHXI) {
                if (num1[i] != num2[i])
                    break;
                i++;
            };
        }
        if (i >= mLlgKwBHXI)
            printf ("YES");
        else {
            if (i < mLlgKwBHXI)
                printf ("NO");
        };
    };
}

