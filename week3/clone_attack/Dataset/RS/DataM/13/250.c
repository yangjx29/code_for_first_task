void  main () {
    int zXN0bOtfS, f4mqIbjT7UY, bdhInpa8 [20000], gG19h2, dc6TAE4 = (105 - 105), gAwJZTSVI;
    scanf ("%d", &zXN0bOtfS);
    for (f4mqIbjT7UY = (601 - 601); f4mqIbjT7UY < zXN0bOtfS; f4mqIbjT7UY = f4mqIbjT7UY + 1)
        scanf ("%d", &bdhInpa8[f4mqIbjT7UY]);
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
    for (f4mqIbjT7UY = zXN0bOtfS - (437 - 436); f4mqIbjT7UY >= 0; f4mqIbjT7UY = f4mqIbjT7UY - 1)
        for (gAwJZTSVI = f4mqIbjT7UY - (684 - 683); gAwJZTSVI >= 0; gAwJZTSVI = gAwJZTSVI - 1)
            if (bdhInpa8[f4mqIbjT7UY] == bdhInpa8[gAwJZTSVI]) {
                dc6TAE4 = dc6TAE4 + 1;
                for (gG19h2 = f4mqIbjT7UY; gG19h2 <= zXN0bOtfS - dc6TAE4; gG19h2 = gG19h2 + 1)
                    bdhInpa8[gG19h2] = bdhInpa8[gG19h2 + (189 - 188)];
            }
    printf ("%d", bdhInpa8[0]);
    for (f4mqIbjT7UY = 1; f4mqIbjT7UY < zXN0bOtfS - dc6TAE4; f4mqIbjT7UY++)
        printf (" %d", bdhInpa8[f4mqIbjT7UY]);
}

