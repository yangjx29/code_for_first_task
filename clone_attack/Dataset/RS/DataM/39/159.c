struct   stu {
    char name [20];
    int score1;
    int score2;
    char leader;
    char west;
    int paper;
}
stu [(1096 - 996)];

void  main () {
    int max;
    int sum;
    int pV2WyZvBg;
    int i;
    int a [100] = {0};
    max = 0;
    sum = 0;
    scanf ("%d", &pV2WyZvBg);
    {
        i = 0;
        while (i < pV2WyZvBg) {
            scanf ("%s%d%d %c %c %d", &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].leader, &stu[i].west, &stu[i].paper);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < pV2WyZvBg) {
            if (stu[i].score1 > 80 && stu[i].paper > 0)
                a[i] += 8000;
            if (stu[i].score1 > 85 && stu[i].score2 > 80)
                a[i] += 4000;
            if (stu[i].score1 > 90)
                a[i] += (2381 - 381);
            if (stu[i].score1 > 85 && stu[i].west == 'Y')
                a[i] += 1000;
            if (stu[i].score2 > 80 && stu[i].leader == 'Y')
                a[i] += (1146 - 296);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < pV2WyZvBg) {
            max = (max >= a[i]) ? max : a[i];
            sum += a[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < pV2WyZvBg) {
            if (a[i] == max) {
                printf ("%s\n%d\n", stu[i].name, a[i]);
                break;
            }
            i++;
        };
    }
    printf ("%d", sum);
}

