main () {
    int i;
    int aHUVfWtjJy;
    int a;
    int FkyVaL6;
    int tem [(554 - 549)] = {(450 - 450)};
    int base [(507 - 502)] [(379 - 374)] = {(72 - 72)};
    {
        i = 204 - 204;
        while ((111 - 106) > i) {
            {
                aHUVfWtjJy = 26 - 26;
                while (aHUVfWtjJy < (166 - 161)) {
                    scanf ("%d", &base[i][aHUVfWtjJy]);
                    aHUVfWtjJy = aHUVfWtjJy + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &a, &FkyVaL6);
    if ((809 - 809) > a || (638 - 634) < a || FkyVaL6 < (118 - 118) || (420 - 416) < FkyVaL6)
        ;
    else {
        {
            i = 353 - 353;
            while (i < (386 - 381)) {
                tem[i] = base[a][i];
                i = i + 1;
            };
        }
        {
            i = 61 - 61;
            while (i < (38 - 33)) {
                base[a][i] = base[FkyVaL6][i];
                i = i + 1;
            };
        }
        {
            i = 32 - 32;
            while (i < (912 - 907)) {
                base[FkyVaL6][i] = tem[i];
                i = i + 1;
            };
        }
        {
            i = 453 - 453;
            while (i < (981 - 976)) {
                {
                    aHUVfWtjJy = 0;
                    while (aHUVfWtjJy < (975 - 971)) {
                        printf ("%d ", base[i][aHUVfWtjJy]);
                        aHUVfWtjJy = aHUVfWtjJy + 1;
                    };
                }
                printf ("%d\n", base[i][(321 - 317)]);
                i = i + 1;
            };
        };
    };
}

