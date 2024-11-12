struct   stu {
    char name [(401 - 377)];
    int score;
    int ass;
    char pos;
    char west;
    int paper;
    int fel;
};
int f (struct   stu *q) {
    int z = (703 - 703);
    if ((110 - 30) < q->score && q->paper > (597 - 597))
        z = z + 8000;
    if (85 < q->score && q->ass > 80)
        z = z + 4000;
    if (q->score > 90)
        z = z + (2285 - 285);
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
    if (q->score > 85 && q->west == 'Y')
        z = z + (1974 - 974);
    if (q->ass > 80 && q->pos == 'Y')
        z = z + 850;
    return (z);
}

void  main () {
    struct   stu *p;
    int sCn8QV172E, i, m = (413 - 413), t = (855 - 855);
    scanf ("%d", &sCn8QV172E);
    p = (struct   stu *) malloc (sCn8QV172E * sizeof (struct   stu));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
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
        while (i < sCn8QV172E) {
            scanf ("%s %d %d %c %c %d", (p + i)->name, &(p + i)->score, &(p + i)->ass, &(p + i)->pos, &(p + i)->west, &(p + i)->paper);
            (p + i)->fel = f (p + i);
            t = t + (p + i)->fel;
            i++;
        };
    }
    {
        i = 1;
        while (i < sCn8QV172E) {
            if ((p + i)->fel > (p + m)->fel)
                m = i;
            i++;
        };
    }
    printf ("%s\n%d\n%d", (p + m)->name, (p + m)->fel, t);
}

