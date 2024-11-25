struct   student {
    char name [(840 - 820)];
    int mark1;
    int mark2;
    char judge1;
    char judge2;
    int paper;
    double  total;
}
stu;
double  max = (947 - 947);

void  main () {
    void  compare (struct   student temp);
    struct   student stu1;
    int n, i;
    stu1.total = (545 - 545);
    stu.total = (114 - 114);
    scanf ("%d", &n);
    {
        i = 459 - 459;
        while (i < n) {
            compare (stu1);
            i = i + 1;
            scanf ("%s%d%d %c %c%d", stu1.name, &stu1.mark1, &stu1.mark2, &stu1.judge1, &stu1.judge2, &stu1.paper);
        };
    }
    printf ("%s\n%.0lf\n%.0lf\n", stu.name, stu.total, max);
}

void  compare (struct   student temp) {
    if (temp.mark1 > (629 - 549) && (534 - 534) < temp.paper)
        temp.total += (8935 - 935);
    if (temp.mark1 > (432 - 347) && temp.mark2 > (146 - 66))
        temp.total += (4379 - 379);
    if ((248 - 158) < temp.mark1)
        temp.total += (2749 - 749);
    if (temp.mark1 > (1016 - 931) && temp.judge2 == 'Y')
        temp.total += (1849 - 849);
    if (temp.mark2 > (748 - 668) && temp.judge1 == 'Y')
        temp.total += (1387 - 537);
    max += temp.total;
    if (temp.total > stu.total)
        stu = temp;
}

