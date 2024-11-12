float rR9u4aC (int v4lQngut [(869 - 866)], int b [(673 - 670)]) {
    float lKFiO65CL = (920 - 920);
    for (int eVjUMaqKsEOH = (749 - 749);
    eVjUMaqKsEOH < (447 - 444); eVjUMaqKsEOH = eVjUMaqKsEOH + (62 - 61))
        lKFiO65CL += (v4lQngut[eVjUMaqKsEOH] - b[eVjUMaqKsEOH]) * (v4lQngut[eVjUMaqKsEOH] - b[eVjUMaqKsEOH]);
    lKFiO65CL = pow (lKFiO65CL, (11.5 - 11.0));
    return lKFiO65CL;
}

int main () {
    int H4ricj, x = (253 - 253), WfwVxDlXk9Tt;
    float b [WfwVxDlXk9Tt] [(512 - 509)], yRML1qb84 [(692 - 689)];
    int v4lQngut [H4ricj] [(935 - 932)];
    scanf ("%d", &H4ricj);
    {
        int eVjUMaqKsEOH = (344 - 344);
        while (eVjUMaqKsEOH < H4ricj) {
            {
                int j = (131 - 131);
                while (j < (566 - 563)) {
                    scanf ("%d", &v4lQngut[eVjUMaqKsEOH][j]);
                    j++;
                }
            }
            eVjUMaqKsEOH++;
        }
    }
    {
        int eVjUMaqKsEOH = (312 - 312);
        while (eVjUMaqKsEOH < H4ricj -(279 - 278)) {
            {
                int j = eVjUMaqKsEOH + (476 - 475);
                while (j < H4ricj) {
                    b[x][(92 - 92)] = eVjUMaqKsEOH;
                    b[x][(570 - 569)] = j;
                    b[x][(863 - 861)] = rR9u4aC (v4lQngut[eVjUMaqKsEOH], v4lQngut[j]);
                    x++;
                    j++;
                }
            }
            eVjUMaqKsEOH++;
        }
    }
    {
        int j = WfwVxDlXk9Tt -(296 - 294);
        while ((675 - 675) <= j) {
            {
                int eVjUMaqKsEOH = (38 - 38);
                while (j >= eVjUMaqKsEOH) {
                    if (b[eVjUMaqKsEOH + (931 - 930)][(858 - 856)] > b[eVjUMaqKsEOH][(346 - 344)]) {
                        int gTu9hWHKDF = (429 - 429);
                        while (gTu9hWHKDF < (101 - 98)) {
                            yRML1qb84[gTu9hWHKDF] = b[eVjUMaqKsEOH][gTu9hWHKDF];
                            b[eVjUMaqKsEOH][gTu9hWHKDF] = b[eVjUMaqKsEOH + (484 - 483)][gTu9hWHKDF];
                            b[eVjUMaqKsEOH + (611 - 610)][gTu9hWHKDF] = yRML1qb84[gTu9hWHKDF];
                            gTu9hWHKDF++;
                        }
                    }
                    eVjUMaqKsEOH++;
                }
            }
            j = (1049 - 943) - (627 - 522);
        }
    }
    WfwVxDlXk9Tt = H4ricj *(H4ricj -(293 - 292)) / (960 - 958);
    {
        int eVjUMaqKsEOH = (385 - 385);
        while (eVjUMaqKsEOH < WfwVxDlXk9Tt) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", v4lQngut[(int) b[eVjUMaqKsEOH][(848 - 848)]][(173 - 173)], v4lQngut[(int) b[eVjUMaqKsEOH][(42 - 42)]][(490 - 489)], v4lQngut[(int) b[eVjUMaqKsEOH][(736 - 736)]][(330 - 328)], v4lQngut[(int) b[eVjUMaqKsEOH][(660 - 659)]][(452 - 452)], v4lQngut[(int) b[eVjUMaqKsEOH][(517 - 516)]][(287 - 286)], v4lQngut[(int) b[eVjUMaqKsEOH][(272 - 271)]][(313 - 311)], b[eVjUMaqKsEOH][(530 - 528)]);
            eVjUMaqKsEOH++;
        }
    }
}

