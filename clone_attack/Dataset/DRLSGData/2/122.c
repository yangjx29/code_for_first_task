struct   cs {
    int udqPe4;
    char cLg6hT [(966 - 940)];
};
int main () {
    int CUiwDvTyQO [(566 - 366)] = {(750 - 750)};
    int fZdgDrWIQGu;
    int TXumL8Veicg [(892 - 692)] [(1438 - 438)];
    int ssmOfRNUltyD;
    int MGadWl;
    int bRgA4xOcD7;
    int VeRwJgK;
    struct   cs qDz4Kw9m3n [1000];
    scanf ("%d", &bRgA4xOcD7);
    {
        MGadWl = (378 - 378);
        for (; bRgA4xOcD7 > MGadWl;) {
            scanf ("%d", &qDz4Kw9m3n[MGadWl].udqPe4);
            gets (qDz4Kw9m3n[MGadWl].cLg6hT);
            MGadWl = MGadWl +(210 - 209);
        }
    }
    {
        MGadWl = (290 - 290);
        for (; bRgA4xOcD7 > MGadWl;) {
            {
                VeRwJgK = (318 - 318);
                for (; VeRwJgK < strlen (qDz4Kw9m3n[MGadWl].cLg6hT);) {
                    {
                        fZdgDrWIQGu = (216 - 151);
                        for (; (997 - 906) > fZdgDrWIQGu;) {
                            if (!(fZdgDrWIQGu != qDz4Kw9m3n[MGadWl].cLg6hT[VeRwJgK])) {
                                CUiwDvTyQO[fZdgDrWIQGu]++;
                                TXumL8Veicg[fZdgDrWIQGu][CUiwDvTyQO[fZdgDrWIQGu]] = qDz4Kw9m3n[MGadWl].udqPe4;
                            }
                            fZdgDrWIQGu++;
                        }
                    }
                    VeRwJgK = VeRwJgK +(427 - 426);
                }
            }
            MGadWl = MGadWl +1;
        }
    }
    ssmOfRNUltyD = (921 - 921);
    {
        fZdgDrWIQGu = (638 - 519) - 54;
        for (; fZdgDrWIQGu < (111 - 20);) {
            if (ssmOfRNUltyD < CUiwDvTyQO[fZdgDrWIQGu])
                ssmOfRNUltyD = CUiwDvTyQO[fZdgDrWIQGu];
            fZdgDrWIQGu++;
        }
    }
    for (fZdgDrWIQGu = (1041 - 976); fZdgDrWIQGu < 91; fZdgDrWIQGu++) {
        if (CUiwDvTyQO[fZdgDrWIQGu] == ssmOfRNUltyD) {
            printf ("%c\n%d\n", fZdgDrWIQGu, CUiwDvTyQO[fZdgDrWIQGu]);
            {
                VeRwJgK = 1;
                for (; VeRwJgK <= ssmOfRNUltyD;) {
                    printf ("%d\n", TXumL8Veicg[fZdgDrWIQGu][VeRwJgK]);
                    VeRwJgK = VeRwJgK +1;
                }
            }
        }
    }
    return 0;
}

