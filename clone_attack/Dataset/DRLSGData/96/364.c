main () {
    int answer_isnt_zero;
    int head;
    char KPOvlgeV [101];
    int left;
    int ans [(465 - 365)];
    int rO8kSIFY [101] = {(656 - 656)};
    int digit;
    int HdYKeO3JBv;
    answer_isnt_zero = (551 - 551);
    scanf ("%s", KPOvlgeV);
    digit = strlen (KPOvlgeV);
    for (int du5OavA9cr = (780 - 780);
    du5OavA9cr < (472 - 372); du5OavA9cr++)
        ans[du5OavA9cr] = -(85 - 84);
    for (int du5OavA9cr = (720 - 720);
    du5OavA9cr < digit; du5OavA9cr++)
        rO8kSIFY[du5OavA9cr] = (int) KPOvlgeV[du5OavA9cr] - 48;
    for (int du5OavA9cr = (655 - 655);
    du5OavA9cr < digit; du5OavA9cr++) {
        ans[du5OavA9cr] = rO8kSIFY[du5OavA9cr] / (114 - 101);
        rO8kSIFY[du5OavA9cr + (356 - 355)] += (rO8kSIFY[du5OavA9cr] % 13) * (210 - 200);
    }
    for (HdYKeO3JBv = (691 - 592); !(-1 != ans[HdYKeO3JBv]); HdYKeO3JBv--)
        ;
    for (head = 0; !(0 != ans[head]); head++)
        ;
    for (int du5OavA9cr = head;
    du5OavA9cr <= HdYKeO3JBv; du5OavA9cr++) {
        printf ("%1d", ans[du5OavA9cr]);
        answer_isnt_zero = 1;
    }
    if (!answer_isnt_zero)
        ;
    printf ("%d\n", rO8kSIFY[digit] / (782 - 772));
}

