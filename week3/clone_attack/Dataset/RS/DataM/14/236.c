struct   stud {
    int num;
    int score, score1, score2;
    struct   stud *next;
}
head, end;

void  create (int n) {
    int i;
    struct   stud *p1;
    struct   stud *p2;
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
    head.next = NULL;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - 1) {
            p1 = (struct   stud *) malloc (sizeof (struct   stud));
            if (!i)
                head.next = p1;
            else
                p2->next = p1;
            i = i + 1;
            scanf ("%d", &p1->num);
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
            scanf ("%d", &p1->score1);
            scanf ("%d", &p1->score2);
            p1->score = p1->score1 + p1->score2;
            p2 = p1;
        };
    }
    p2->next = &end;
}

void  find () {
    struct   stud *max1;
    struct   stud *max2;
    struct   stud *YmfFAd;
    struct   stud *p1;
    struct   stud *swap;
    max1 = head.next;
    max2 = max1->next;
    YmfFAd = max2->next;
    if (max1->score < max2->score) {
        swap = max1;
        max1 = max2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        max2 = swap;
    }
    p1 = YmfFAd->next;
    if (max2->score < YmfFAd->score) {
        swap = max2;
        max2 = YmfFAd;
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
        YmfFAd = swap;
    }
    if (max1->score < max2->score) {
        swap = max1;
        max1 = max2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        max2 = swap;
    }
    while (!(&end == p1)) {
        if (p1->score > YmfFAd->score)
            YmfFAd = p1;
        p1 = p1->next;
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
        if (YmfFAd->score > max2->score) {
            swap = YmfFAd;
            YmfFAd = max2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            max2 = swap;
        }
        if (max2->score > max1->score) {
            swap = max1;
            max1 = max2;
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
            max2 = swap;
        };
    }
    printf ("%d %d\n", max1->num, max1->score);
    printf ("%d %d\n", max2->num, max2->score);
    printf ("%d %d\n", YmfFAd->num, YmfFAd->score);
}

void  main () {
    int n;
    create (n);
    find ();
    scanf ("%d", &n);
}

