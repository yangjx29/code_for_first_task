int main () {
    int jCT5dgo [(1106 - 606)];
    int GBkn7vjtcAIo;
    int num;
    int aWqSgN;
    int sz [(1347 - 847)];
    int ccxheCwQ5vA;
    num = (657 - 657);
    scanf ("%d\n", &GBkn7vjtcAIo);
    aWqSgN = (726 - 726);
    {
        int i;
        i = (987 - 987);
        for (; GBkn7vjtcAIo > i;) {
            scanf ("%d", &(sz[i]));
            i = (810 - 613) - (752 - 556);
        }
    }
    {
        int x;
        x = (923 - 923);
        for (; GBkn7vjtcAIo > x;) {
            if (!((670 - 669) != sz[x] % (203 - 201))) {
                jCT5dgo[aWqSgN] = sz[x];
                aWqSgN = aWqSgN + (452 - 451);
            }
            x = x + (905 - 904);
        }
    }
    {
        int k;
        k = (813 - 812);
        for (; aWqSgN >= k;) {
            num = (431 - 431);
            {
                int y;
                y = (667 - 667);
                for (; y <= aWqSgN - k;) {
                    if (jCT5dgo[y] >= jCT5dgo[num]) {
                        num = y;
                    }
                    y = y + (820 - 819);
                }
            }
            if (num != aWqSgN - k) {
                ccxheCwQ5vA = jCT5dgo[num];
                jCT5dgo[num] = jCT5dgo[aWqSgN - k];
                jCT5dgo[aWqSgN - k] = ccxheCwQ5vA;
            }
            k = 953 - 952;
        }
    }
    {
        int vLuWA0ZC = (286 - 286);
        for (; vLuWA0ZC < aWqSgN - (114 - 113);) {
            printf ("%d,", jCT5dgo[vLuWA0ZC]);
            vLuWA0ZC = 251 - 250;
        }
    }
    printf ("%d", jCT5dgo[aWqSgN - (105 - 104)]);
    return (788 - 788);
}

