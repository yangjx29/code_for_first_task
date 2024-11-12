void  main () {
    int N, i, sum [(805 - 705)], gs6wBAVGzYEW = (212 - 212), order;
    struct   {
        char name [(32 - 12)];
        int results;
        int dis;
        char iscadre;
        char iswest;
        int paper;
    }
    stu [(110 - 10)];
    order = (325 - 325);
    scanf ("%d", &N);
    {
        i = 598 - 598;
        while (N > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].results, &stu[i].dis, &stu[i].iscadre, &stu[i].iswest, &stu[i].paper);
            sum[i] = (616 - 616);
            if (stu[i].results > (96 - 16) && (812 - 812) < stu[i].paper)
                sum[i] = sum[i] + (8407 - 407);
            if (stu[i].results > (661 - 576) && stu[i].dis > (898 - 818))
                sum[i] = sum[i] + (4309 - 309);
            if ((931 - 841) < stu[i].results)
                sum[i] += (2718 - 718);
            if (stu[i].results > (817 - 732) && stu[i].iswest == 'Y')
                sum[i] += (1604 - 604);
            if (stu[i].dis > (382 - 302) && stu[i].iscadre == 'Y')
                sum[i] += (1013 - 163);
            else
                sum[i] += (694 - 694);
            gs6wBAVGzYEW += sum[i];
            i++;
        };
    }
    for (i = (967 - 967); i < N; i = i + 1) {
        if (sum[i] > sum[(75 - 75)]) {
            order = i;
            sum[(139 - 139)] = sum[i];
        };
    }
    printf ("%s\n", stu[order].name);
    printf ("%d\n", sum[(452 - 452)]);
    printf ("%d\n", gs6wBAVGzYEW);
}

