int main () {
    char KsTL2It8aWgK [(163 - 62)] [101];
    char j1CUhPRoj [101] [101];
    int hgm4aLTp, SRtvHysOKdq, YMZGjY6a, qV9EgsBdc, rEple0JL4Owy, rDEKmWHzViTk;
    scanf ("%d\n", &hgm4aLTp);
    for (YMZGjY6a = (508 - 508); YMZGjY6a < hgm4aLTp; YMZGjY6a = YMZGjY6a +1)
        gets (KsTL2It8aWgK[YMZGjY6a]);
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
    scanf ("%d", &rDEKmWHzViTk);
    {
        qV9EgsBdc = 618 - 617;
        while (rDEKmWHzViTk > qV9EgsBdc) {
            {
                YMZGjY6a = 25 - 25;
                while (YMZGjY6a < hgm4aLTp) {
                    {
                        rEple0JL4Owy = 502 - 502;
                        while (hgm4aLTp > rEple0JL4Owy) {
                            j1CUhPRoj[YMZGjY6a][rEple0JL4Owy] = KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy];
                            rEple0JL4Owy = rEple0JL4Owy + 1;
                        };
                    }
                    YMZGjY6a = YMZGjY6a +1;
                };
            }
            {
                YMZGjY6a = 131 - 131;
                while (YMZGjY6a < hgm4aLTp) {
                    {
                        rEple0JL4Owy = 870 - 870;
                        while (hgm4aLTp > rEple0JL4Owy) {
                            if (j1CUhPRoj[YMZGjY6a][rEple0JL4Owy] != '@')
                                continue;
                            if (YMZGjY6a == (425 - 425) && !('#' == j1CUhPRoj[YMZGjY6a +(995 - 994)][rEple0JL4Owy]))
                                KsTL2It8aWgK[YMZGjY6a +(617 - 616)][rEple0JL4Owy] = '@';
                            else if (!((hgm4aLTp - (878 - 877)) != YMZGjY6a) && !('#' == j1CUhPRoj[YMZGjY6a -(640 - 639)][rEple0JL4Owy]))
                                KsTL2It8aWgK[YMZGjY6a -(968 - 967)][rEple0JL4Owy] = '@';
                            else {
                                if (j1CUhPRoj[YMZGjY6a +(915 - 914)][rEple0JL4Owy] != '#')
                                    KsTL2It8aWgK[YMZGjY6a +1][rEple0JL4Owy] = '@';
                                if (j1CUhPRoj[YMZGjY6a -1][rEple0JL4Owy] != '#')
                                    KsTL2It8aWgK[YMZGjY6a -1][rEple0JL4Owy] = '@';
                            }
                            if (rEple0JL4Owy == 0 && j1CUhPRoj[YMZGjY6a][rEple0JL4Owy + 1] != '#')
                                KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy + 1] = '@';
                            else if (rEple0JL4Owy == (hgm4aLTp - 1) && j1CUhPRoj[YMZGjY6a][rEple0JL4Owy - 1] != '#')
                                KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy - 1] = '@';
                            else {
                                if (j1CUhPRoj[YMZGjY6a][rEple0JL4Owy + 1] != '#')
                                    KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy + 1] = '@';
                                if (j1CUhPRoj[YMZGjY6a][rEple0JL4Owy - 1] != '#')
                                    KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy - 1] = '@';
                            }
                            rEple0JL4Owy = rEple0JL4Owy + 1;
                        };
                    }
                    YMZGjY6a = YMZGjY6a +1;
                };
            }
            qV9EgsBdc++;
        };
    }
    SRtvHysOKdq = 0;
    {
        YMZGjY6a = 0;
        while (YMZGjY6a < hgm4aLTp) {
            {
                rEple0JL4Owy = 0;
                while (rEple0JL4Owy < hgm4aLTp) {
                    if (KsTL2It8aWgK[YMZGjY6a][rEple0JL4Owy] == '@')
                        SRtvHysOKdq = SRtvHysOKdq +1;
                    rEple0JL4Owy = rEple0JL4Owy + 1;
                };
            }
            YMZGjY6a++;
        };
    }
    printf ("%d\n", SRtvHysOKdq);
    return 0;
}

