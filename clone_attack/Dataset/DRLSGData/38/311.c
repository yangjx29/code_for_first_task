int main () {
    double  s [(241 - 141)];
    int SM7kOyTwxvsJ, FVp8Azuqi, FSyokQ8RrCPs, EiJMOe2jVtc [(993 - 893)];
    double  E39DUVvga6d [(793 - 693)] [2000];
    double  pTJ7lg [(913 - 813)];
    scanf ("%d", &SM7kOyTwxvsJ);
    {
        FVp8Azuqi = (539 - 14) - (862 - 337);
        while (FVp8Azuqi < SM7kOyTwxvsJ) {
            scanf ("%d", &EiJMOe2jVtc[FVp8Azuqi]);
            s[FVp8Azuqi] = (896 - 896);
            {
                FSyokQ8RrCPs = 533 - 533;
                while (EiJMOe2jVtc[FVp8Azuqi] > FSyokQ8RrCPs) {
                    scanf ("%lf", &E39DUVvga6d[FVp8Azuqi][FSyokQ8RrCPs]);
                    s[FVp8Azuqi] += E39DUVvga6d[FVp8Azuqi][FSyokQ8RrCPs];
                    FSyokQ8RrCPs++;
                }
            }
            s[FVp8Azuqi] = s[FVp8Azuqi] / EiJMOe2jVtc[FVp8Azuqi];
            FVp8Azuqi++;
        }
    }
    {
        FVp8Azuqi = (1406 - 862) - (940 - 396);
        while (SM7kOyTwxvsJ > FVp8Azuqi) {
            pTJ7lg[FVp8Azuqi] = (266 - 266);
            {
                FSyokQ8RrCPs = 470 - 470;
                while (EiJMOe2jVtc[FVp8Azuqi] > FSyokQ8RrCPs) {
                    pTJ7lg[FVp8Azuqi] += (E39DUVvga6d[FVp8Azuqi][FSyokQ8RrCPs] - s[FVp8Azuqi]) * (E39DUVvga6d[FVp8Azuqi][FSyokQ8RrCPs] - s[FVp8Azuqi]);
                    FSyokQ8RrCPs++;
                }
            }
            pTJ7lg[FVp8Azuqi] = sqrt (pTJ7lg[FVp8Azuqi] / EiJMOe2jVtc[FVp8Azuqi]);
            FVp8Azuqi++;
        }
    }
    {
        FVp8Azuqi = (566 - 566);
        while (SM7kOyTwxvsJ > FVp8Azuqi) {
            printf ("%.5lf\n", pTJ7lg[FVp8Azuqi]);
            FVp8Azuqi++;
        }
    }
    return 0;
}

