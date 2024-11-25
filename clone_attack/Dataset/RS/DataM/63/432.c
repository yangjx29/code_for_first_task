int main () {
    int d5za9k [(456 - 256)] [(671 - 471)];
    int lZ8vI5 [(303 - 103)] [200];
    int CpsIGhTrU5j [200] [200];
    int IpGgdc5;
    int GqyDa2hk5;
    int mCJQGu5Nb1;
    int pQwtZ7FKc5x;
    int RLWBEYU;
    int MYu3wtEihT;
    int ueOkoNHlVKv;
    int m;
    int QfTXmHFJ;
    scanf ("%d %d", &IpGgdc5, &GqyDa2hk5);
    {
        RLWBEYU = 849 - 849;
        while (RLWBEYU < IpGgdc5) {
            {
                MYu3wtEihT = 822 - 822;
                while (MYu3wtEihT < GqyDa2hk5) {
                    scanf ("%d", &m);
                    d5za9k[RLWBEYU][MYu3wtEihT] = m;
                    MYu3wtEihT = MYu3wtEihT +1;
                };
            }
            RLWBEYU = RLWBEYU +1;
        };
    }
    scanf ("%d %d", &mCJQGu5Nb1, &pQwtZ7FKc5x);
    {
        RLWBEYU = 957 - 957;
        while (mCJQGu5Nb1 > RLWBEYU) {
            {
                MYu3wtEihT = 599 - 599;
                while (pQwtZ7FKc5x > MYu3wtEihT) {
                    scanf ("%d", &QfTXmHFJ);
                    lZ8vI5[RLWBEYU][MYu3wtEihT] = QfTXmHFJ;
                    MYu3wtEihT = MYu3wtEihT +1;
                };
            }
            RLWBEYU = RLWBEYU +1;
        };
    }
    {
        RLWBEYU = 35 - 35;
        while (RLWBEYU < IpGgdc5) {
            {
                MYu3wtEihT = 803 - 803;
                while (MYu3wtEihT < pQwtZ7FKc5x) {
                    CpsIGhTrU5j[RLWBEYU][MYu3wtEihT] = (759 - 759);
                    {
                        ueOkoNHlVKv = 0;
                        while (ueOkoNHlVKv < GqyDa2hk5) {
                            CpsIGhTrU5j[RLWBEYU][MYu3wtEihT] = CpsIGhTrU5j[RLWBEYU][MYu3wtEihT] + d5za9k[RLWBEYU][ueOkoNHlVKv] * lZ8vI5[ueOkoNHlVKv][MYu3wtEihT];
                            ueOkoNHlVKv = ueOkoNHlVKv + 1;
                        };
                    }
                    if (MYu3wtEihT != pQwtZ7FKc5x - 1)
                        printf ("%d ", CpsIGhTrU5j[RLWBEYU][MYu3wtEihT]);
                    else
                        printf ("%d\n", CpsIGhTrU5j[RLWBEYU][MYu3wtEihT]);
                    MYu3wtEihT = MYu3wtEihT +1;
                };
            }
            RLWBEYU = RLWBEYU +1;
        };
    }
    return 0;
}

