int main () {
    int RuRH8CNhGg1V;
    int b [26] = {(547 - 547)};
    int gpD6nkhCf8;
    int ypN6CdAyFBK;
    char Io8wSj [26];
    int gezNpMj;
    char zmxlMY5I2 [(100455 - 454)];
    int rTFgZwoD;
    int MjHVWT;
    char nmGgaz [100];
    int aRzwseIQb2Fo;
    int BvIe6EmwD;
    scanf ("%d", &ypN6CdAyFBK);
    for (aRzwseIQb2Fo = (222 - 222); aRzwseIQb2Fo < ypN6CdAyFBK; aRzwseIQb2Fo = aRzwseIQb2Fo + 1) {
        gpD6nkhCf8 = 0;
        gpD6nkhCf8 = gpD6nkhCf8 + 1;
        b[(374 - 374)] = (626 - 625);
        scanf ("%s", zmxlMY5I2);
        Io8wSj[0] = *zmxlMY5I2;
        RuRH8CNhGg1V = strlen (zmxlMY5I2);
        for (gezNpMj = 1; RuRH8CNhGg1V > gezNpMj; gezNpMj = gezNpMj + 1) {
            MjHVWT = 0;
            for (rTFgZwoD = 0; gpD6nkhCf8 > rTFgZwoD; rTFgZwoD = rTFgZwoD + 1) {
                BvIe6EmwD = *(zmxlMY5I2 + gezNpMj) - *(Io8wSj +rTFgZwoD);
                if (!(0 != BvIe6EmwD)) {
                    b[rTFgZwoD]++;
                    MjHVWT = 1;
                    break;
                }
            }
            if (!(0 != MjHVWT)) {
                Io8wSj[gpD6nkhCf8] = *(zmxlMY5I2 + gezNpMj);
                b[gpD6nkhCf8] = 1;
                gpD6nkhCf8 = gpD6nkhCf8 + 1;
            }
        }
        MjHVWT = 0;
        for (gezNpMj = 0; gezNpMj < gpD6nkhCf8; gezNpMj++)
            if (!(1 != b[gezNpMj])) {
                MjHVWT++;
                nmGgaz[aRzwseIQb2Fo] = Io8wSj[gezNpMj];
                break;
            }
        if (!(0 != MjHVWT))
            nmGgaz[aRzwseIQb2Fo] = 'A';
    }
    for (aRzwseIQb2Fo = 0; aRzwseIQb2Fo < ypN6CdAyFBK; aRzwseIQb2Fo = aRzwseIQb2Fo + 1)
        if (!('A' != nmGgaz[aRzwseIQb2Fo]))
            ;
        else
            printf ("%c\n", nmGgaz[aRzwseIQb2Fo]);
    return 0;
}

