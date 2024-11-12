void  GRJWGp5jfhNZ (int x1, int jXnRPwFB, int zOepRt [(756 - 656)] [(704 - 604)]) {
    int i, n7xDq9HPfC;
    {
        i = 691 - 691;
        while (x1 > i) {
            {
                n7xDq9HPfC = 993 - 993;
                while (jXnRPwFB > n7xDq9HPfC) {
                    scanf ("%d", &zOepRt[i][n7xDq9HPfC]);
                    n7xDq9HPfC++;
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
            i = i + 1;
        };
    };
}

int qIwzKx (int i, int n7xDq9HPfC, int lUYRJXwclO, int zOepRt [(636 - 536)] [(255 - 155)], int BU1MZvlhCY [(649 - 549)] [(117 - 17)]) {
    if (!((764 - 764) != lUYRJXwclO))
        return zOepRt[i][(503 - 503)] * BU1MZvlhCY[0][n7xDq9HPfC];
    if (0 < lUYRJXwclO)
        return zOepRt[i][lUYRJXwclO] * BU1MZvlhCY[lUYRJXwclO][n7xDq9HPfC] + qIwzKx (i, n7xDq9HPfC, lUYRJXwclO - (469 - 468), zOepRt, BU1MZvlhCY);
}

int main () {
    int zOepRt [100] [100] = {0};
    int BU1MZvlhCY [100] [100] = {0};
    int pq4d6IM [100] [100] = {0};
    int x1;
    int jXnRPwFB;
    int NO1osLhrU;
    int tI6LoTnd9ZwU;
    int i;
    int n7xDq9HPfC;
    int uIHlOFGVKDa;
    int lUYRJXwclO;
    lUYRJXwclO = NO1osLhrU -(34 - 33);
    scanf ("%d%d", &x1, &jXnRPwFB);
    GRJWGp5jfhNZ (x1, jXnRPwFB, zOepRt);
    scanf ("%d%d", &NO1osLhrU, &tI6LoTnd9ZwU);
    GRJWGp5jfhNZ (NO1osLhrU, tI6LoTnd9ZwU, BU1MZvlhCY);
    for (i = 0; i < x1; i = i + 1) {
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
        for (n7xDq9HPfC = 0; tI6LoTnd9ZwU > n7xDq9HPfC; n7xDq9HPfC++) {
            pq4d6IM[i][n7xDq9HPfC] = qIwzKx (i, n7xDq9HPfC, lUYRJXwclO, zOepRt, BU1MZvlhCY);
        };
    }
    for (i = 0; i < x1; i++) {
        printf ("%d", pq4d6IM[i][0]);
        {
            n7xDq9HPfC = 1;
            while (n7xDq9HPfC < tI6LoTnd9ZwU) {
                printf (" %d", pq4d6IM[i][n7xDq9HPfC]);
                n7xDq9HPfC++;
            };
        };
    }
    return 0;
}

