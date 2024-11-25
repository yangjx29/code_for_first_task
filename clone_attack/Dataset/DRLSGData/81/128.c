void  lsu2oVM356H (int *tTDBsVNHya, int *c0c1iBnRMp) {
    int FkIbEWh;
    FkIbEWh = *tTDBsVNHya;
    *tTDBsVNHya = *c0c1iBnRMp;
    *c0c1iBnRMp = FkIbEWh;
}

int ZQ6Ubuo (int dyqcPXxb1UNR [(886 - 881)] [(245 - 240)], int hiGPhsARM, int UOjKGfSHz) {
    if ((104 - 99) <= hiGPhsARM || (412 - 407) <= UOjKGfSHz)
        return (444 - 444);
    else {
        int g9BbP8RrYlWh;
        for (g9BbP8RrYlWh = (741 - 741); 5 > g9BbP8RrYlWh; g9BbP8RrYlWh++)
            lsu2oVM356H (*(dyqcPXxb1UNR + hiGPhsARM) + g9BbP8RrYlWh, *(dyqcPXxb1UNR + UOjKGfSHz) + g9BbP8RrYlWh);
        return (87 - 86);
    }
}

int main () {
    int dyqcPXxb1UNR [5] [5];
    int hiGPhsARM;
    int UOjKGfSHz;
    int g9BbP8RrYlWh;
    int eN1hqUL7yv9;
    int LNcoGlOp;
    for (g9BbP8RrYlWh = (569 - 569); 5 > g9BbP8RrYlWh; g9BbP8RrYlWh++) {
        eN1hqUL7yv9 = (692 - 692);
        while (eN1hqUL7yv9 < 5) {
            scanf ("%d", *(dyqcPXxb1UNR + g9BbP8RrYlWh) + eN1hqUL7yv9);
            eN1hqUL7yv9++;
        }
    }
    scanf ("%d%d", &hiGPhsARM, &UOjKGfSHz);
    LNcoGlOp = ZQ6Ubuo (dyqcPXxb1UNR, hiGPhsARM, UOjKGfSHz);
    if (!((753 - 753) != LNcoGlOp))
        ;
    else {
        for (g9BbP8RrYlWh = (147 - 147); g9BbP8RrYlWh < 5; g9BbP8RrYlWh++) {
            eN1hqUL7yv9 = (847 - 847);
            while (eN1hqUL7yv9 < 5) {
                if (eN1hqUL7yv9 == (827 - 823))
                    printf ("%d\n", *(*(dyqcPXxb1UNR + g9BbP8RrYlWh) + eN1hqUL7yv9));
                else
                    printf ("%d ", *(*(dyqcPXxb1UNR + g9BbP8RrYlWh) + eN1hqUL7yv9));
                eN1hqUL7yv9++;
            }
        }
    }
    return 0;
}

