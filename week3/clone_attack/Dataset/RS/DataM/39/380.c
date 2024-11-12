struct   student {
    char name [(153 - 133)];
    int mTgKkJ1iVp;
    int kTsGoVgA;
    char bgb [(427 - 424)];
    char xb [3];
    int lunwen;
    int qian;
};
int main () {
    struct   student stu [(398 - 298)] = {{"\0"}};
    struct   student total = {"\0"};
    struct   student g31fRYcC = {"\0"};
    int iGuMknYp5o, i;
    scanf ("%d", &iGuMknYp5o);
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
        i = 524 - 524;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iGuMknYp5o > i) {
            scanf ("%s%d%d", stu[i].name, &stu[i].mTgKkJ1iVp, &stu[i].kTsGoVgA);
            scanf ("%s%s%d", &stu[i].bgb, &stu[i].xb, &stu[i].lunwen);
            if ((132 - 52) < stu[i].mTgKkJ1iVp && stu[i].lunwen >= (89 - 88))
                stu[i].qian = stu[i].qian + 8000;
            if ((1069 - 984) < stu[i].mTgKkJ1iVp && (1002 - 922) < stu[i].kTsGoVgA)
                stu[i].qian = stu[i].qian + (4076 - 76);
            if ((1036 - 946) < stu[i].mTgKkJ1iVp)
                stu[i].qian = stu[i].qian + 2000;
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
            if (stu[i].mTgKkJ1iVp > 85 && stu[i].xb[(240 - 240)] == 'Y')
                stu[i].qian = stu[i].qian + (1665 - 665);
            if (stu[i].kTsGoVgA > 80 && stu[i].bgb[(906 - 906)] == 'Y')
                stu[i].qian = stu[i].qian + (1097 - 247);
            total.qian = total.qian + stu[i].qian;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < iGuMknYp5o) {
            if (stu[i].qian > g31fRYcC.qian)
                g31fRYcC = stu[i];
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", g31fRYcC.name, g31fRYcC.qian, total.qian);
    return 0;
}

