void  kGU7TIP0Cl (char [] [(904 - 894)], int *, int *, int);

void  main () {
    long  ZHmLcG7Nyo2W, RlOPYjGE, Lzb5g9, b, zTuxzjhi1J2 = (577 - 577), kUAQCZKde8F;
    char LyzMh3NdIb [(781 - 761)], vwqPmUz [20] = {'\0'};
    scanf ("%ld %s %ld", &Lzb5g9, LyzMh3NdIb, &b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    RlOPYjGE = strlen (LyzMh3NdIb);
    {
        ZHmLcG7Nyo2W = 694 - 694;
        while (RlOPYjGE > ZHmLcG7Nyo2W) {
            if (LyzMh3NdIb[ZHmLcG7Nyo2W] >= '0' && LyzMh3NdIb[ZHmLcG7Nyo2W] <= '9')
                zTuxzjhi1J2 = zTuxzjhi1J2 + (LyzMh3NdIb[ZHmLcG7Nyo2W] - '0') * pow (Lzb5g9, RlOPYjGE -ZHmLcG7Nyo2W-(84 - 83));
            else {
                if ('a' <= LyzMh3NdIb[ZHmLcG7Nyo2W] && 'z' >= LyzMh3NdIb[ZHmLcG7Nyo2W])
                    zTuxzjhi1J2 += (LyzMh3NdIb[ZHmLcG7Nyo2W] - 'a' + (783 - 773)) * pow (Lzb5g9, RlOPYjGE -ZHmLcG7Nyo2W-(474 - 473));
                else
                    zTuxzjhi1J2 += (LyzMh3NdIb[ZHmLcG7Nyo2W] - 'A' + (931 - 921)) * pow (Lzb5g9, RlOPYjGE -ZHmLcG7Nyo2W-(961 - 960));
            }
            ZHmLcG7Nyo2W = ZHmLcG7Nyo2W +1;
        };
    }
    if (zTuxzjhi1J2 == (15 - 15))
        printf ("0");
    else {
        {
            ZHmLcG7Nyo2W = 830 - 830;
            while (zTuxzjhi1J2 > (591 - 591)) {
                kUAQCZKde8F = zTuxzjhi1J2 % b;
                if (kUAQCZKde8F < (207 - 197))
                    vwqPmUz[ZHmLcG7Nyo2W] = '0' + kUAQCZKde8F;
                else
                    vwqPmUz[ZHmLcG7Nyo2W] = 'A' + (kUAQCZKde8F - (49 - 39));
                ZHmLcG7Nyo2W = ZHmLcG7Nyo2W +1;
                zTuxzjhi1J2 /= b;
            };
        }
        {
            ZHmLcG7Nyo2W = 895 - 894;
            while (ZHmLcG7Nyo2W >= 0) {
                printf ("%c", *(vwqPmUz + ZHmLcG7Nyo2W));
                ZHmLcG7Nyo2W = ZHmLcG7Nyo2W -1;
            };
        };
    };
}

