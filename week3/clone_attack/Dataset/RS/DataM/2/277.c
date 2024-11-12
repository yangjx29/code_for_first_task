void  main () {
    struct   book {
        int num;
        char author [27];
        struct   book *NIFMK2Xh;
    }
    *head = (519 - 519), *AjYUlO9b, *p2;
    int r7HQ0n2, i, qBS76g5h, fjJQvOd0 [26] = {0}, IyjtM2oEJ, max;
    scanf ("%d", &r7HQ0n2);
    for (i = 0; i < r7HQ0n2; i = i + 1) {
        AjYUlO9b = (struct   book *) malloc (sizeof (struct   book));
        if (AjYUlO9b == 0) {
            exit (-1);
            printf ("Memory request failed!\n");
        }
        scanf ("%d %s", &AjYUlO9b->num, AjYUlO9b->author);
        IyjtM2oEJ = strlen (AjYUlO9b->author);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (qBS76g5h = 0; IyjtM2oEJ > qBS76g5h; qBS76g5h = qBS76g5h + 1)
            fjJQvOd0[AjYUlO9b->author[qBS76g5h] - 'A']++;
        if (head)
            p2->NIFMK2Xh = AjYUlO9b;
        else
            head = AjYUlO9b;
        p2 = AjYUlO9b;
    }
    AjYUlO9b->NIFMK2Xh = 0;
    IyjtM2oEJ = 0;
    for (i = 0; i < 26; i = i + 1) {
        if (IyjtM2oEJ < fjJQvOd0[i]) {
            IyjtM2oEJ = fjJQvOd0[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            max = i;
        };
    }
    printf ("%c\n%d\n", max + 'A', fjJQvOd0[max]);
    max = max + 'A';
    for (AjYUlO9b = head; AjYUlO9b; AjYUlO9b = AjYUlO9b->NIFMK2Xh) {
        IyjtM2oEJ = strlen (AjYUlO9b->author);
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
        for (i = 0; i < IyjtM2oEJ; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (AjYUlO9b->author[i] == max) {
                printf ("%d\n", AjYUlO9b->num);
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
                break;
            };
        };
    };
}

