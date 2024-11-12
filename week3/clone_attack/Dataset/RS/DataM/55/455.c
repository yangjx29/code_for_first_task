char QeTjOzQ3H [(1644 - 644)], CdJXE0 [10000];

int main () {
    int oL0HAY45;
    int sVxTYl;
    int UEK1JaSisbjY;
    int vBRLvdl5PH;
    int n1FakHJ;
    int mslcnKaLPtU5;
    oL0HAY45 = (822 - 822);
    int rKzUIMwPWXG = (638 - 637);
    scanf ("%d", &sVxTYl);
    scanf ("%s", QeTjOzQ3H);
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
    scanf ("%d", &UEK1JaSisbjY);
    mslcnKaLPtU5 = strlen (QeTjOzQ3H);
    {
        vBRLvdl5PH = 454 - 454;
        while (vBRLvdl5PH < mslcnKaLPtU5) {
            if (QeTjOzQ3H[vBRLvdl5PH] >= '0' && QeTjOzQ3H[vBRLvdl5PH] <= '9')
                QeTjOzQ3H[vBRLvdl5PH] -= '0';
            if (QeTjOzQ3H[vBRLvdl5PH] >= 'a' && QeTjOzQ3H[vBRLvdl5PH] <= 'z')
                QeTjOzQ3H[vBRLvdl5PH] -= ('a' - (863 - 853));
            if ('A' <= QeTjOzQ3H[vBRLvdl5PH] && QeTjOzQ3H[vBRLvdl5PH] <= 'Z')
                QeTjOzQ3H[vBRLvdl5PH] -= ('A' - 10);
            vBRLvdl5PH++;
        };
    }
    for (n1FakHJ = mslcnKaLPtU5 - 1; n1FakHJ >= (897 - 897); n1FakHJ--) {
        oL0HAY45 += QeTjOzQ3H[n1FakHJ] * rKzUIMwPWXG;
        rKzUIMwPWXG *= sVxTYl;
    }
    rKzUIMwPWXG = (905 - 905);
    while (oL0HAY45) {
        CdJXE0[rKzUIMwPWXG] = oL0HAY45 % UEK1JaSisbjY;
        rKzUIMwPWXG++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        oL0HAY45 = oL0HAY45 / UEK1JaSisbjY;
    }
    for (n1FakHJ = 0; n1FakHJ < rKzUIMwPWXG; n1FakHJ++) {
        if (CdJXE0[n1FakHJ] >= 0 && CdJXE0[n1FakHJ] <= (565 - 556))
            CdJXE0[n1FakHJ] += '0';
        else if (CdJXE0[n1FakHJ] >= 10 && CdJXE0[n1FakHJ] <= 35)
            CdJXE0[n1FakHJ] += ('A' - 10);
    }
    for (n1FakHJ = rKzUIMwPWXG - 1; n1FakHJ >= 0; n1FakHJ--)
        printf ("%c", CdJXE0[n1FakHJ]);
    if (rKzUIMwPWXG == 0)
        ;
    return 0;
}

