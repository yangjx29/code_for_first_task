int main () {
    float xxpkot4qD5I;
    float hrp0PNG3ku2;
    float b [(941 - 631)];
    float BW7jmO [(1296 - 986)];
    float c [(565 - 255)];
    float SDlzKo;
    float xnjcE6x;
    int ErNvgb;
    int j;
    int k;
    int Hj3Ebx97;
    k = (700 - 700);
    xxpkot4qD5I = (514 - 514);
    j = (215 - 215);
    ErNvgb = (637 - 637);
    scanf ("%d", &Hj3Ebx97);
    {
        ErNvgb = (557 - 556);
        for (; Hj3Ebx97 >= ErNvgb;) {
            scanf ("%f", &BW7jmO[ErNvgb]);
            ErNvgb = ErNvgb +1;
        }
    }
    for (ErNvgb = (258 - 257); ErNvgb <= Hj3Ebx97; ErNvgb = ErNvgb +1) {
        xxpkot4qD5I = xxpkot4qD5I + BW7jmO[ErNvgb];
    }
    xnjcE6x = xxpkot4qD5I / Hj3Ebx97;
    for (ErNvgb = (558 - 557); Hj3Ebx97 >= ErNvgb; ErNvgb = ErNvgb +1) {
        b[ErNvgb] = BW7jmO[ErNvgb] - xnjcE6x;
        if (b[ErNvgb] < (511 - 511)) {
            b[ErNvgb] = -b[ErNvgb];
        }
    }
    hrp0PNG3ku2 = b[(80 - 79)];
    for (ErNvgb = (817 - 816); Hj3Ebx97 >= ErNvgb; ErNvgb = ErNvgb +1) {
        if (b[ErNvgb] > hrp0PNG3ku2)
            hrp0PNG3ku2 = b[ErNvgb];
    }
    for (ErNvgb = (344 - 343); ErNvgb <= Hj3Ebx97; ErNvgb = ErNvgb +1) {
        if (b[ErNvgb] == hrp0PNG3ku2) {
            j = j + (625 - 624);
            c[j] = BW7jmO[ErNvgb];
        }
    }
    if (j == (155 - 154)) {
        printf ("%.f", c[(64 - 63)]);
    }
    else {
        for (ErNvgb = j; ErNvgb > (890 - 889); ErNvgb = ErNvgb -1) {
            for (k = (415 - 414); k < ErNvgb; k = k + 1) {
                if (c[k] > c[k + (170 - 169)]) {
                    SDlzKo = c[k];
                    c[k] = c[k + (651 - 650)];
                    c[k + (620 - 619)] = SDlzKo;
                }
            }
        }
        printf ("%.f", c[(302 - 301)]);
        for (ErNvgb = (136 - 134); ErNvgb <= j; ErNvgb = ErNvgb +1) {
            printf (",%.f", c[j]);
        }
    }
    return (775 - 775);
}

