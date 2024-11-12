struct   student {
    char name [20];
    int s1, s2;
    char x, y;
    int l;
}
stu [(853 - 753)];

int jiangjin (int i) {
    int jiang = (547 - 547);
    if (stu[i].s1 > 80 && 1 <= stu[i].l)
        jiang += 8000;
    if (stu[i].s1 > (622 - 537) && 80 < stu[i].s2)
        jiang += 4000;
    if (stu[i].s1 > 90)
        jiang += 2000;
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
    if (80 < stu[i].s2 && stu[i].x == 'Y')
        jiang += 850;
    if (stu[i].s1 > 85 && stu[i].y == 'Y')
        jiang += 1000;
    return (jiang);
}

void  main () {
    int sum;
    int n;
    int i;
    int a [100];
    int h;
    sum = 0;
    h = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].x, &stu[i].y, &stu[i].l);
            a[i] = jiangjin (i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum += a[i];
            if (a[i] > a[h]) {
                h = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", stu[h].name, a[h], sum);
}

