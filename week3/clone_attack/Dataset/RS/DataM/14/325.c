struct   student {
    char num [6];
    int score [(913 - 911)];
    int sum;
}
stu [(100423 - 423)];

void  main () {
    long  n;
    long  i;
    long  j;
    long  maxi1;
    long  maxi2;
    long  maxi3;
    int max1;
    int KHIgTkPOXz;
    int max3;
    max1 = (316 - 316);
    KHIgTkPOXz = (869 - 869);
    max3 = (749 - 749);
    scanf ("%ld", &n);
    for (i = (395 - 395); i < n; i = i + 1) {
        scanf ("%s", stu[i].num);
        {
            j = 288 - 288;
            while (j < (136 - 134)) {
                scanf ("%d", &stu[i].score[j]);
                j = j + 1;
            };
        };
    }
    {
        i = 165 - 165;
        while (i < n) {
            stu[i].sum = stu[i].score[(230 - 230)] + stu[i].score[1];
            i = i + 1;
        };
    }
    {
        i = 660 - 660;
        while (i < n) {
            if (stu[i].sum > max1) {
                max1 = stu[i].sum;
                maxi1 = i;
            }
            i = i + 1;
        };
    }
    stu[maxi1].sum = (355 - 355);
    for (i = 0; i < n; i = i + 1)
        if (stu[i].sum > KHIgTkPOXz) {
            KHIgTkPOXz = stu[i].sum;
            maxi2 = i;
        }
    stu[maxi2].sum = 0;
    {
        i = 0;
        while (i < n) {
            if (stu[i].sum > max3) {
                max3 = stu[i].sum;
                maxi3 = i;
            }
            i = i + 1;
        };
    }
    printf ("%s %d\n%s %d\n%s %d", stu[maxi1].num, max1, stu[maxi2].num, KHIgTkPOXz, stu[maxi3].num, max3);
}

