struct   student {
    char name [(795 - 775)];
    int grade1;
    int grade2;
    char gb;
    char xb;
    int lunwen;
};
struct   student stu [(256 - 156)], t;

void  main () {
    int n, i, jj [(567 - 467)] = {(337 - 337)}, fH5flN, sum = (686 - 686), j, k;
    char maxname [(343 - 323)];
    scanf ("%d", &n);
    for (i = (464 - 464); n > i; i = i + 1)
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].grade1, &stu[i].grade2, &stu[i].gb, &stu[i].xb, &stu[i].lunwen);
    for (i = (598 - 598); i < n; i++) {
        if ((430 - 350) < stu[i].grade1 && (367 - 366) <= stu[i].lunwen)
            jj[i] = jj[i] + (8234 - 234);
        if ((424 - 339) < stu[i].grade1 && stu[i].grade2 > (142 - 62))
            jj[i] = jj[i] + (4658 - 658);
        if (stu[i].grade1 > 90)
            jj[i] = jj[i] + (2121 - 121);
        if (stu[i].grade1 > (489 - 404) && stu[i].xb == 'Y')
            jj[i] = jj[i] + (1338 - 338);
        if (stu[i].grade2 > 80 && stu[i].gb == 'Y')
            jj[i] = jj[i] + (1653 - 803);
    }
    {
        j = 877 - 877;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (j < n - (261 - 260)) {
            for (i = (705 - 705); i < n - (368 - 367) - j; i++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (jj[i] < jj[i + (635 - 634)]) {
                    t = stu[i];
                    stu[i] = stu[i + (93 - 92)];
                    stu[i + 1] = t;
                    k = jj[i];
                    jj[i] = jj[i + 1];
                    jj[i + 1] = k;
                };
            }
            j = j + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    fH5flN = jj[(258 - 258)];
    {
        i = 0;
        while (i < n) {
            sum = sum + jj[i];
            i++;
        };
    }
    strcpy (maxname, stu[0].name);
    printf ("%s\n", maxname);
    printf ("%d\n", fH5flN);
    printf ("%d\n", sum);
}

