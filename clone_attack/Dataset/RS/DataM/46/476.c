int main () {
    int row;
    int Lvx4nejLOAaI;
    int a05KfX;
    int OXL76fTiA;
    int XLvzk9rhY [100] [100];
    int z28fBn6lIvK;
    int oHudBP0h;
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
    int AjpzPM5UY4;
    int eBjgWvkJy;
    z28fBn6lIvK = 0;
    scanf ("%d%d", &a05KfX, &OXL76fTiA);
    {
        row = 0;
        while (a05KfX > row) {
            {
                Lvx4nejLOAaI = 0;
                while (OXL76fTiA > Lvx4nejLOAaI) {
                    scanf ("%d", &XLvzk9rhY[row][Lvx4nejLOAaI]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Lvx4nejLOAaI = Lvx4nejLOAaI +1;
                };
            }
            row = row + 1;
        };
    }
    {
        oHudBP0h = 0;
        while (a05KfX + 1 / 2 > oHudBP0h && OXL76fTiA +1 / 2 > oHudBP0h) {
            AjpzPM5UY4 = a05KfX - oHudBP0h;
            eBjgWvkJy = OXL76fTiA -oHudBP0h;
            {
                Lvx4nejLOAaI = oHudBP0h;
                while (eBjgWvkJy > Lvx4nejLOAaI) {
                    printf ("%d\n", XLvzk9rhY[oHudBP0h][Lvx4nejLOAaI]);
                    z28fBn6lIvK = z28fBn6lIvK + 1;
                    Lvx4nejLOAaI++;
                };
            }
            if (a05KfX * OXL76fTiA <= z28fBn6lIvK) {
                break;
            }
            {
                row = oHudBP0h + 1;
                while (AjpzPM5UY4 > row) {
                    z28fBn6lIvK = z28fBn6lIvK + 1;
                    printf ("%d\n", XLvzk9rhY[row][eBjgWvkJy - 1]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    row = row + 1;
                };
            }
            if (a05KfX * OXL76fTiA <= z28fBn6lIvK) {
                break;
            }
            {
                Lvx4nejLOAaI = eBjgWvkJy - 2;
                while (oHudBP0h - 1 < Lvx4nejLOAaI) {
                    z28fBn6lIvK += 1;
                    printf ("%d\n", XLvzk9rhY[AjpzPM5UY4 -1][Lvx4nejLOAaI]);
                    Lvx4nejLOAaI = Lvx4nejLOAaI -1;
                };
            }
            if (z28fBn6lIvK >= a05KfX * OXL76fTiA) {
                break;
            }
            {
                row = AjpzPM5UY4 -2;
                while (row > oHudBP0h) {
                    z28fBn6lIvK += 1;
                    printf ("%d\n", XLvzk9rhY[row][oHudBP0h]);
                    row = row - 1;
                };
            }
            if (z28fBn6lIvK >= a05KfX * OXL76fTiA) {
                break;
            }
            oHudBP0h = oHudBP0h + 1;
        };
    }
    return 0;
}

