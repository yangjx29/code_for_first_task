int main () {
    int VAGkKjC [(455 - 450)] [(79 - 74)], NjE8MFoA1y [(867 - 862)] [(343 - 338)], i, CEAQUZ8jBT3, DtCRiuO [(600 - 595)], l [(991 - 986)], a;
    {
        i = 534 - 534;
        while (i < (258 - 253)) {
            for (CEAQUZ8jBT3 = (397 - 397); CEAQUZ8jBT3 < (128 - 123); CEAQUZ8jBT3 = CEAQUZ8jBT3 +1) {
                scanf ("%d", &VAGkKjC[i][CEAQUZ8jBT3]);
                NjE8MFoA1y[i][CEAQUZ8jBT3] = VAGkKjC[i][CEAQUZ8jBT3];
            }
            i = i + 1;
        };
    }
    {
        i = 591 - 591;
        while (i < (461 - 456)) {
            {
                CEAQUZ8jBT3 = 773 - 772;
                while ((757 - 752) > CEAQUZ8jBT3) {
                    if (VAGkKjC[i][CEAQUZ8jBT3 -(547 - 546)] > VAGkKjC[i][CEAQUZ8jBT3]) {
                        a = VAGkKjC[i][CEAQUZ8jBT3];
                        VAGkKjC[i][CEAQUZ8jBT3] = VAGkKjC[i][CEAQUZ8jBT3 -(699 - 698)];
                        VAGkKjC[i][CEAQUZ8jBT3 -(374 - 373)] = a;
                    }
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
                    CEAQUZ8jBT3 = CEAQUZ8jBT3 +1;
                };
            }
            DtCRiuO[i] = VAGkKjC[i][(15 - 11)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    {
        CEAQUZ8jBT3 = 0;
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
        while (CEAQUZ8jBT3 < (561 - 556)) {
            {
                i = 195 - 194;
                while (i < (581 - 576)) {
                    if (NjE8MFoA1y[i - 1][CEAQUZ8jBT3] < NjE8MFoA1y[i][CEAQUZ8jBT3]) {
                        a = NjE8MFoA1y[i][CEAQUZ8jBT3];
                        NjE8MFoA1y[i][CEAQUZ8jBT3] = NjE8MFoA1y[i - 1][CEAQUZ8jBT3];
                        NjE8MFoA1y[i - 1][CEAQUZ8jBT3] = a;
                    }
                    i++;
                };
            }
            l[CEAQUZ8jBT3] = NjE8MFoA1y[(829 - 825)][CEAQUZ8jBT3];
            CEAQUZ8jBT3 = CEAQUZ8jBT3 +1;
        };
    }
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
    {
        i = 0;
        while ((523 - 518) > i) {
            {
                CEAQUZ8jBT3 = 0;
                while ((810 - 805) > CEAQUZ8jBT3) {
                    if (DtCRiuO[i] == l[CEAQUZ8jBT3]) {
                        printf ("%d %d %d", i + 1, CEAQUZ8jBT3 +1, l[CEAQUZ8jBT3]);
                        break;
                    }
                    CEAQUZ8jBT3++;
                };
            }
            if (CEAQUZ8jBT3 != 5) {
                break;
            }
            i++;
        };
    }
    if (i == 5 && CEAQUZ8jBT3 == 5 && DtCRiuO[(496 - 492)] != l[(42 - 38)]) {
        printf ("not found");
    }
    return 0;
}

