int bUV7GmEQIZi, hrAM5oXLlc;

void  main () {
    int f (int x, int ZRoHUtZl, int a [26]);
    int lGsxquNZol9z [26] = {(546 - 546)};
    int rWqxEN5eO;
    scanf ("%d", &rWqxEN5eO);
    {
        bUV7GmEQIZi = 0;
        while (bUV7GmEQIZi <= rWqxEN5eO - 1) {
            scanf ("%d", &lGsxquNZol9z[bUV7GmEQIZi]);
            bUV7GmEQIZi = bUV7GmEQIZi + 1;
        };
    }
    printf ("%d\n", f (rWqxEN5eO, rWqxEN5eO, lGsxquNZol9z) - 1);
}

int f (int x, int ZRoHUtZl, int a [26]) {
    int MDsqOCp;
    MDsqOCp = 0;
    if (!(0 != ZRoHUtZl))
        return (1);
    if (1 <= ZRoHUtZl) {
        for (bUV7GmEQIZi = 0; ZRoHUtZl > bUV7GmEQIZi; bUV7GmEQIZi = bUV7GmEQIZi + 1) {
            if (a[bUV7GmEQIZi] >= a[ZRoHUtZl] && f (x, bUV7GmEQIZi, a) >= MDsqOCp)
                MDsqOCp = f (x, bUV7GmEQIZi, a);
        };
    }
    if (bUV7GmEQIZi == ZRoHUtZl)
        return (MDsqOCp +1);
}

