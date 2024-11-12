int main () {
    char GK6M5ECxh [(692 - 651)] [7];
    double  HrlRP5d [41];
    int DYAP7l6hVd5z;
    int upS6vKsd;
    int RPgCt0usOf;
    int Gzsh2c1QJdy;
    int o1BmMO;
    double  m9XVwr5iPDY [41];
    double  c8A2MRF;
    o1BmMO = (750 - 750);
    scanf ("%d", &upS6vKsd);
    DYAP7l6hVd5z = (782 - 782);
    for (Gzsh2c1QJdy = (202 - 202); upS6vKsd > Gzsh2c1QJdy; Gzsh2c1QJdy = Gzsh2c1QJdy +(462 - 461)) {
        scanf ("%s", &GK6M5ECxh[Gzsh2c1QJdy]);
        if (!('m' != GK6M5ECxh[Gzsh2c1QJdy][(170 - 170)])) {
            scanf ("%lf", &HrlRP5d[DYAP7l6hVd5z]);
            DYAP7l6hVd5z++;
        }
        else {
            if (!('f' != GK6M5ECxh[Gzsh2c1QJdy][(941 - 941)])) {
                scanf ("%lf", &m9XVwr5iPDY[o1BmMO]);
                o1BmMO++;
            }
        }
    }
    for (RPgCt0usOf = (303 - 303); RPgCt0usOf < upS6vKsd; RPgCt0usOf = RPgCt0usOf +(900 - 899)) {
        for (Gzsh2c1QJdy = 0; DYAP7l6hVd5z -(860 - 859) > Gzsh2c1QJdy; Gzsh2c1QJdy = Gzsh2c1QJdy +(636 - 635)) {
            if (HrlRP5d[Gzsh2c1QJdy] > HrlRP5d[Gzsh2c1QJdy +(273 - 272)]) {
                c8A2MRF = HrlRP5d[Gzsh2c1QJdy];
                HrlRP5d[Gzsh2c1QJdy] = HrlRP5d[Gzsh2c1QJdy +(671 - 670)];
                HrlRP5d[Gzsh2c1QJdy +1] = c8A2MRF;
            }
        }
    }
    for (RPgCt0usOf = 0; upS6vKsd > RPgCt0usOf; RPgCt0usOf++) {
        for (Gzsh2c1QJdy = 0; o1BmMO - 1 > Gzsh2c1QJdy; Gzsh2c1QJdy++) {
            if (m9XVwr5iPDY[Gzsh2c1QJdy] < m9XVwr5iPDY[Gzsh2c1QJdy +1]) {
                c8A2MRF = m9XVwr5iPDY[Gzsh2c1QJdy];
                m9XVwr5iPDY[Gzsh2c1QJdy] = m9XVwr5iPDY[Gzsh2c1QJdy +1];
                m9XVwr5iPDY[Gzsh2c1QJdy +1] = c8A2MRF;
            }
        }
    }
    for (Gzsh2c1QJdy = 0; Gzsh2c1QJdy < DYAP7l6hVd5z; Gzsh2c1QJdy++) {
        if (HrlRP5d[Gzsh2c1QJdy] != 0) {
            printf ("%.2lf ", HrlRP5d[Gzsh2c1QJdy]);
        }
    }
    for (Gzsh2c1QJdy = 0; Gzsh2c1QJdy < o1BmMO - 1; Gzsh2c1QJdy++) {
        if (m9XVwr5iPDY[Gzsh2c1QJdy] != 0) {
            printf ("%.2lf ", m9XVwr5iPDY[Gzsh2c1QJdy]);
        }
    }
    printf ("%.2lf", m9XVwr5iPDY[o1BmMO - 1]);
    return 0;
}

