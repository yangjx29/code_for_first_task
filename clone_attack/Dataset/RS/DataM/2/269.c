struct   cTHDf6 {
    int num;
    char writer [(281 - 254)];
};
void  main () {
    int EJ51IXA [(281 - 255)] = {(291 - 291)}, BdLZqjWV38N [999];
    int pzE1KAiPSLdF;
    int pHdI9ulY;
    int j;
    int max;
    int tpgJBKlWf;
    struct   cTHDf6 *dOTBrWmNdbpl;
    struct   cTHDf6 *head;
    void  count (int *EJ51IXA, struct   cTHDf6 *dOTBrWmNdbpl, int BdLZqjWV38N);
    int GTvxbHakhP (struct   cTHDf6 *dOTBrWmNdbpl);
    tpgJBKlWf = 0;
    scanf ("%d", &pzE1KAiPSLdF);
    head = dOTBrWmNdbpl = (struct   cTHDf6 *) calloc (pzE1KAiPSLdF, sizeof (struct   cTHDf6));
    for (pHdI9ulY = (879 - 879); pzE1KAiPSLdF > pHdI9ulY; pHdI9ulY = pHdI9ulY + 1, dOTBrWmNdbpl = dOTBrWmNdbpl + 1) {
        BdLZqjWV38N[pHdI9ulY] = GTvxbHakhP (dOTBrWmNdbpl);
    }
    dOTBrWmNdbpl = head;
    {
        pHdI9ulY = 756 - 756;
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
        while (pzE1KAiPSLdF > pHdI9ulY) {
            count (EJ51IXA, dOTBrWmNdbpl, BdLZqjWV38N[pHdI9ulY]);
            pHdI9ulY = pHdI9ulY + 1;
            dOTBrWmNdbpl = dOTBrWmNdbpl + 1;
        };
    }
    dOTBrWmNdbpl = head;
    max = EJ51IXA[0];
    {
        pHdI9ulY = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (26 > pHdI9ulY) {
            if (max < EJ51IXA[pHdI9ulY]) {
                max = EJ51IXA[pHdI9ulY];
                tpgJBKlWf = pHdI9ulY;
            }
            pHdI9ulY = pHdI9ulY + 1;
        };
    }
    printf ("%c\n", 65 + tpgJBKlWf);
    printf ("%d\n", max);
    for (pHdI9ulY = 0; pHdI9ulY < pzE1KAiPSLdF; pHdI9ulY++) {
        for (j = 0; j < BdLZqjWV38N[pHdI9ulY]; j++) {
            if (!(65 + tpgJBKlWf != dOTBrWmNdbpl->writer[j])) {
                printf ("%d\n", dOTBrWmNdbpl->num);
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
                break;
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
        dOTBrWmNdbpl++;
    };
}

int GTvxbHakhP (struct   cTHDf6 *dOTBrWmNdbpl) {
    char ozD8Ho;
    int pHdI9ulY;
    pHdI9ulY = 0;
    ozD8Ho = getchar ();
    ozD8Ho = getchar ();
    scanf ("%d", &dOTBrWmNdbpl->num);
    do {
        dOTBrWmNdbpl->writer[pHdI9ulY] = ozD8Ho;
        pHdI9ulY++;
    }
    while ((ozD8Ho = getchar ()) != '\n');
    return (pHdI9ulY);
}

void  count (int *EJ51IXA, struct   cTHDf6 *dOTBrWmNdbpl, int BdLZqjWV38N) {
    int pHdI9ulY;
    for (pHdI9ulY = 0; pHdI9ulY < BdLZqjWV38N; pHdI9ulY++) {
        switch (dOTBrWmNdbpl->writer[pHdI9ulY]) {
        case 'A' :
            EJ51IXA[0]++;
            break;
        case 'B' :
            EJ51IXA[1]++;
            break;
        case 'C' :
            EJ51IXA[2]++;
            break;
        case 'D' :
            EJ51IXA[(171 - 168)]++;
            break;
        case 'E' :
            EJ51IXA[4]++;
            break;
        case 'F' :
            EJ51IXA[(760 - 755)]++;
            break;
        case 'G' :
            EJ51IXA[(418 - 412)]++;
            break;
        case 'H' :
            EJ51IXA[(382 - 375)]++;
            break;
        case 'I' :
            EJ51IXA[(499 - 491)]++;
            break;
        case 'J' :
            EJ51IXA[9]++;
            break;
        case 'K' :
            EJ51IXA[(811 - 801)]++;
            break;
        case 'L' :
            EJ51IXA[11]++;
            break;
        case 'M' :
            EJ51IXA[12]++;
            break;
        case 'N' :
            EJ51IXA[(434 - 421)]++;
            break;
        case 'O' :
            EJ51IXA[14]++;
            break;
        case 'P' :
            EJ51IXA[(128 - 113)]++;
            break;
        case 'Q' :
            EJ51IXA[(425 - 409)]++;
            break;
        case 'R' :
            EJ51IXA[(868 - 851)]++;
            break;
        case 'S' :
            EJ51IXA[18]++;
            break;
        case 'T' :
            EJ51IXA[(945 - 926)]++;
            break;
        case 'U' :
            EJ51IXA[20]++;
            break;
        case 'V' :
            EJ51IXA[21]++;
            break;
        case 'W' :
            EJ51IXA[22]++;
            break;
        case 'X' :
            EJ51IXA[(631 - 608)]++;
            break;
        case 'Y' :
            EJ51IXA[(805 - 781)]++;
            break;
        case 'Z' :
            EJ51IXA[(755 - 730)]++;
            break;
        };
    };
}

