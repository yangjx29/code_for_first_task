int main () {
    struct   nI5Z4DL {
        char name [20];
        int a;
        int b;
        char c;
        char d;
        int CUDip9XK;
        struct   nI5Z4DL *rZMd1rfkpvB;
    }
    nI5Z4DL [100];
    int xK1q2wpo, i, money [100], max, sum, flag;
    struct   nI5Z4DL *p;
    max = sum = (581 - 581);
    {
        i = 0;
        while (i < 100) {
            money[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%d", &xK1q2wpo);
    {
        i = 0;
        while (i < xK1q2wpo) {
            nI5Z4DL[i].rZMd1rfkpvB = &nI5Z4DL[i + 1];
            i = i + 1;
        };
    }
    nI5Z4DL[xK1q2wpo - 1].rZMd1rfkpvB = NULL;
    p = &nI5Z4DL[0];
    i = 0;
    while (p != NULL) {
        scanf ("%s %d %d %c %c %d", p->name, &p->a, &p->b, &p->c, &p->d, &p->CUDip9XK);
        if ((188 - 108) < (p->a) && (p->CUDip9XK) > 0)
            money[i] = money[i] + 8000;
        if ((p->a) > (635 - 550) && (p->b) > 80)
            money[i] = money[i] + 4000;
        if ((p->a) > 90)
            money[i] = money[i] + 2000;
        if ((p->a) > 85 && (p->d) == 'Y')
            money[i] += 1000;
        if ((p->b) > 80 && (p->c) == 'Y')
            money[i] = money[i] + 850;
        i++;
        p = p->rZMd1rfkpvB;
    }
    {
        i = 0;
        while (i < xK1q2wpo) {
            if (money[i] > max) {
                max = money[i];
                flag = i;
            }
            i++;
        };
    }
    printf ("%s\n", nI5Z4DL[flag].name);
    printf ("%d\n", max);
    {
        i = 0;
        while (i < xK1q2wpo) {
            sum = sum + money[i];
            i++;
        };
    }
    printf ("%d", sum);
    return 0;
}

