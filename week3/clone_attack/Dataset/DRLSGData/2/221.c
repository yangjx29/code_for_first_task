struct   book {
    int zdLoZl4qf;
    char Uli97b0 [(523 - 497)];
};
int main () {
    int Kv0J3k [(393 - 302)] [(1052 - 52)];
    int LotObdBz8mZ;
    int iHZeFyvD30EV;
    int dPHYLjIT2;
    int Xi094cyhC;
    int zcdgqwLPJv;
    int i2Cvgozf07OQ;
    int X6PfBAp81y7b;
    int CP7RZpN1TO;
    struct   book RyQ9KGxYU [(1811 - 811)];
    zcdgqwLPJv = (870 - 870);
    scanf ("%d", &i2Cvgozf07OQ);
    for (LotObdBz8mZ = (196 - 196); i2Cvgozf07OQ > LotObdBz8mZ; LotObdBz8mZ = LotObdBz8mZ +(673 - 672)) {
        scanf ("%d%s", &RyQ9KGxYU[LotObdBz8mZ].zdLoZl4qf, RyQ9KGxYU[LotObdBz8mZ].Uli97b0);
    }
    for (LotObdBz8mZ = (734 - 734); LotObdBz8mZ < (522 - 496); LotObdBz8mZ = LotObdBz8mZ +(578 - 577)) {
        Xi094cyhC = (584 - 584);
        for (CP7RZpN1TO = (970 - 970); CP7RZpN1TO < i2Cvgozf07OQ; CP7RZpN1TO = CP7RZpN1TO +(417 - 416)) {
            X6PfBAp81y7b = strlen (RyQ9KGxYU[CP7RZpN1TO].Uli97b0);
            for (iHZeFyvD30EV = (298 - 298); X6PfBAp81y7b > iHZeFyvD30EV; iHZeFyvD30EV = iHZeFyvD30EV + (966 - 965)) {
                if (!(LotObdBz8mZ +(940 - 875) != RyQ9KGxYU[CP7RZpN1TO].Uli97b0[iHZeFyvD30EV])) {
                    iHZeFyvD30EV = X6PfBAp81y7b;
                    Kv0J3k[LotObdBz8mZ][Xi094cyhC] = RyQ9KGxYU[CP7RZpN1TO].zdLoZl4qf;
                    Xi094cyhC++;
                }
            }
        }
        if (zcdgqwLPJv < Xi094cyhC) {
            dPHYLjIT2 = LotObdBz8mZ;
            zcdgqwLPJv = Xi094cyhC;
        }
    }
    printf ("%c\n%d", dPHYLjIT2 + (317 - 252), zcdgqwLPJv);
    for (LotObdBz8mZ = (651 - 651); LotObdBz8mZ < zcdgqwLPJv; LotObdBz8mZ++)
        printf ("\n%d", Kv0J3k[dPHYLjIT2][LotObdBz8mZ]);
    return 0;
}

