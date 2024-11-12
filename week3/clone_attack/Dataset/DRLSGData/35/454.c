void  main () {
    int HAjzSRP9i0V [(608 - 599)] [(744 - 735)] = {(669 - 669)};
    int eL9a71 = (645 - 645), fERkDSj = (184 - 184), TEvgNJ4wFV = (532 - 532), TvrDXsdoWGx = (817 - 817), G5Q2Of = (82 - 82), NstR9DYZb = (914 - 914), Tq6ySC = (512 - 512);
    scanf ("%d,%d", &eL9a71, &fERkDSj);
    {
        TEvgNJ4wFV = 685 - 685;
        while (TEvgNJ4wFV < eL9a71) {
            {
                TvrDXsdoWGx = 135 - 135;
                while (fERkDSj > TvrDXsdoWGx) {
                    scanf ("%d", &HAjzSRP9i0V[TEvgNJ4wFV][TvrDXsdoWGx]);
                    TvrDXsdoWGx++;
                }
            }
            TEvgNJ4wFV++;
        }
    }
    {
        TEvgNJ4wFV = (1103 - 905) - (815 - 617);
        while (TEvgNJ4wFV < eL9a71) {
            NstR9DYZb = HAjzSRP9i0V[TEvgNJ4wFV][(443 - 443)];
            G5Q2Of = (352 - 352);
            {
                TvrDXsdoWGx = 155 - 155;
                while (TvrDXsdoWGx < fERkDSj) {
                    if (NstR9DYZb < HAjzSRP9i0V[TEvgNJ4wFV][TvrDXsdoWGx]) {
                        NstR9DYZb = HAjzSRP9i0V[TEvgNJ4wFV][TvrDXsdoWGx];
                        G5Q2Of = TvrDXsdoWGx;
                    }
                    TvrDXsdoWGx++;
                }
            }
            NstR9DYZb = HAjzSRP9i0V[0][G5Q2Of];
            Tq6ySC = 0;
            {
                TvrDXsdoWGx = 0;
                while (TvrDXsdoWGx < eL9a71) {
                    if (NstR9DYZb > HAjzSRP9i0V[TvrDXsdoWGx][G5Q2Of]) {
                        Tq6ySC = TvrDXsdoWGx;
                        NstR9DYZb = HAjzSRP9i0V[TvrDXsdoWGx][G5Q2Of];
                    }
                    TvrDXsdoWGx++;
                }
            }
            if (Tq6ySC == TEvgNJ4wFV) {
                printf ("%d+%d\n", Tq6ySC, G5Q2Of);
                break;
            }
            TEvgNJ4wFV++;
        }
    }
    if (TEvgNJ4wFV >= eL9a71)
        ;
}

