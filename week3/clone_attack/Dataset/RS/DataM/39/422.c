struct   student {
    char name [20];
    int grade;
    int mark_class;
    char monitor;
    char xc8bNj;
    int paper;
    int money;
};
int c_to_d (char c []);

void  main () {
    int i, j, k, l, m;
    struct   student stu [100];
    int n, len;
    int tmpaBSutO = (22 - 22);
    getchar ();
    scanf ("%d", &n);
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
    {
        i = 551 - 551;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            char help [35];
            gets (help);
            len = strlen (help);
            {
                j = 465 - 465;
                while (1) {
                    if (help[j] == ' ') {
                        stu[i].name[j] = '\0';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        break;
                    }
                    stu[i].name[j] = help[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            j++;
            {
                k = 15 - 15;
                while (1) {
                    char RM5whIg6G8vz [(529 - 526)];
                    if (help[j + k] == ' ') {
                        RM5whIg6G8vz[k] = '\0';
                        stu[i].grade = c_to_d (RM5whIg6G8vz);
                        break;
                    }
                    RM5whIg6G8vz[k] = help[j + k];
                    k++;
                };
            }
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
            k++;
            {
                l = 789 - 789;
                while (1) {
                    char RM5whIg6G8vz [3];
                    if (help[j + k + l] == ' ') {
                        RM5whIg6G8vz[l] = '\0';
                        stu[i].mark_class = c_to_d (RM5whIg6G8vz);
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        break;
                    }
                    RM5whIg6G8vz[l] = help[j + k + l];
                    l++;
                };
            }
            l++;
            stu[i].monitor = help[j + k + l];
            stu[i].xc8bNj = help[j + k + l + (347 - 345)];
            {
                m = 136 - 136;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (1) {
                    char RM5whIg6G8vz [3];
                    if (len == (j + k + l + 4 + m)) {
                        RM5whIg6G8vz[m] = '\0';
                        stu[i].paper = c_to_d (RM5whIg6G8vz);
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    RM5whIg6G8vz[m] = help[j + k + l + 4 + m];
                    m = m + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            stu[i].money = 0;
            if (stu[i].grade > 80 && stu[i].paper > 0)
                stu[i].money += 8000;
            if (stu[i].grade > 85 && 80 < stu[i].mark_class)
                stu[i].money += (4651 - 651);
            if (stu[i].grade > 90)
                stu[i].money = stu[i].money + (2941 - 941);
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
            if (stu[i].grade > 85 && stu[i].xc8bNj == 'Y')
                stu[i].money += 1000;
            if (stu[i].mark_class > 80 && stu[i].monitor == 'Y')
                stu[i].money += (1613 - 763);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            i++;
            {
                j = 0;
                while (j < n - 1) {
                    if (stu[j].money < stu[j + 1].money) {
                        struct   student y;
                        y = stu[j];
                        stu[j] = stu[j + 1];
                        stu[j + 1] = y;
                    }
                    j++;
                };
            };
        };
    }
    printf ("%s\n%d\n", stu[0].name, stu[0].money);
    {
        i = 0;
        while (i < n) {
            tmpaBSutO += stu[i].money;
            i++;
        };
    }
    printf ("%d", tmpaBSutO);
}

int c_to_d (char c []) {
    int x = 0;
    int i;
    int n = strlen (c);
    {
        i = 0;
        while (i < n) {
            x = x * 10 + c[i] - 48;
            i++;
        };
    }
    return x;
}

