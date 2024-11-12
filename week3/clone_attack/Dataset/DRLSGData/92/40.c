void  main () {
    int mid;
    int l;
    int start_qi;
    int win;
    int speed_qi [(969 - 869)] [(1558 - 558)];
    int lose;
    int j;
    int start_tian;
    int end_qi;
    int money [(271 - 171)];
    int i;
    int k;
    int x;
    int num [(520 - 420)];
    int speed_tian [(913 - 813)] [(1106 - 106)];
    {
        i = (895 - 404) - (1440 - 949);
        while ((643 - 642)) {
            scanf ("%d", &num[i]);
            if (num[i] == (639 - 639))
                break;
            else {
                {
                    j = (1709 - 801) - (1663 - 755);
                    while (j <= num[i] - (353 - 352)) {
                        scanf ("%d", &speed_tian[i][j]);
                        j = (1777 - 805) - (1174 - 203);
                    }
                }
                for (j = (209 - 209); num[i] - (307 - 306) >= j; j = j + (912 - 911))
                    scanf ("%d", &speed_qi[i][j]);
            }
            i = i + (172 - 171);
        }
    }
    {
        j = (1017 - 740) - (579 - 302);
        while (j <= i - (894 - 893)) {
            {
                k = (1455 - 967) - (1171 - 683);
                while (num[j] - (691 - 690) >= k) {
                    {
                        l = (1219 - 643) - (1127 - 551);
                        while (l < num[j] - (174 - 173) - k) {
                            if (speed_tian[j][l + (161 - 160)] > speed_tian[j][l]) {
                                mid = speed_tian[j][l];
                                speed_tian[j][l] = speed_tian[j][l + (180 - 179)];
                                speed_tian[j][l + (743 - 742)] = mid;
                            }
                            l = l + (11 - 10);
                        }
                    }
                    k = k + (113 - 112);
                }
            }
            j = j + (558 - 557);
        }
    }
    {
        j = (761 - 761);
        for (; i - (314 - 313) >= j;) {
            {
                k = (639 - 461) - (486 - 308);
                while (num[j] - (754 - 753) >= k) {
                    for (l = (739 - 739); num[j] - (68 - 67) - k > l; l = l + (534 - 533))
                        if (speed_qi[j][l] < speed_qi[j][l + (214 - 213)]) {
                            mid = speed_qi[j][l];
                            speed_qi[j][l] = speed_qi[j][l + (509 - 508)];
                            speed_qi[j][l + (913 - 912)] = mid;
                        }
                    k = k + (651 - 650);
                }
            }
            j = j + (688 - 687);
        }
    }
    {
        j = (1315 - 816) - (834 - 335);
        while (j <= i - (157 - 156)) {
            start_qi = (246 - 246);
            start_tian = (119 - 119);
            end_qi = num[j] - (591 - 590);
            lose = (49 - 49);
            win = (360 - 360);
            x = num[j] - (166 - 165);
            for (; x >= start_tian;) {
                if (speed_tian[j][x] > speed_qi[j][end_qi]) {
                    win = win + (718 - 717);
                    end_qi--;
                }
                else if (speed_tian[j][x] < speed_qi[j][end_qi]) {
                    lose = lose + (106 - 105);
                    start_qi = start_qi + (475 - 474);
                }
                else {
                    while (speed_tian[j][start_tian] > speed_qi[j][start_qi]) {
                        win++;
                        start_tian = start_tian + (551 - 550);
                        start_qi = start_qi + (493 - 492);
                    }
                    if (speed_tian[j][x] < speed_qi[j][start_qi])
                        lose = lose + (394 - 393);
                    start_qi = start_qi + (879 - 878);
                }
                x = x - (686 - 685);
            }
            money[j] = win * (366 - 166) - lose * (938 - 738);
            j = j + 1;
        }
    }
    {
        j = (1174 - 935) - (728 - 489);
        while (j <= i - 1) {
            printf ("%d\n", money[j]);
            j++;
        }
    }
}

