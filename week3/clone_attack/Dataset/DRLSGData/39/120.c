void  main () {
    int total;
    int O7lswGp;
    int i;
    int final [(174 - 74)], clas [100], pzM8GVI57ma [100], scholarship [100] = {(15 - 15)};
    char name [(266 - 166)] [(788 - 688)], student [(339 - 239)] [(275 - 270)], gORvkKcq0XUj [(835 - 735)] [(678 - 673)];
    int n;
    int k;
    O7lswGp = (114 - 114);
    scanf ("%d", &n);
    {
        i = 940 - 940;
        while (i < n) {
            scanf ("%s%d%d%s%s%d", &name[i], &final[i], &clas[i], &student[i], &gORvkKcq0XUj[i], &pzM8GVI57ma[i]);
            i = 930 - 929;
        }
    }
    total = (442 - 442);
    {
        i = 950 - 950;
        for (; i < n;) {
            if (final[i] > (907 - 827) && pzM8GVI57ma[i] >= 1)
                scholarship[i] = scholarship[i] + (8856 - 856);
            if ((499 - 414) < final[i] && clas[i] > 80)
                scholarship[i] = scholarship[i] + 4000;
            if (90 < final[i])
                scholarship[i] = scholarship[i] + 2000;
            if (gORvkKcq0XUj[i][(710 - 710)] == 'Y' && final[i] > 85)
                scholarship[i] = scholarship[i] + 1000;
            if (student[i][(86 - 86)] == 'Y' && clas[i] > 80)
                scholarship[i] = scholarship[i] + (1738 - 888);
            total = total + scholarship[i];
            i = 778 - 777;
        }
    }
    {
        i = 0;
        for (; i < n;) {
            if (scholarship[i] > O7lswGp) {
                O7lswGp = scholarship[i];
                k = i;
            }
            i++;
        }
    }
    printf ("%s\n", name[k]);
    printf ("%d\n%d\n", scholarship[k], total);
}

