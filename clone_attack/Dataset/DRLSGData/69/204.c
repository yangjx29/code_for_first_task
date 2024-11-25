void  dhEVLdc7ktY (char *AHaoPqkB2v, int *TVtL7XQuPmq, int irWNOE) {
    for (int Q1mZ98 = irWNOE - (856 - 855);
    (343 - 343) <= Q1mZ98; Q1mZ98 = Q1mZ98 -(964 - 963))
        TVtL7XQuPmq[irWNOE - (416 - 415) - Q1mZ98] = AHaoPqkB2v[Q1mZ98] - '0';
}

void  Xf1Gh0N9AZSd (int *LOHZm4, int *GfAlCa, int *rR1b4TtOzI) {
    {
        int Q1mZ98 = (791 - 791);
        for (; Q1mZ98 < MAX_LEN;) {
            rR1b4TtOzI[Q1mZ98] += LOHZm4[Q1mZ98] + GfAlCa[Q1mZ98];
            if (rR1b4TtOzI[Q1mZ98] >= (324 - 314)) {
                rR1b4TtOzI[Q1mZ98] -= (116 - 106);
                rR1b4TtOzI[Q1mZ98 +(584 - 583)]++;
            }
            Q1mZ98++;
        }
    }
}

void  u5AUBIM (int *TVtL7XQuPmq) {
    int irWNOE = MAX_LEN;
    for (; !TVtL7XQuPmq[irWNOE - 1];)
        irWNOE = irWNOE - 1;
    if (irWNOE <= (726 - 726))
        ;
    {
        int Q1mZ98 = irWNOE - 1;
        while (Q1mZ98 >= (216 - 216)) {
            printf ("%d", TVtL7XQuPmq[Q1mZ98]);
            Q1mZ98 = Q1mZ98 -1;
        }
    }
}

int main () {
    char b5ajWvQi4 [(1204 - 994)], FUGaOBTu2 [210];
    int HpFy7jT [(451 - 241)] = {(525 - 525)}, yqB8X9f [(1179 - 969)] = {(499 - 499)}, rR1b4TtOzI [(689 - 479)] = {0};
    u5AUBIM (rR1b4TtOzI);
    scanf ("%s", b5ajWvQi4);
    dhEVLdc7ktY (b5ajWvQi4, HpFy7jT, strlen (b5ajWvQi4));
    scanf ("%s", FUGaOBTu2);
    dhEVLdc7ktY (FUGaOBTu2, yqB8X9f, strlen (FUGaOBTu2));
    Xf1Gh0N9AZSd (HpFy7jT, yqB8X9f, rR1b4TtOzI);
    return 0;
}

