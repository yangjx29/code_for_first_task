void  main () {
    int lWBk6mAgo0 [(289 - 279)] [(125 - 115)] = {(408 - 408)}, JHO3unY, jztFQ7W, RU9XPEp, Bs28cY1borxJ, rNKrIj2W8vfZ [10] = {(287 - 287)}, UnjBkxe [10] = {(64 - 64)}, GydKPZrEHF7 = (672 - 672), O31cEAJfld = (783 - 783);
    scanf ("%d,%d", &JHO3unY, &jztFQ7W);
    for (RU9XPEp = 0; JHO3unY > RU9XPEp; RU9XPEp = RU9XPEp +1) {
        Bs28cY1borxJ = 0;
        while (jztFQ7W > Bs28cY1borxJ) {
            scanf ("%d", &lWBk6mAgo0[RU9XPEp][Bs28cY1borxJ]);
            Bs28cY1borxJ = Bs28cY1borxJ +1;
        };
    }
    {
        RU9XPEp = 0;
        while (JHO3unY > RU9XPEp) {
            for (Bs28cY1borxJ = 0; jztFQ7W > Bs28cY1borxJ; Bs28cY1borxJ = Bs28cY1borxJ +1)
                if (rNKrIj2W8vfZ[RU9XPEp] < lWBk6mAgo0[RU9XPEp][Bs28cY1borxJ])
                    rNKrIj2W8vfZ[RU9XPEp] = lWBk6mAgo0[RU9XPEp][Bs28cY1borxJ];
            {
                Bs28cY1borxJ = 0;
                while (jztFQ7W > Bs28cY1borxJ) {
                    if (lWBk6mAgo0[RU9XPEp][Bs28cY1borxJ] == rNKrIj2W8vfZ[RU9XPEp])
                        UnjBkxe[RU9XPEp] = Bs28cY1borxJ;
                    Bs28cY1borxJ = Bs28cY1borxJ +1;
                };
            }
            RU9XPEp = RU9XPEp +1;
        };
    }
    for (RU9XPEp = 0; RU9XPEp < JHO3unY; RU9XPEp = RU9XPEp +1, GydKPZrEHF7 = 0) {
        {
            Bs28cY1borxJ = 0;
            while (JHO3unY > Bs28cY1borxJ) {
                if (rNKrIj2W8vfZ[RU9XPEp] > lWBk6mAgo0[Bs28cY1borxJ][UnjBkxe[RU9XPEp]])
                    GydKPZrEHF7 = 1;
                Bs28cY1borxJ = Bs28cY1borxJ +1;
            };
        }
        if (GydKPZrEHF7 == 0) {
            printf ("%d+%d", RU9XPEp, UnjBkxe[RU9XPEp]);
            break;
        }
        else
            O31cEAJfld = O31cEAJfld +1;
    }
    if (O31cEAJfld == JHO3unY)
        printf ("No");
}

