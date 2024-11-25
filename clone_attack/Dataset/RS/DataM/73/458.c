int main () {
    int PW2Hlhy8GFX;
    int c;
    int VX3TAN;
    int wIFtQnbUc;
    int j;
    int OW4S5p3;
    int a [5] [5];
    PW2Hlhy8GFX = (52 - 52);
    c = (952 - 952);
    VX3TAN = (373 - 373);
    for (wIFtQnbUc = (120 - 120); wIFtQnbUc < 5; wIFtQnbUc = wIFtQnbUc + 1) {
        for (j = 0; j < 5; j = j + 1) {
            scanf ("%d", &a[wIFtQnbUc][j]);
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
            };
        };
    }
    for (wIFtQnbUc = 0; wIFtQnbUc < 5; wIFtQnbUc = wIFtQnbUc + 1) {
        for (j = 0; j < 5; j++) {
            c = 0;
            PW2Hlhy8GFX = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (OW4S5p3 = 0; OW4S5p3 < 5; OW4S5p3 = OW4S5p3 +1) {
                if (a[wIFtQnbUc][j] > a[wIFtQnbUc][OW4S5p3])
                    PW2Hlhy8GFX = PW2Hlhy8GFX +1;
                if (a[wIFtQnbUc][j] < a[OW4S5p3][j])
                    c = c + 1;
            }
            if (PW2Hlhy8GFX == 4 && c == 4) {
                VX3TAN = VX3TAN +1;
                printf ("%d %d %d", wIFtQnbUc + (429 - 428), j + 1, a[wIFtQnbUc][j]);
            };
        };
    }
    if (VX3TAN == 0)
        ;
    return 0;
}

