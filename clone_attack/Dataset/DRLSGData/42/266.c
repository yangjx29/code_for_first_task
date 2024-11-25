void  main () {
    long  int *UTkzGdZ, *Wl9fGJTjoI0, *bSfc3X;
    long  int UgCUWDIKtsJ [100001];
    long  int LfzVqyh, Glei9I, OEf3AOK, Ftju02mfGy4W = 0;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%ld", &LfzVqyh);
    {
        UTkzGdZ = UgCUWDIKtsJ;
        while (UTkzGdZ -UgCUWDIKtsJ < LfzVqyh) {
            scanf ("%ld", UTkzGdZ);
            UTkzGdZ++;
        }
    }
    scanf ("%ld", &Glei9I);
    for (UTkzGdZ = UgCUWDIKtsJ; UTkzGdZ -UgCUWDIKtsJ < LfzVqyh -Ftju02mfGy4W;) {
        if (*UTkzGdZ == Glei9I) {
            Ftju02mfGy4W++;
            {
                Wl9fGJTjoI0 = UTkzGdZ +1;
                while (LfzVqyh > Wl9fGJTjoI0 -UgCUWDIKtsJ) {
                    *(Wl9fGJTjoI0 -1) = *Wl9fGJTjoI0;
                    Wl9fGJTjoI0++;
                }
            }
        }
        else
            UTkzGdZ++;
    }
    {
        UTkzGdZ = UgCUWDIKtsJ;
        while (UTkzGdZ -UgCUWDIKtsJ < LfzVqyh -Ftju02mfGy4W-1) {
            printf ("%ld ", *UTkzGdZ);
            UTkzGdZ++;
        }
    }
    printf ("%ld", *UTkzGdZ);
}

