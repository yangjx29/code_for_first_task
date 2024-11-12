struct   student {
    char kaCZKOMklfjA [(243 - 218)];
    int Y7auEdFX4y;
    int f5ozD6A01;
    char CEyiI9Gq4;
    char honZag;
    int UOeSfdwsFyGx;
    int jPQct16;
};
void  main () {
    int z4cjMf13h6KY, ZiIVdrE0tc, vPhlrW = (841 - 841), c1, Dw0hW8mgB, n95TRSiz8U;
    struct   student stu [100];
    struct   student *py8cKVo0Mx, *jg2LrUCS;
    scanf ("%d", &z4cjMf13h6KY);
    {
        py8cKVo0Mx = stu;
        while (stu + z4cjMf13h6KY > py8cKVo0Mx) {
            scanf ("%s%d%d%c%c%c%c%c%d", &((*py8cKVo0Mx).kaCZKOMklfjA), &((*py8cKVo0Mx).Y7auEdFX4y), &((*py8cKVo0Mx).f5ozD6A01), &c1, &((*py8cKVo0Mx).CEyiI9Gq4), &Dw0hW8mgB, &((*py8cKVo0Mx).honZag), &n95TRSiz8U, &((*py8cKVo0Mx).UOeSfdwsFyGx));
            py8cKVo0Mx->jPQct16 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            py8cKVo0Mx++;
        };
    }
    {
        py8cKVo0Mx = stu;
        while (py8cKVo0Mx < stu + z4cjMf13h6KY) {
            if ((671 - 591) < py8cKVo0Mx->Y7auEdFX4y && 0 < py8cKVo0Mx->UOeSfdwsFyGx)
                py8cKVo0Mx->jPQct16 = py8cKVo0Mx->jPQct16 + 8000;
            if ((136 - 51) < py8cKVo0Mx->Y7auEdFX4y && (166 - 86) < py8cKVo0Mx->f5ozD6A01)
                py8cKVo0Mx->jPQct16 = py8cKVo0Mx->jPQct16 + 4000;
            if ((226 - 136) < py8cKVo0Mx->Y7auEdFX4y)
                py8cKVo0Mx->jPQct16 = py8cKVo0Mx->jPQct16 + 2000;
            if (py8cKVo0Mx->Y7auEdFX4y > 85 && py8cKVo0Mx->honZag == 'Y')
                py8cKVo0Mx->jPQct16 = py8cKVo0Mx->jPQct16 + 1000;
            if (py8cKVo0Mx->f5ozD6A01 > 80 && py8cKVo0Mx->CEyiI9Gq4 == 'Y')
                py8cKVo0Mx->jPQct16 = py8cKVo0Mx->jPQct16 + 850;
            py8cKVo0Mx++;
        };
    }
    jg2LrUCS = stu;
    {
        py8cKVo0Mx = stu;
        while (py8cKVo0Mx < stu + z4cjMf13h6KY) {
            if (py8cKVo0Mx->jPQct16 > jg2LrUCS->jPQct16)
                jg2LrUCS = py8cKVo0Mx;
            vPhlrW = py8cKVo0Mx->jPQct16 + vPhlrW;
            py8cKVo0Mx++;
        };
    }
    printf ("%s\n%d\n%d\n", jg2LrUCS->kaCZKOMklfjA, jg2LrUCS->jPQct16, vPhlrW);
}

