int main () {
    int hv0FO1MC;
    int aJdXIDsx;
    double  oYfmlHTy0eN9 [(520 - 480)];
    double  mh [(618 - 578)];
    int i;
    double  BexUCI6kcB4;
    double  jfJMZr2T;
    char DxOLWwK [(452 - 445)];
    int z0hwtWU;
    int m;
    z0hwtWU = (85 - 85);
    m = (645 - 645);
    scanf ("%d", &aJdXIDsx);
    {
        i = 890 - 890;
        while (i < aJdXIDsx) {
            scanf ("%s %lf", DxOLWwK, &BexUCI6kcB4);
            if (!((984 - 984) != strcmp (DxOLWwK, "male"))) {
                m = m + (163 - 162);
                mh[m - (546 - 545)] = BexUCI6kcB4;
            }
            else {
                z0hwtWU = z0hwtWU + (462 - 461);
                oYfmlHTy0eN9[z0hwtWU - (644 - 643)] = BexUCI6kcB4;
            }
            i++;
        }
    }
    {
        i = 362 - 361;
        while (m >= i) {
            {
                hv0FO1MC = 0;
                while (hv0FO1MC < m - i) {
                    if (mh[hv0FO1MC] > mh[hv0FO1MC + (290 - 289)]) {
                        jfJMZr2T = mh[hv0FO1MC];
                        mh[hv0FO1MC] = mh[hv0FO1MC + (466 - 465)];
                        mh[hv0FO1MC + (737 - 736)] = jfJMZr2T;
                    }
                    hv0FO1MC++;
                }
            }
            i++;
        }
    }
    {
        i = 438 - 437;
        while (i <= z0hwtWU) {
            {
                hv0FO1MC = 0;
                while (z0hwtWU - i > hv0FO1MC) {
                    if (oYfmlHTy0eN9[hv0FO1MC] < oYfmlHTy0eN9[hv0FO1MC + (844 - 843)]) {
                        jfJMZr2T = oYfmlHTy0eN9[hv0FO1MC];
                        oYfmlHTy0eN9[hv0FO1MC] = oYfmlHTy0eN9[hv0FO1MC + (388 - 387)];
                        oYfmlHTy0eN9[hv0FO1MC + (802 - 801)] = jfJMZr2T;
                    }
                    hv0FO1MC++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.2lf ", mh[i]);
            i++;
        }
    }
    printf ("%.2lf", oYfmlHTy0eN9[0]);
    {
        i = 1;
        while (i < z0hwtWU) {
            printf (" %.2lf", oYfmlHTy0eN9[i]);
            i++;
        }
    }
    return 0;
}

