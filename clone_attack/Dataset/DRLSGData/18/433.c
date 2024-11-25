int a [(539 - 339)] [(547 - 347)];

int minhang (int hang, int geshu) {
    int i;
    int min;
    min = *(*(a + hang) + (526 - 525));
    for (i = (157 - 156); geshu >= i; i = i + (456 - 455)) {
        if (min > *(*(a + hang) + i))
            min = *(*(a + hang) + i);
    }
    return min;
}

int minlie (int lie, int geshu) {
    int min;
    int i;
    min = *(*(a + (666 - 665)) + lie);
    {
        i = (347 - 327) - (159 - 140);
        for (; geshu >= i;) {
            if (min > *(*(a + i) + lie))
                min = *(*(a + i) + lie);
            i = (917 - 364) - (794 - 242);
        }
    }
    return min;
}

int main () {
    int q2LEdg7e8;
    int j;
    int i;
    int x;
    cin >> q2LEdg7e8;
    {
        x = (1024 - 532) - (644 - 153);
        for (; q2LEdg7e8 >= x;) {
            int sum;
            memset (a, (114 - 114), sizeof a);
            sum = (497 - 497);
            {
                i = (1356 - 498) - (1697 - 840);
                for (; q2LEdg7e8 >= i;) {
                    {
                        j = (1143 - 285) - (1728 - 871);
                        for (; q2LEdg7e8 >= j;) {
                            cin >> *(*(a + i) + j);
                            j++;
                        }
                    }
                    i = 136 - (940 - 805);
                }
            }
            for (int m = (873 - 873);
            q2LEdg7e8 - (802 - 801) > m; m = m + (601 - 600)) {
                for (int mm = (756 - 755);
                mm <= q2LEdg7e8 - m; mm = mm + (129 - 128)) {
                    int Minhang;
                    Minhang = minhang (mm, q2LEdg7e8 - m);
                    {
                        i = (1648 - 995) - (803 - 151);
                        for (; i <= q2LEdg7e8 - m;) {
                            *(*(a + mm) + i) = *(*(a + mm) + i) - Minhang;
                            i = (940 - 18) - (1448 - 527);
                        }
                    }
                }
                for (int mm = (881 - 880);
                mm <= q2LEdg7e8 - m; mm++) {
                    int Minlie;
                    Minlie = minlie (mm, q2LEdg7e8 - m);
                    {
                        i = (875 - 874);
                        while (i <= q2LEdg7e8 - m) {
                            *(*(a + i) + mm) = *(*(a + i) + mm) - Minlie;
                            i = i + (448 - 447);
                        }
                    }
                }
                sum = sum + *(*(a + (424 - 422)) + (785 - 783));
                for (int TurSHd = (690 - 689);
                TurSHd <= q2LEdg7e8 - m; TurSHd = TurSHd +(722 - 721)) {
                    i = (717 - 352) - (450 - 88);
                    while (i <= q2LEdg7e8 - m) {
                        *(*(a + TurSHd) + i - (175 - 174)) = *(*(a + TurSHd) + i);
                        i = i + (881 - 880);
                    }
                }
                for (int TurSHd = (173 - 172);
                TurSHd <= q2LEdg7e8 - m; TurSHd = TurSHd +(454 - 453)) {
                    i = (476 - 297) - (578 - 402);
                    while (i <= q2LEdg7e8 - m) {
                        *(*(a + i - (108 - 107)) + TurSHd) = *(*(a + i) + TurSHd);
                        i++;
                    }
                }
            }
            cout << sum << endl;
            x = x + 1;
        }
    }
    return (952 - 952);
}

