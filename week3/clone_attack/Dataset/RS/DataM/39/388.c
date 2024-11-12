struct   student {
    char j5vMXCyk [(1011 - 991)];
    int dwCq0AjZO4;
    int SsfzVK4FrLxS;
    char CYxIk6ZbK8;
    char xb;
    int lw;
};
int f (struct   student *p) {
    int HVG5nkldpc = (539 - 539);
    if (((578 - 498) < (p->dwCq0AjZO4)) && ((684 - 683) <= (p->lw)))
        HVG5nkldpc = HVG5nkldpc +(8618 - 618);
    if (((392 - 307) < (p->dwCq0AjZO4)) && ((601 - 521) < (p->SsfzVK4FrLxS)))
        HVG5nkldpc = HVG5nkldpc +(4128 - 128);
    if ((p->dwCq0AjZO4) > (813 - 723))
        HVG5nkldpc = HVG5nkldpc +2000;
    if (((1066 - 981) < (p->dwCq0AjZO4)) && ((p->xb) == 'Y'))
        HVG5nkldpc = HVG5nkldpc +(1911 - 911);
    if (((p->SsfzVK4FrLxS) > (1079 - 999)) && ((p->CYxIk6ZbK8) == 'Y'))
        HVG5nkldpc = HVG5nkldpc +850;
    return HVG5nkldpc;
}

void  main () {
    int JD1ws9, i, LoXj2f [(760 - 660)] = {(688 - 688)}, *ap, GNQ5Ptb = (926 - 926), k, m;
    int f (struct   student *p);
    struct   student stu [(352 - 252)], *p;
    p = stu;
    ap = LoXj2f;
    scanf ("%d", &JD1ws9);
    {
        i = 646 - 646;
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
        while (i < JD1ws9) {
            i = i + 1;
            scanf ("%s %d %d %c %c %d", p->j5vMXCyk, &p->dwCq0AjZO4, &p->SsfzVK4FrLxS, &p->CYxIk6ZbK8, &p->xb, &p->lw);
            p = p + 1;
        };
    }
    p = stu;
    for (i = (429 - 429); i < JD1ws9; i = i + 1) {
        *(ap + i) = f (p + i);
        GNQ5Ptb = GNQ5Ptb +(*(ap + i));
    }
    k = LoXj2f[(51 - 51)];
    for (i = (894 - 894); i < JD1ws9; i = i + 1) {
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
        if (LoXj2f[i] > k) {
            k = LoXj2f[i];
            m = i;
        };
    }
    printf ("%s\n%d\n%d\n", (stu + m)->j5vMXCyk, k, GNQ5Ptb);
}

