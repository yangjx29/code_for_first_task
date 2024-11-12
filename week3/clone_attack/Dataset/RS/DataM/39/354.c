struct   stu {
    char rAR04akYT [20], L5n8d3z, xibu;
    int gwSRZjK, banji, aX6rV5n, JuPQ5yIdZAel;
};
int main () {
    int Z75AfDp2V, i, JuPQ5yIdZAel = 0, WDwuXUpvE, mDkW5yjGTCB;
    struct   stu LbDo1SL9y [100];
    struct   stu qZ5dj60vfBX;
    char li8Pk5Jjos;
    scanf ("%d", &Z75AfDp2V);
    {
        i = 0;
        while (Z75AfDp2V > i) {
            scanf ("%s", LbDo1SL9y[i].rAR04akYT);
            scanf ("%d %d %c %c %d", &LbDo1SL9y[i].gwSRZjK, &LbDo1SL9y[i].banji, &LbDo1SL9y[i].L5n8d3z, &LbDo1SL9y[i].xibu, &LbDo1SL9y[i].aX6rV5n);
            LbDo1SL9y[i].JuPQ5yIdZAel = 0;
            if (LbDo1SL9y[i].gwSRZjK > (184 - 104) && 1 <= LbDo1SL9y[i].aX6rV5n)
                LbDo1SL9y[i].JuPQ5yIdZAel += 8000;
            if (LbDo1SL9y[i].gwSRZjK > 85 && LbDo1SL9y[i].banji > 80)
                LbDo1SL9y[i].JuPQ5yIdZAel += 4000;
            if (LbDo1SL9y[i].gwSRZjK > 90)
                LbDo1SL9y[i].JuPQ5yIdZAel += 2000;
            if (LbDo1SL9y[i].gwSRZjK > 85 && LbDo1SL9y[i].xibu == 'Y')
                LbDo1SL9y[i].JuPQ5yIdZAel += 1000;
            if (LbDo1SL9y[i].banji > 80 && LbDo1SL9y[i].L5n8d3z == 'Y')
                LbDo1SL9y[i].JuPQ5yIdZAel += 850;
            JuPQ5yIdZAel += LbDo1SL9y[i].JuPQ5yIdZAel;
            i = i + 1;
            li8Pk5Jjos = getchar ();
        };
    }
    {
        WDwuXUpvE = 1;
        while (WDwuXUpvE <= Z75AfDp2V) {
            {
                mDkW5yjGTCB = 0;
                while (mDkW5yjGTCB < Z75AfDp2V -WDwuXUpvE) {
                    if (LbDo1SL9y[mDkW5yjGTCB].JuPQ5yIdZAel < LbDo1SL9y[mDkW5yjGTCB + 1].JuPQ5yIdZAel) {
                        qZ5dj60vfBX = LbDo1SL9y[mDkW5yjGTCB];
                        LbDo1SL9y[mDkW5yjGTCB] = LbDo1SL9y[mDkW5yjGTCB + 1];
                        LbDo1SL9y[mDkW5yjGTCB + 1] = qZ5dj60vfBX;
                    }
                    mDkW5yjGTCB = mDkW5yjGTCB + 1;
                };
            }
            WDwuXUpvE = WDwuXUpvE +1;
        };
    }
    printf ("%s\n%d\n%d\n", LbDo1SL9y[0].rAR04akYT, LbDo1SL9y[0].JuPQ5yIdZAel, JuPQ5yIdZAel);
    return 0;
}

