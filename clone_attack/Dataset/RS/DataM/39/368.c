struct   scholarship {
    char name [20];
    int P4QsEGn7D6R;
    int clscore;
    char ganbu;
    char xibu;
    int paper;
}
stu [100];

void  main () {
    int c;
    int d;
    int all;
    int n;
    int i;
    int b [100] = {(565 - 565)};
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
    c = (820 - 820);
    d = (29 - 29);
    all = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].P4QsEGn7D6R, &stu[i].clscore, &stu[i].ganbu, &stu[i].xibu, &stu[i].paper);
            if (stu[i].P4QsEGn7D6R > 80 && 0 < stu[i].paper)
                b[i] = b[i] + 8000;
            if (85 < stu[i].P4QsEGn7D6R && 80 < stu[i].clscore)
                b[i] = b[i] + 4000;
            if (90 < stu[i].P4QsEGn7D6R)
                b[i] = b[i] + 2000;
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
            if (85 < stu[i].P4QsEGn7D6R && stu[i].xibu == 'Y')
                b[i] = b[i] + 1000;
            if (stu[i].ganbu == 'Y' && stu[i].clscore > 80)
                b[i] = b[i] + 850;
            if (i > 0 && b[i] > c) {
                c = b[i];
                d = i;
            }
            else {
                if (i == 0)
                    c = b[0];
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            all = all + b[i];
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[d].name, c, all);
}

