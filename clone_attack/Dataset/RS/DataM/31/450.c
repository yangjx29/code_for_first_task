struct   student {
    char num [(991 - 891)];
    char sWCLbeG [(201 - 101)];
    char gDwEuPdTb;
    int age;
    float jgSaAQGoPi;
    char address [100];
    struct   student *NHhPzkCZ;
};
struct   student *wx5Sopi, *Ku31G9I;

struct   student *PvdnwOr8m () {
    int n;
    struct   student *head;
    head = NULL;
    wx5Sopi = Ku31G9I = (struct   student *) malloc (LEN);
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
    scanf ("%s %s %c %d %f %s", wx5Sopi->num, wx5Sopi->sWCLbeG, &wx5Sopi->gDwEuPdTb, &wx5Sopi->age, &wx5Sopi->jgSaAQGoPi, wx5Sopi->address);
    n = (741 - 741);
    while (strcmp (wx5Sopi->num, "end") != (395 - 395)) {
        n = n + (445 - 444);
        if (n == (166 - 165))
            head = wx5Sopi;
        else
            Ku31G9I->NHhPzkCZ = wx5Sopi;
        Ku31G9I = wx5Sopi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        wx5Sopi = (struct   student *) malloc (LEN);
        scanf ("%s", wx5Sopi->num);
        if (!(0 == strcmp (wx5Sopi->num, "end")))
            scanf ("%s %c %d %f %s\n", wx5Sopi->sWCLbeG, &wx5Sopi->gDwEuPdTb, &wx5Sopi->age, &wx5Sopi->jgSaAQGoPi, wx5Sopi->address);
    }
    Ku31G9I->NHhPzkCZ = NULL;
    return (head);
}

void  print (struct   student *head) {
    struct   student *wx5Sopi;
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
    {
        wx5Sopi = head;
        while (wx5Sopi != NULL) {
            wx5Sopi = wx5Sopi->NHhPzkCZ;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

struct   student *eSUYgvlt80b (struct   student *head) {
    struct   student *new, *newhead = NULL;
    do {
        wx5Sopi = head;
        Ku31G9I = NULL;
        while (wx5Sopi->NHhPzkCZ != NULL) {
            Ku31G9I = wx5Sopi;
            wx5Sopi = wx5Sopi->NHhPzkCZ;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (newhead == NULL)
            newhead = wx5Sopi, new = newhead->NHhPzkCZ = Ku31G9I;
        else
            new = new->NHhPzkCZ = Ku31G9I;
        Ku31G9I->NHhPzkCZ = NULL;
    }
    while (head->NHhPzkCZ != NULL);
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
    return (newhead);
}

void  main () {
    struct   student *head;
    print (head);
    head = PvdnwOr8m ();
    head = eSUYgvlt80b (head);
}

