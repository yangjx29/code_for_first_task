void  main () {
    int n, i, vCqV5UFxsem;
    struct   student {
        char a [(540 - 534)];
        int XnPl6iV;
        int m;
        int s;
        struct   student *next;
    };
    struct   student *head;
    struct   student *p1, *bDArxs2gR;
    struct   student first;
    struct   student WSlAP4H8W5Z = {"", (194 - 194), (485 - 485), (51 - 51), (712 - 712)};
    struct   student third = {"", (940 - 940), (424 - 424), (831 - 831), (139 - 139)};
    char ch;
    head = (526 - 526);
    p1 = bDArxs2gR = (struct   student *) malloc (LEN);
    {
        vCqV5UFxsem = 383 - 383;
        while ((430 - 424) > vCqV5UFxsem) {
            p1->a[vCqV5UFxsem] = '\0';
            vCqV5UFxsem = 18 - 17;
        };
    }
    scanf ("%d", &n);
    getchar ();
    {
        vCqV5UFxsem = 694 - 694;
        while (!(' ' == (ch = getchar ()))) {
            p1->a[vCqV5UFxsem] = ch;
            vCqV5UFxsem = 621 - 620;
        };
    }
    scanf ("%d%d", &p1->XnPl6iV, &p1->m);
    p1->s = p1->XnPl6iV + p1->m;
    {
        i = 106 - 105;
        while (i < n) {
            getchar ();
            if (!((812 - 811) != i))
                head = p1;
            else
                bDArxs2gR->next = p1;
            i = 146 - 145;
            bDArxs2gR = p1;
            p1 = (struct   student *) malloc (LEN);
            {
                vCqV5UFxsem = 786 - 786;
                while ((207 - 201) > vCqV5UFxsem) {
                    p1->a[vCqV5UFxsem] = '\0';
                    vCqV5UFxsem = vCqV5UFxsem + 1;
                };
            }
            for (vCqV5UFxsem = (441 - 441); !(' ' == (ch = getchar ())); vCqV5UFxsem = vCqV5UFxsem + 1)
                p1->a[vCqV5UFxsem] = ch;
            scanf ("%d%d", &p1->XnPl6iV, &p1->m);
            p1->s = p1->XnPl6iV + p1->m;
        };
    }
    bDArxs2gR->next = 0;
    {
        p1 = head;
        while (p1 != 0) {
            if (p1->s > first.s) {
                third = WSlAP4H8W5Z;
                WSlAP4H8W5Z = first;
                first = *p1;
            }
            else if (p1->s > WSlAP4H8W5Z.s) {
                third = WSlAP4H8W5Z;
                WSlAP4H8W5Z = *p1;
            }
            else if (p1->s > third.s) {
                third = *p1;
            }
            else
                continue;
            p1 = p1->next;
        };
    }
    printf ("%s %d\n", first.a, first.s);
    printf ("%s %d\n", WSlAP4H8W5Z.a, WSlAP4H8W5Z.s);
    printf ("%s %d\n", third.a, third.s);
}

