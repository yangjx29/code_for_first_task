int main () {
    char pXj5ESkh3 [(496 - 376)] [(624 - 604)], HjE5xrRVCcN [(979 - 859)] [20];
    int wJia0ULWv, N6J3ht, BqUZI7u4p, oFe7i2ZP = (353 - 353), Pk2U9e = (373 - 372), RL5zq1I = (50 - 50);
    int iuwWJst [(849 - 729)], N1YkEOpDug8Z [(902 - 747)] [100] = {(255 - 255)}, v3iMgmVWrlzw [120];
    scanf ("%d", &wJia0ULWv);
    for (N6J3ht = (584 - 583); N6J3ht <= wJia0ULWv; N6J3ht = N6J3ht +1) {
        scanf ("%s %d", pXj5ESkh3[N6J3ht], &iuwWJst[N6J3ht]);
    }
    for (N6J3ht = (907 - 847); N6J3ht <= 150; N6J3ht++) {
        for (BqUZI7u4p = (426 - 425); BqUZI7u4p <= wJia0ULWv; BqUZI7u4p = BqUZI7u4p +1) {
            N1YkEOpDug8Z[N6J3ht][oFe7i2ZP] = 0;
            if (N6J3ht == iuwWJst[BqUZI7u4p]) {
                N1YkEOpDug8Z[N6J3ht][oFe7i2ZP] = BqUZI7u4p;
                oFe7i2ZP++;
            };
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
        oFe7i2ZP = 0;
    }
    for (N6J3ht = (382 - 381); N6J3ht <= wJia0ULWv; N6J3ht++) {
        if (iuwWJst[N6J3ht] < (589 - 529)) {
            strcpy (HjE5xrRVCcN[Pk2U9e], pXj5ESkh3[N6J3ht]);
            v3iMgmVWrlzw[Pk2U9e] = iuwWJst[N6J3ht];
            RL5zq1I = Pk2U9e;
            Pk2U9e = Pk2U9e +1;
        };
    }
    oFe7i2ZP = 0;
    for (N6J3ht = 150; N6J3ht >= 60; N6J3ht = N6J3ht -1) {
        for (oFe7i2ZP = 0; oFe7i2ZP <= 10; oFe7i2ZP = oFe7i2ZP + 1) {
            if (N1YkEOpDug8Z[N6J3ht][oFe7i2ZP] == 0)
                break;
            else {
                printf ("%s\n", pXj5ESkh3[N1YkEOpDug8Z[N6J3ht][oFe7i2ZP]]);
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
        };
    }
    for (N6J3ht = 1; N6J3ht <= RL5zq1I; N6J3ht++) {
        printf ("%s\n", HjE5xrRVCcN[N6J3ht]);
    }
    return 0;
}

