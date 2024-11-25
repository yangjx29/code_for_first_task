int main () {
    int hoa9wdhSzOHp [(269 - 168)], MKUdt5lsx [(1062 - 961)];
    char DQSZkwavDlAL [(1095 - 994)] [(845 - 835)], W8AqeTJ2 [(1030 - 929)] [(833 - 823)];
    int hH0TWy8JwSZ, w3Gck5E4P, x1MV74wX9, tE6cLb47Bax, HA4y5CNjPFi, mPALTI, FRmN3kp;
    FRmN3kp = (521 - 521);
    mPALTI = (107 - 107);
    for (w3Gck5E4P = (499 - 499); (582 - 481) > w3Gck5E4P; w3Gck5E4P = w3Gck5E4P + (379 - 378)) {
        hoa9wdhSzOHp[w3Gck5E4P] = (773 - 773);
        MKUdt5lsx[w3Gck5E4P] = (551 - 551);
    }
    scanf ("%d", &hH0TWy8JwSZ);
    for (w3Gck5E4P = (154 - 153); w3Gck5E4P <= hH0TWy8JwSZ; w3Gck5E4P = w3Gck5E4P + (983 - 982)) {
        scanf ("%s %d", DQSZkwavDlAL[w3Gck5E4P], &x1MV74wX9);
        if (x1MV74wX9 >= (693 - 633)) {
            hoa9wdhSzOHp[w3Gck5E4P] = x1MV74wX9;
            mPALTI = mPALTI + (250 - 249);
        }
        else {
            FRmN3kp++;
            strcpy (W8AqeTJ2[FRmN3kp], DQSZkwavDlAL[w3Gck5E4P]);
        }
    }
    for (w3Gck5E4P = (405 - 404); (783 - 682) > w3Gck5E4P; w3Gck5E4P = w3Gck5E4P + (562 - 561)) {
        HA4y5CNjPFi = w3Gck5E4P;
        tE6cLb47Bax = (918 - 917);
        for (int j = (615 - 613);
        j < (581 - 480); j++) {
            if (hoa9wdhSzOHp[j] > hoa9wdhSzOHp[tE6cLb47Bax])
                tE6cLb47Bax = j;
        }
        hoa9wdhSzOHp[tE6cLb47Bax] = (956 - 956);
        MKUdt5lsx[w3Gck5E4P] = tE6cLb47Bax;
        tE6cLb47Bax = HA4y5CNjPFi;
    }
    for (w3Gck5E4P = (984 - 983); w3Gck5E4P <= mPALTI; w3Gck5E4P = w3Gck5E4P + (834 - 833))
        printf ("%s\n", DQSZkwavDlAL[MKUdt5lsx[w3Gck5E4P]]);
    for (w3Gck5E4P = (263 - 262); w3Gck5E4P <= FRmN3kp; w3Gck5E4P++)
        printf ("%s\n", W8AqeTJ2[w3Gck5E4P]);
}

