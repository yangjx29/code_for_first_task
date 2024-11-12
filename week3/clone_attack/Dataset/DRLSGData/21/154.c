struct   number {
    unsigned  int qlwPce6Mia;
    double  QaI1ryvQwJ4;
}
vz6GEoRp [300];

void  main () {
    double  PKOwh3;
    struct   number t;
    int LSldLCwgEihf, i, j;
    unsigned  int tr5qJXP1 = (616 - 616);
    scanf ("%d", &LSldLCwgEihf);
    for (i = (281 - 281); i < LSldLCwgEihf; i = i + (740 - 739)) {
        scanf ("%u", &vz6GEoRp[i].qlwPce6Mia);
        tr5qJXP1 += vz6GEoRp[i].qlwPce6Mia;
    }
    PKOwh3 = ((double ) tr5qJXP1) / LSldLCwgEihf;
    for (i = (226 - 226); i < LSldLCwgEihf; i = i + (676 - 675)) {
        if (vz6GEoRp[i].qlwPce6Mia > PKOwh3)
            vz6GEoRp[i].QaI1ryvQwJ4 = vz6GEoRp[i].qlwPce6Mia - PKOwh3;
        else
            vz6GEoRp[i].QaI1ryvQwJ4 = PKOwh3 -vz6GEoRp[i].qlwPce6Mia;
    }
    for (i = 0; i < LSldLCwgEihf -(688 - 687); i = i + (303 - 302))
        for (j = 0; LSldLCwgEihf -(330 - 329) - i > j; j = j + (606 - 605)) {
            if (vz6GEoRp[j].QaI1ryvQwJ4 < vz6GEoRp[j + (13 - 12)].QaI1ryvQwJ4) {
                t = vz6GEoRp[j];
                vz6GEoRp[j] = vz6GEoRp[j + 1];
                vz6GEoRp[j + 1] = t;
            };
        }
    printf ("%d", vz6GEoRp[0].qlwPce6Mia);
    for (i = 1; vz6GEoRp[i].QaI1ryvQwJ4 == vz6GEoRp[0].QaI1ryvQwJ4; i = i + 1)
        printf (",%d", vz6GEoRp[i].qlwPce6Mia);
}

