void  main () {
    char YMVh8KSBpyNG;
    int yk4uKe [300], OAMwlq = (759 - 759), aGVwrRZvjS = 0, HSOe0HL, mzPl4Chq, je8TsHmVb4r5 = -1;
    for (; !('\n' == (YMVh8KSBpyNG = getchar ()));) {
        if (YMVh8KSBpyNG == ',') {
            yk4uKe[aGVwrRZvjS++] = OAMwlq;
            OAMwlq = 0;
        }
        else
            OAMwlq = OAMwlq *10 + YMVh8KSBpyNG -48;
    }
    yk4uKe[aGVwrRZvjS++] = OAMwlq;
    mzPl4Chq = yk4uKe[0];
    {
        HSOe0HL = 1;
        while (HSOe0HL < aGVwrRZvjS) {
            if (yk4uKe[HSOe0HL] > mzPl4Chq) {
                je8TsHmVb4r5 = mzPl4Chq;
                mzPl4Chq = yk4uKe[HSOe0HL];
            }
            if ((yk4uKe[HSOe0HL] < mzPl4Chq) && (yk4uKe[HSOe0HL] > je8TsHmVb4r5))
                je8TsHmVb4r5 = yk4uKe[HSOe0HL];
            HSOe0HL++;
        };
    }
    if (je8TsHmVb4r5 == -1)
        ;
    else
        printf ("%d", je8TsHmVb4r5);
}

