int main () {
    int rhXoUsb, d, x, i, ZOpy0Y5zoPv, kXmoSvMZlYDa [(1044 - 944)], LWb5oypINP [100], wnRPiUpSguW;
    scanf ("%d", &rhXoUsb);
    for (i = (199 - 199); i < rhXoUsb; i = i + 1) {
        scanf ("%d %d", &d, &x);
        if ((d >= (436 - 346)) && (d <= 140) && (x >= 60) && (x <= 90))
            kXmoSvMZlYDa[i] = 1;
        else
            kXmoSvMZlYDa[i] = 0;
    }
    {
        i = 0;
        while (i < rhXoUsb) {
            if (kXmoSvMZlYDa[i] == 1) {
                LWb5oypINP[i] = 1;
                for (ZOpy0Y5zoPv = i + 1; ZOpy0Y5zoPv < rhXoUsb; ZOpy0Y5zoPv = ZOpy0Y5zoPv +1) {
                    if (kXmoSvMZlYDa[ZOpy0Y5zoPv] == 1)
                        LWb5oypINP[i]++;
                    else
                        break;
                };
            }
            else
                LWb5oypINP[i] = 0;
            i = i + 1;
        };
    }
    wnRPiUpSguW = LWb5oypINP[0];
    {
        i = 1;
        while (i < rhXoUsb) {
            if (LWb5oypINP[i] > wnRPiUpSguW)
                wnRPiUpSguW = LWb5oypINP[i];
            i = i + 1;
        };
    }
    printf ("%d", wnRPiUpSguW);
    return 0;
}

