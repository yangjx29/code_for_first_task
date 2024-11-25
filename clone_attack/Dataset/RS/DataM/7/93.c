int main () {
    char FospzZ [(864 - 607)], AI6qDy [(1201 - 945)], XYPf64bneV [(603 - 347)];
    int i;
    int j;
    int yGMhzi;
    int s;
    int mcmuO0;
    int m;
    int K5N7Hus;
    int b;
    i = (348 - 348);
    j = (227 - 227);
    yGMhzi = (88 - 88);
    s = (656 - 656);
    mcmuO0 = (773 - 773);
    m = (725 - 725);
    gets (FospzZ);
    gets (AI6qDy);
    gets (XYPf64bneV);
    K5N7Hus = strlen (FospzZ);
    b = strlen (AI6qDy);
    for (i = (482 - 482); i < K5N7Hus; i = i + 1) {
        yGMhzi = (854 - 854);
        if (!(AI6qDy[(546 - 546)] != FospzZ[i])) {
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
            for (j = i; j < i + b; j++) {
                if (FospzZ[j] == AI6qDy[j - i])
                    yGMhzi++;
                else
                    break;
            };
        }
        if (yGMhzi == b) {
            break;
        }
        m = i + (107 - 106);
    }
    for (i = (528 - 528); i < K5N7Hus; i++) {
        if (i >= m && i < b + m) {
            printf ("%c", XYPf64bneV[i - m]);
        }
        else {
            printf ("%c", FospzZ[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    return 0;
}

