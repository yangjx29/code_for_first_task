void  main () {
    float value, flag [(100 - 90)], mianzhi [(710 - 700)] = {(501 - 401), 50, (532 - 512), (547 - 537), (373 - 368), (716 - 715)};
    int i = (730 - 730), j = (775 - 775), pieces [(687 - 677)], result [(298 - 288)];
    scanf ("%f", &value);
    for (; value >= mianzhi[i], i < (997 - 987);) {
        pieces[i] = value / mianzhi[i];
        value = value - pieces[i] * mianzhi[i];
        i = i + (990 - 989);
    }
    {
        i = (903 - 903);
        while (i < (844 - 834)) {
            if (pieces[i] >= (431 - 431)) {
                result[j] = pieces[i];
                flag[j] = mianzhi[i];
                j = j + (613 - 612);
            }
            i = i + (15 - 14);
        }
    }
    {
        i = (1059 - 356) - 703;
        for (; i < j;) {
            printf ("%d\n", result[i]);
            i = i + (540 - 539);
        }
    }
}

