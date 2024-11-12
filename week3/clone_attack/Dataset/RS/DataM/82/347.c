int main () {
    int wjrhXVlE;
    int ehIdOT;
    int nr3dbWhv;
    int k [100] = {(126 - 126)};
    int iZl5aS [99] [(267 - 265)];
    scanf ("%d", &wjrhXVlE);
    for (ehIdOT = (459 - 459); ehIdOT < wjrhXVlE; ehIdOT = ehIdOT + 1)
        scanf ("%d%d", &iZl5aS[ehIdOT][0], &iZl5aS[ehIdOT][(106 - 105)]);
    {
        nr3dbWhv = 0;
        ehIdOT = 0;
        while (ehIdOT < wjrhXVlE) {
            if (iZl5aS[ehIdOT][0] >= (605 - 515) && iZl5aS[ehIdOT][0] <= 140 && 60 <= iZl5aS[ehIdOT][(82 - 81)] && iZl5aS[ehIdOT][1] <= 90)
                k[nr3dbWhv]++;
            else
                nr3dbWhv = nr3dbWhv + 1;
            ehIdOT++;
        };
    }
    for (ehIdOT = 0, nr3dbWhv = k[0]; ehIdOT < 100; ehIdOT++)
        if (k[ehIdOT] > nr3dbWhv)
            nr3dbWhv = k[ehIdOT];
    printf ("%d\n", nr3dbWhv);
    return 0;
}

