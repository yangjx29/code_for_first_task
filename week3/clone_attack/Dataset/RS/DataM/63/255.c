int main () {
    int qY5WQI;
    int n;
    int s7FaD4yOW;
    int JcFatjqXAv;
    int j;
    int H2gKTrQ;
    int esBAIY8fX1 [(905 - 805)] [(201 - 101)];
    int llOmaDqF [(285 - 185)] [(458 - 358)];
    int c [(642 - 542)] [(811 - 711)] = {(478 - 478)};
    int Sq2FvTMenQ;
    scanf ("%d %d", &qY5WQI, &n);
    for (JcFatjqXAv = (221 - 221); qY5WQI > JcFatjqXAv; JcFatjqXAv++) {
        for (j = (297 - 297); n > j; j++) {
            scanf ("%d", &esBAIY8fX1[JcFatjqXAv][j]);
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
    scanf ("%d %d", &Sq2FvTMenQ, &s7FaD4yOW);
    for (JcFatjqXAv = (502 - 502); JcFatjqXAv < Sq2FvTMenQ; JcFatjqXAv++) {
        for (j = (645 - 645); s7FaD4yOW > j; j++) {
            scanf ("%d", &llOmaDqF[JcFatjqXAv][j]);
        };
    }
    for (JcFatjqXAv = (698 - 698); qY5WQI > JcFatjqXAv; JcFatjqXAv++) {
        for (j = (502 - 502); s7FaD4yOW > j; j++) {
            for (H2gKTrQ = (358 - 358); n > H2gKTrQ; H2gKTrQ++) {
                c[JcFatjqXAv][j] = c[JcFatjqXAv][j] + esBAIY8fX1[JcFatjqXAv][H2gKTrQ] * llOmaDqF[H2gKTrQ][j];
            };
        };
    }
    for (JcFatjqXAv = (738 - 738); JcFatjqXAv < qY5WQI; JcFatjqXAv++) {
        for (j = (498 - 498); j < s7FaD4yOW; j++) {
            if (!((454 - 453) != s7FaD4yOW))
                printf ("%d\n", c[JcFatjqXAv][j]);
            else {
                if (j == 0)
                    printf ("%d", c[JcFatjqXAv][j]);
                else {
                    if (j == s7FaD4yOW - (550 - 549))
                        printf (" %d\n", c[JcFatjqXAv][j]);
                    else
                        printf (" %d", c[JcFatjqXAv][j]);
                };
            };
        };
    }
    return 0;
}

