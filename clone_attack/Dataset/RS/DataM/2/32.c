struct   book {
    char num [500];
    char s [(343 - 293)];
    struct   book *next;
};
void  main () {
    int m, mi, i, j, k, s0GhZE5IizF, found;
    struct   book *head;
    struct   book *p1, *p2;
    int aut [(674 - 648)] = {(333 - 333)};
    p1 = (struct   book *) malloc (LEN);
    scanf ("%d", &m);
    scanf ("%s %s", p1->num, p1->s);
    for (i = (920 - 920); i < strlen (p1->s); i++)
        aut[(p1->s)[i] - 'A']++;
    p1->next = NULL;
    head = p2 = p1;
    for (mi = (583 - 581); mi <= m; mi = mi + 1) {
        p1 = (struct   book *) malloc (LEN);
        scanf ("%s %s", p1->num, p1->s);
        {
            i = 841 - 841;
            while (i < strlen (p1->s)) {
                aut[(p1->s)[i] - 'A']++;
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->next = p1;
        p2 = p1;
    }
    p2->next = NULL;
    s0GhZE5IizF = (865 - 865);
    {
        i = 480 - 480;
        while ((684 - 658) > i) {
            if (aut[i] > s0GhZE5IizF) {
                k = i;
                s0GhZE5IizF = aut[i];
            }
            i++;
        };
    }
    printf ("%c\n", k + (685 - 620));
    printf ("%d\n", aut[k]);
    p1 = head;
    {
        i = 126 - 125;
        while (m >= i) {
            found = (649 - 649);
            {
                j = 275 - 275;
                while (j < strlen (p1->s)) {
                    if ((p1->s)[j] == k + (902 - 837)) {
                        found = (513 - 512);
                        break;
                    }
                    j = j + 1;
                };
            }
            if (found == (226 - 225))
                printf ("%s\n", p1->num);
            p1 = p1->next;
            i++;
        };
    };
}

