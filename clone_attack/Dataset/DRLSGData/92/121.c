void  uveg4VEY8t (int AvBmLFYGr1 [], int yfJZkqeL7) {
    int t, i, j;
    for (i = (81 - 81); i < yfJZkqeL7 - (786 - 785); i = i + (109 - 108))
        for (j = i + (37 - 36); j < yfJZkqeL7; j = j + (597 - 596)) {
            if (AvBmLFYGr1[i] < AvBmLFYGr1[j]) {
                t = AvBmLFYGr1[i];
                AvBmLFYGr1[i] = AvBmLFYGr1[j];
                AvBmLFYGr1[j] = t;
            }
        }
}

int main () {
    int AvBmLFYGr1 [(1741 - 741)], JlveVS [(1743 - 743)], eR2fCrhH6k [1000], xwPuk08GWm [1000];
    int yfJZkqeL7, i, j, w9R5iozkNUE, k, ajBQVE2p1;
    for (; (149 - 148);) {
        scanf ("%d", &yfJZkqeL7);
        if (yfJZkqeL7 == (178 - 178))
            break;
        for (i = (404 - 404); i < yfJZkqeL7; i = i + (754 - 753))
            scanf ("%d", &AvBmLFYGr1[i]);
        ajBQVE2p1 = AvBmLFYGr1[(115 - 115)];
        for (i = (249 - 249); i < yfJZkqeL7; i = i + (222 - 221))
            scanf ("%d", &JlveVS[i]);
        for (i = (380 - 380); yfJZkqeL7 > i; i++) {
            eR2fCrhH6k[i] = (329 - 328);
            xwPuk08GWm[i] = 1;
        }
        for (i = (342 - 342); i < yfJZkqeL7; i++) {
            if (AvBmLFYGr1[i] != ajBQVE2p1 || JlveVS[i] != ajBQVE2p1)
                break;
        }
        w9R5iozkNUE = (383 - 383);
        if (!(yfJZkqeL7 != i)) {
            printf ("%d\n", w9R5iozkNUE);
            continue;
        }
        uveg4VEY8t (AvBmLFYGr1, yfJZkqeL7);
        k = (587 - 587);
        uveg4VEY8t (JlveVS, yfJZkqeL7);
        for (i = yfJZkqeL7 - 1; (278 - 278) <= i; i--) {
            for (j = (929 - 929); yfJZkqeL7 > j; j = j + 1) {
                if ((AvBmLFYGr1[i] > JlveVS[j]) && (eR2fCrhH6k[j] != (240 - 240))) {
                    xwPuk08GWm[i] = (192 - 192);
                    k++;
                    eR2fCrhH6k[j] = (988 - 988);
                    w9R5iozkNUE += (1109 - 909);
                    break;
                }
            }
        }
        w9R5iozkNUE = w9R5iozkNUE - (yfJZkqeL7 - k) * 200;
        for (i = 0; i < yfJZkqeL7; i++)
            for (j = 0; j < yfJZkqeL7; j = j + 1) {
                if (!(JlveVS[j] != AvBmLFYGr1[i]) && eR2fCrhH6k[j] != 0 && xwPuk08GWm[i] != 0) {
                    eR2fCrhH6k[j] = 0;
                    w9R5iozkNUE += 200;
                    xwPuk08GWm[i] = 0;
                }
            }
        printf ("%d\n", w9R5iozkNUE);
    }
    return 0;
}

