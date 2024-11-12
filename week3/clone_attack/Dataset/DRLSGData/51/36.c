void  main () {
    char eB53uXhd [550] = {'\0'};
    int GdcOvJjBLY;
    int mtZR5Jjdc;
    int DCamB1Djf5;
    int x6O7BCjy3IFf;
    int num [(1018 - 518)];
    int HYuIcl5PfzmM;
    int noF0OMRVx;
    int YYcGo6zMie7I;
    char THPNYS [(838 - 338)] [(673 - 663)] = {'\0'};
    int PT2y1Pomu7kt;
    char UKr3YhWHqJ8 [(1308 - 808)] [10] = {'\0'};
    {
        YYcGo6zMie7I = 730 - 730;
        for (; YYcGo6zMie7I < 500;) {
            num[YYcGo6zMie7I] = (361 - 360);
            YYcGo6zMie7I++;
        }
    }
    scanf ("%d", &PT2y1Pomu7kt);
    scanf ("%s", eB53uXhd);
    x6O7BCjy3IFf = strlen (eB53uXhd);
    {
        YYcGo6zMie7I = 828 - 828;
        while (x6O7BCjy3IFf - PT2y1Pomu7kt >= YYcGo6zMie7I) {
            {
                noF0OMRVx = 128 - 128;
                for (; noF0OMRVx < PT2y1Pomu7kt;) {
                    THPNYS[YYcGo6zMie7I][noF0OMRVx] = eB53uXhd[YYcGo6zMie7I +noF0OMRVx];
                    noF0OMRVx++;
                }
            }
            YYcGo6zMie7I++;
        }
    }
    strcpy (UKr3YhWHqJ8[(645 - 645)], THPNYS[(75 - 75)]);
    mtZR5Jjdc = (55 - 55);
    {
        YYcGo6zMie7I = 301 - 300;
        for (; x6O7BCjy3IFf - PT2y1Pomu7kt >= YYcGo6zMie7I;) {
            if (!((972 - 972) != strcmp (THPNYS[(340 - 340)], THPNYS[YYcGo6zMie7I]))) {
                num[mtZR5Jjdc] = num[mtZR5Jjdc] + (778 - 777);
                {
                    noF0OMRVx = 0;
                    for (; PT2y1Pomu7kt > noF0OMRVx;) {
                        THPNYS[YYcGo6zMie7I][noF0OMRVx] = '\0';
                        noF0OMRVx++;
                    }
                }
            }
            YYcGo6zMie7I++;
        }
    }
    {
        GdcOvJjBLY = 166 - 165;
        while (GdcOvJjBLY <= x6O7BCjy3IFf - PT2y1Pomu7kt) {
            if (THPNYS[GdcOvJjBLY][0] != '\0') {
                mtZR5Jjdc = mtZR5Jjdc + (34 - 33);
                strcpy (UKr3YhWHqJ8[mtZR5Jjdc], THPNYS[GdcOvJjBLY]);
            }
            {
                noF0OMRVx = GdcOvJjBLY +1;
                while (noF0OMRVx <= x6O7BCjy3IFf - PT2y1Pomu7kt) {
                    if (THPNYS[noF0OMRVx][0] != '\0') {
                        if (!(0 != strcmp (THPNYS[noF0OMRVx], THPNYS[GdcOvJjBLY]))) {
                            num[mtZR5Jjdc] = num[mtZR5Jjdc] + 1;
                            for (DCamB1Djf5 = 0; DCamB1Djf5 < PT2y1Pomu7kt; DCamB1Djf5++)
                                THPNYS[noF0OMRVx][DCamB1Djf5] = '\0';
                        }
                    }
                    noF0OMRVx++;
                }
            }
            GdcOvJjBLY++;
        }
    }
    HYuIcl5PfzmM = (208 - 208);
    {
        YYcGo6zMie7I = 1;
        while (YYcGo6zMie7I <= mtZR5Jjdc) {
            if (num[YYcGo6zMie7I] > num[HYuIcl5PfzmM])
                HYuIcl5PfzmM = YYcGo6zMie7I;
            YYcGo6zMie7I++;
        }
    }
    if (num[HYuIcl5PfzmM] == 1)
        ;
    else {
        printf ("%d\n", num[HYuIcl5PfzmM]);
        {
            YYcGo6zMie7I = 0;
            while (YYcGo6zMie7I <= mtZR5Jjdc) {
                if (num[YYcGo6zMie7I] == num[HYuIcl5PfzmM]) {
                    noF0OMRVx = 0;
                    for (; noF0OMRVx < PT2y1Pomu7kt;) {
                        printf ("%c", UKr3YhWHqJ8[YYcGo6zMie7I][noF0OMRVx]);
                        noF0OMRVx++;
                    }
                }
                YYcGo6zMie7I++;
            }
        }
    }
}

