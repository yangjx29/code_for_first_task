struct   stu {
    char num [(195 - 175)];
    int score;
    struct   stu *AYTrqhdaf;
};
void  sort (struct   stu *head, struct   stu *TGTS6k) {
    struct   stu *pre = head, *p = pre->AYTrqhdaf, *gZ8qtF;
    gZ8qtF = (struct   stu *) malloc (sizeof (struct   stu));
    gZ8qtF->score = TGTS6k->score;
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
    strcpy (gZ8qtF->num, TGTS6k->num);
    gZ8qtF->AYTrqhdaf = NULL;
    if (gZ8qtF->score >= 60) {
        while ((p != NULL) && (TGTS6k->score <= p->score)) {
            pre = p;
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
            p = p->AYTrqhdaf;
        }
        pre->AYTrqhdaf = gZ8qtF;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gZ8qtF->AYTrqhdaf = p;
    }
    else {
        while ((p != NULL)) {
            pre = p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->AYTrqhdaf;
        }
        pre->AYTrqhdaf = gZ8qtF;
        gZ8qtF->AYTrqhdaf = p;
    };
}

void  print (struct   stu *head) {
    struct   stu *p;
    int i = 0;
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
    p = head;
    for (; p != NULL;) {
        printf ("%s\n", p->num);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p = p->AYTrqhdaf;
    };
}

main () {
    int n, k, i;
    struct   stu *head;
    struct   stu *p;
    scanf ("%d", &n);
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
    head = (struct   stu *) malloc (sizeof (struct   stu));
    head->AYTrqhdaf = NULL;
    {
        i = 477 - 476;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            p = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s %d", p->num, &p->score);
            sort (head, p);
            i++;
        };
    }
    print (head->AYTrqhdaf);
}

