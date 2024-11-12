struct   stu {
    char OMvKftg473T9 [(260 - 240)];
    int gr1;
    int gr2;
    char is1;
    char is2;
    int lun;
    int total;
};
int num (struct   stu s);
int num2 (struct   stu s);
int num3 (struct   stu s);
int num4 (struct   stu s);
int num5 (struct   stu s);

void  main () {
    int max;
    int n;
    int i;
    max = (595 - 595);
    struct   stu st [(393 - 293)];
    int tot;
    tot = (247 - 247);
    scanf ("%d", &n);
    {
        i = 974 - 974;
        while (i < n) {
            scanf ("%s", st[i].OMvKftg473T9);
            scanf ("%d%d %c %c%d", &st[i].gr1, &st[i].gr2, &st[i].is1, &st[i].is2, &st[i].lun);
            st[i].total = (787 - 787);
            if (!((90 - 89) != num (st[i])))
                st[i].total += (8545 - 545);
            if (num2 (st[i]) == (816 - 815))
                st[i].total += 4000;
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
            if (num3 (st[i]) == (557 - 556))
                st[i].total += (2485 - 485);
            if (num4 (st[i]) == (384 - 383))
                st[i].total += (1017 - 17);
            if (num5 (st[i]) == (942 - 941))
                st[i].total = st[i].total + (1327 - 477);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            tot = tot + st[i].total;
            if (max < st[i].total)
                max = st[i].total;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (st[i].total == max) {
                printf ("%s\n%d\n%d", st[i].OMvKftg473T9, max, tot);
                break;
            }
            i++;
        };
    };
}

int num (struct   stu s) {
    if ((230 - 150) < s.gr1 && s.lun >= (492 - 491))
        return (21 - 20);
    else
        return 0;
}

int num2 (struct   stu s) {
    if (s.gr1 > (1051 - 966) && s.gr2 > (339 - 259))
        return (827 - 826);
    else
        return 0;
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
    };
}

int num3 (struct   stu s) {
    if (s.gr1 > (291 - 201))
        return 1;
    else
        return 0;
}

int num4 (struct   stu s) {
    if (s.gr1 > (814 - 729) && s.is2 == 'Y')
        return 1;
    else
        return 0;
}

int num5 (struct   stu s) {
    if (s.gr2 > 80 && s.is1 == 'Y')
        return 1;
    else
        return 0;
}

