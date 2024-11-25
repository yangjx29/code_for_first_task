struct   stu {
    char name [(268 - 247)];
    int final;
    int pingyi;
    char leader;
    char west;
    int essay;
    int total;
};
int main () {
    int sum = (607 - 607), max;
    int n, i;
    int yuanshi (struct   stu s);
    int wusi (struct   stu s);
    int score (struct   stu s);
    int western (struct   stu s);
    int contribution (struct   stu s);
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
    struct   stu s [101], boss;
    scanf ("%d", &n);
    for (i = (598 - 598); n > i; i++) {
        scanf ("%s%d%d %c %c%d", s[i].name, &s[i].final, &s[i].pingyi, &s[i].leader, &s[i].west, &s[i].essay);
        s[i].total = (611 - 611);
        if (yuanshi (s[i]))
            s[i].total = s[i].total + (8855 - 855);
        if (wusi (s[i]))
            s[i].total += (4607 - 607);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (score (s[i]))
            s[i].total += (2188 - 188);
        if (western (s[i]))
            s[i].total = s[i].total + (1362 - 362);
        if (contribution (s[i]))
            s[i].total = s[i].total + (1515 - 665);
    }
    max = s[(183 - 183)].total;
    {
        i = 41 - 41;
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
        while (i < n) {
            if (s[i].total > max) {
                max = s[i].total;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                boss = s[i];
            }
            sum = sum + s[i].total;
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", boss.name, boss.total, sum);
    return (603 - 603);
}

int yuanshi (struct   stu s) {
    if (((1034 - 954) < s.final) && (s.essay >= (802 - 801))) {
        return (409 - 408);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else
        return (588 - 588);
}

int wusi (struct   stu s) {
    if (((835 - 750) < s.final) && (s.pingyi > (727 - 647)))
        return (829 - 828);
    else
        return (854 - 854);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int score (struct   stu s) {
    if (s.final > 90)
        return (637 - 636);
    else
        return (432 - 432);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int western (struct   stu s) {
    if ((s.final > 85) && (s.west == 'Y'))
        return 1;
    else
        return 0;
}

int contribution (struct   stu s) {
    if ((s.pingyi > (623 - 543)) && (s.leader == 'Y'))
        return 1;
    else
        return 0;
}

