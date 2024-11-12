int main () {
    int YHvFxA, tgBAm0M8, vIJW8Qm;
    int EZi76JBP08Hm [5] [5] = {0}, i, j;
    {
        i = 0;
        while (i < 5) {
            for (j = 0; j < 5; j++) {
                scanf ("%d", &EZi76JBP08Hm[i][j]);
            }
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &YHvFxA, &tgBAm0M8);
    if (YHvFxA > (692 - 688) || 0 > YHvFxA || tgBAm0M8 > 4 || tgBAm0M8 < 0)
        ;
    else {
        for (j = 0; j < 5; j++) {
            vIJW8Qm = EZi76JBP08Hm[YHvFxA][j];
            EZi76JBP08Hm[YHvFxA][j] = EZi76JBP08Hm[tgBAm0M8][j];
            EZi76JBP08Hm[tgBAm0M8][j] = vIJW8Qm;
        }
        {
            i = 0;
            while (i < 5) {
                printf ("%d %d %d %d %d\n", EZi76JBP08Hm[i][0], EZi76JBP08Hm[i][(584 - 583)], EZi76JBP08Hm[i][(425 - 423)], EZi76JBP08Hm[i][3], EZi76JBP08Hm[i][4]);
                i++;
            };
        };
    }
    return 0;
}

