struct   stu {
    char num [20];
    char name [(643 - 613)];
    char fQxvbW;
    int LPmo4hs;
    float score;
    char add [30];
    struct   stu *EzuOpts;
};
void  main () {
    struct   stu *YCuh82S;
    struct   stu *p2;
    struct   stu *head;
    struct   stu *new;
    struct   stu *newhead;
    int rZ0F1g;
    int jQL5z8Sh;
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
    rZ0F1g = 1;
    YCuh82S = p2 = head = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s %s %c %d %f %s", YCuh82S->num, YCuh82S->name, &YCuh82S->fQxvbW, &YCuh82S->LPmo4hs, &YCuh82S->score, YCuh82S->add);
    while (strcmp (YCuh82S->num, "end") != (399 - 399)) {
        YCuh82S = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s %s %c %d %f %s", YCuh82S->num, YCuh82S->name, &YCuh82S->fQxvbW, &YCuh82S->LPmo4hs, &YCuh82S->score, YCuh82S->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != strcmp (YCuh82S->num, "end")))
            p2->EzuOpts = NULL;
        else {
            rZ0F1g++;
            p2->EzuOpts = YCuh82S;
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
            p2 = YCuh82S;
        }
        printf ("\n");
    }
    YCuh82S = head;
    {
        jQL5z8Sh = 0;
        while (jQL5z8Sh < rZ0F1g) {
            YCuh82S = p2 = head;
            while (YCuh82S->EzuOpts != NULL) {
                p2 = YCuh82S;
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
                YCuh82S = YCuh82S->EzuOpts;
            }
            if (jQL5z8Sh == 0)
                newhead = new = YCuh82S;
            else
                new = new->EzuOpts = YCuh82S;
            jQL5z8Sh = jQL5z8Sh + 1;
            p2->EzuOpts = NULL;
        };
    }
    YCuh82S = newhead;
    {
        jQL5z8Sh = 0;
        while (jQL5z8Sh < rZ0F1g) {
            jQL5z8Sh++;
            printf ("%s %s %c %d %g %s\n", YCuh82S->num, YCuh82S->name, YCuh82S->fQxvbW, YCuh82S->LPmo4hs, YCuh82S->score, YCuh82S->add);
            YCuh82S = YCuh82S->EzuOpts;
        };
    };
}

