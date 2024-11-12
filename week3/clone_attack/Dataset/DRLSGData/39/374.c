struct   data {
    char KUVmnhLCX9 [21];
    int X25oWtDZONAX;
    int alW6ymYHoh;
    char YqCQMJs7;
    char aZtCSbvWgdEx;
    int i1K9RFua;
    int kdohBla;
}
CqHFEAsg1m9 [100], *YkFD1V;

void  Preq1KL (struct   data *CqHFEAsg1m9) {
    if ((917 - 837) < CqHFEAsg1m9->X25oWtDZONAX && (248 - 248) < CqHFEAsg1m9->i1K9RFua)
        CqHFEAsg1m9->kdohBla = CqHFEAsg1m9->kdohBla + (8986 - 986);
}

void  xOBgA1Gl (struct   data *CqHFEAsg1m9) {
    if (CqHFEAsg1m9->X25oWtDZONAX > (796 - 711) && (261 - 181) < CqHFEAsg1m9->alW6ymYHoh)
        CqHFEAsg1m9->kdohBla = CqHFEAsg1m9->kdohBla + (4599 - 599);
}

void  chengji (struct   data *CqHFEAsg1m9) {
    if (CqHFEAsg1m9->X25oWtDZONAX > 90)
        CqHFEAsg1m9->kdohBla = CqHFEAsg1m9->kdohBla + 2000;
}

void  uWe6FiUjt (struct   data *CqHFEAsg1m9) {
    if (85 < CqHFEAsg1m9->X25oWtDZONAX && CqHFEAsg1m9->aZtCSbvWgdEx == 'Y')
        CqHFEAsg1m9->kdohBla = CqHFEAsg1m9->kdohBla + 1000;
}

void  banji (struct   data *CqHFEAsg1m9) {
    if (CqHFEAsg1m9->alW6ymYHoh > 80 && CqHFEAsg1m9->YqCQMJs7 == 'Y')
        CqHFEAsg1m9->kdohBla = CqHFEAsg1m9->kdohBla + (1257 - 407);
}

int main () {
    int h9p3h1;
    int Ti7IwhF;
    int QqVlaczHoW90 = (752 - 752), OwrP37k = (893 - 893);
    int T0N5pYQ;
    int fTBzj6yx2si;
    scanf ("%d", &T0N5pYQ);
    for (h9p3h1 = 0; h9p3h1 < T0N5pYQ; h9p3h1 = h9p3h1 + 1) {
        scanf ("%s %d %d %c %c %d", CqHFEAsg1m9[h9p3h1].KUVmnhLCX9, &CqHFEAsg1m9[h9p3h1].X25oWtDZONAX, &CqHFEAsg1m9[h9p3h1].alW6ymYHoh, &CqHFEAsg1m9[h9p3h1].YqCQMJs7, &CqHFEAsg1m9[h9p3h1].aZtCSbvWgdEx, &CqHFEAsg1m9[h9p3h1].i1K9RFua);
        CqHFEAsg1m9[h9p3h1].kdohBla = 0;
    }
    YkFD1V = CqHFEAsg1m9;
    for (h9p3h1 = 0; h9p3h1 < T0N5pYQ; h9p3h1 = h9p3h1 + 1) {
        banji (YkFD1V +h9p3h1);
        uWe6FiUjt (YkFD1V +h9p3h1);
        chengji (YkFD1V +h9p3h1);
        Preq1KL (YkFD1V +h9p3h1);
        xOBgA1Gl (YkFD1V +h9p3h1);
    }
    for (h9p3h1 = 0; h9p3h1 < T0N5pYQ; h9p3h1++) {
        if (QqVlaczHoW90 < CqHFEAsg1m9[h9p3h1].kdohBla) {
            QqVlaczHoW90 = CqHFEAsg1m9[h9p3h1].kdohBla;
            fTBzj6yx2si = h9p3h1;
        }
        OwrP37k = OwrP37k +CqHFEAsg1m9[h9p3h1].kdohBla;
    }
    printf ("%s\n%d\n%d", CqHFEAsg1m9[fTBzj6yx2si].KUVmnhLCX9, QqVlaczHoW90, OwrP37k);
    return 0;
}

