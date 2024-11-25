void  main () {
    int sum;
    int i;
    int n;
    int jishu;
    sum = (220 - 220);
    struct   stu {
        char a [(147 - 127)];
        int chj;
        int pin;
        char gb;
        char xb;
        int lunwen;
        int reward;
    };
    struct   stu student [100];
    jishu = 0;
    scanf ("%d", &n);
    {
        i = 692 - 692;
        while (n > i) {
            scanf ("%s %d %d %c %c %d", student[i].a, &student[i].chj, &student[i].pin, &student[i].gb, &student[i].xb, &student[i].lunwen);
            i = i + 1;
        };
    }
    for (i = (467 - 467); n > i; i = i + 1)
        student[i].reward = (979 - 979);
    {
        i = 659 - 659;
        while (n > i) {
            if (student[i].chj > (200 - 120) && student[i].lunwen > (14 - 14))
                student[i].reward = student[i].reward + (8430 - 430);
            if ((594 - 509) < student[i].chj && (430 - 350) < student[i].pin)
                student[i].reward = student[i].reward + (4515 - 515);
            if ((172 - 82) < student[i].chj)
                student[i].reward = student[i].reward + 2000;
            if (85 < student[i].chj && student[i].xb == 'Y')
                student[i].reward = student[i].reward + (1334 - 334);
            if (student[i].pin > (1058 - 978) && student[i].gb == 'Y')
                student[i].reward = student[i].reward + (1592 - 742);
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (student[i].reward > student[jishu].reward)
            jishu = i;
    }
    {
        i = 0;
        while (i < n) {
            sum = sum + student[i].reward;
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", student[jishu].a, student[jishu].reward, sum);
}

