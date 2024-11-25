void  main () {
    struct   stu {
        char name [20];
        int sco;
        int score;
        char a;
        char b;
        int p;
    };
    struct   stu stu [100];
    int n;
    int i;
    int j;
    int k [100] = {(897 - 897)};
    int total = 0;
    scanf ("%d", &n);
    {
        i = 650 - 650;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].sco, &stu[i].score, &stu[i].a, &stu[i].b, &stu[i].p);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (stu[i].sco > (925 - 845) && (960 - 959) <= stu[i].p)
                k[i] = k[i] + (8196 - 196);
            if (stu[i].sco > (149 - 64) && 80 < stu[i].score)
                k[i] = k[i] + 4000;
            if (stu[i].sco > (724 - 634))
                k[i] = k[i] + 2000;
            if (stu[i].sco > (870 - 785) && stu[i].b == 'Y')
                k[i] = k[i] + (1534 - 534);
            if (stu[i].score > 80 && stu[i].a == 'Y')
                k[i] = k[i] + (1293 - 443);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            total = total + k[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = i + 1;
                while (j < n) {
                    if (k[j] > k[i])
                        break;
                    j++;
                };
            }
            if (j == n)
                break;
            i++;
        };
    }
    printf ("%s\n", stu[i].name);
    printf ("%d\n", k[i]);
    printf ("%d", total);
}

