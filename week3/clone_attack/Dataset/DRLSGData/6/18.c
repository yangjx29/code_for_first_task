int main () {
    int lKQ9dGZDUI;
    int qGfLRyNPHrv1 [100] [100];
    int l1uxzM0;
    int mP1HY7LCgt;
    int OpFBQe;
    int lQBM4S6d5V;
    int uOyQYpKcVz;
    int PLzMeZTnbxqJ;
    int XLvpHBe;
    scanf ("%d", &uOyQYpKcVz);
    {
        lKQ9dGZDUI = (744 - 744);
        for (; lKQ9dGZDUI < uOyQYpKcVz;) {
            scanf ("%d%d", &lQBM4S6d5V, &OpFBQe);
            l1uxzM0 = (241 - 241);
            {
                PLzMeZTnbxqJ = (403 - 403);
                for (; PLzMeZTnbxqJ < lQBM4S6d5V;) {
                    for (XLvpHBe = 0; XLvpHBe < OpFBQe; XLvpHBe = XLvpHBe +1)
                        scanf ("%d", &qGfLRyNPHrv1[PLzMeZTnbxqJ][XLvpHBe]);
                    PLzMeZTnbxqJ = PLzMeZTnbxqJ +1;
                }
            }
            if ((OpFBQe > 1) && (lQBM4S6d5V > 1)) {
                {
                    mP1HY7LCgt = 0;
                    for (; mP1HY7LCgt < OpFBQe;) {
                        l1uxzM0 = l1uxzM0 + qGfLRyNPHrv1[0][mP1HY7LCgt];
                        l1uxzM0 = l1uxzM0 + qGfLRyNPHrv1[lQBM4S6d5V - 1][mP1HY7LCgt];
                        mP1HY7LCgt = mP1HY7LCgt + 1;
                    }
                }
                {
                    mP1HY7LCgt = 1;
                    while (mP1HY7LCgt < lQBM4S6d5V - 1) {
                        l1uxzM0 += qGfLRyNPHrv1[mP1HY7LCgt][0];
                        l1uxzM0 = l1uxzM0 + qGfLRyNPHrv1[mP1HY7LCgt][OpFBQe -1];
                        mP1HY7LCgt = mP1HY7LCgt + 1;
                    }
                }
            }
            else if (OpFBQe == 1) {
                for (mP1HY7LCgt = 0; mP1HY7LCgt < lQBM4S6d5V; mP1HY7LCgt = mP1HY7LCgt + 1)
                    l1uxzM0 += qGfLRyNPHrv1[mP1HY7LCgt][0];
            }
            else if (lQBM4S6d5V == 1) {
                mP1HY7LCgt = 0;
                for (; mP1HY7LCgt < OpFBQe;) {
                    l1uxzM0 += qGfLRyNPHrv1[0][mP1HY7LCgt];
                    mP1HY7LCgt = mP1HY7LCgt + 1;
                }
            }
            printf ("%d\n", l1uxzM0);
            lKQ9dGZDUI = lKQ9dGZDUI + 1;
        }
    }
    return 0;
}

