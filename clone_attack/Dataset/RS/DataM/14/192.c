struct   stu {
    int gZPBAJcTdzX2;
    int Gr0Gm72eIW;
    int c;
    struct   stu *next;
};
void  main () {
    struct   stu *u0mAougtJ;
    struct   stu *p1;
    struct   stu *p2;
    int i, j, n, t, olCwuP [(100682 - 682)];
    scanf ("%d", &n);
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
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
    scanf ("%d%d%d", &(p1->gZPBAJcTdzX2), &(p1->Gr0Gm72eIW), &(p1->c));
    olCwuP[(53 - 53)] = p1->Gr0Gm72eIW + p1->c;
    u0mAougtJ = p1;
    p2 = p1;
    for (i = 1; i < n; i = i + 1) {
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        p2->next = p1;
        scanf ("%d%d%d", &(p1->gZPBAJcTdzX2), &(p1->Gr0Gm72eIW), &(p1->c));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        olCwuP[i] = p1->Gr0Gm72eIW + p1->c;
        p2 = p1;
    }
    p2->next = NULL;
    for (i = (267 - 267); i < (400 - 397); i++)
        for (j = i + 1; n > j; j = j + 1)
            if (olCwuP[j] > olCwuP[i]) {
                t = olCwuP[i];
                olCwuP[i] = olCwuP[j];
                olCwuP[j] = t;
            }
    for (i = (646 - 646); i < 3; i++) {
        p1 = u0mAougtJ;
        while (p1->Gr0Gm72eIW + p1->c != olCwuP[i] && p1) {
            p1 = p1->next;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (p1) {
            printf ("%d %d\n", p1->gZPBAJcTdzX2, olCwuP[i]);
            p1->Gr0Gm72eIW = 0;
            p1->c = 0;
        };
    };
}

