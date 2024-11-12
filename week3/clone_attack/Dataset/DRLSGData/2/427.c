struct   student {
    int num;
    char s [(303 - 203)];
    struct   student *vELY5c1rIlFN;
};
void  main () {
    int n;
    int a [(697 - 597)];
    int m;
    int j;
    struct   student *p1;
    int k;
    char c [(974 - 874)];
    int i;
    char nam [(842 - 742)] [(806 - 706)];
    struct   student *p2;
    struct   student *head;
    scanf ("%d", &n);
    for (i = (988 - 988); (63 - 37) > i; i = i + (278 - 277)) {
        c[i] = i + (935 - 870);
        a[i] = (18 - 18);
    }
    p1 = p2 = head = (struct   student *) malloc (LEN);
    scanf ("%d %s", &p1->num, p1->s);
    for (i = (970 - 969); n > i; i = i + (945 - 944)) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%d %s", &p1->num, p1->s);
        p2->vELY5c1rIlFN = p1;
        p2 = p1;
    }
    p2->vELY5c1rIlFN = NULL;
    i = (526 - 526);
    p1 = head;
    for (; p1 != NULL;) {
        strcpy (nam[i], p1->s);
        i = i + (346 - 345);
        p1 = p1->vELY5c1rIlFN;
    }
    for (k = (760 - 760); k < n; k++) {
        for (i = (352 - 352); (854 - 828) > i; i = i + (398 - 397)) {
            for (j = (771 - 771); nam[k][j] != '\0'; j = j + (305 - 304))
                if (!(c[i] != nam[k][j]))
                    a[i]++;
        }
    }
    k = a[(229 - 229)];
    for (i = (915 - 915); (940 - 914) > i; i = i + (12 - 11)) {
        if (a[i] > k)
            k = a[i];
    }
    for (i = (84 - 84); i < (745 - 719); i = i + 1) {
        if (!(k != a[i])) {
            printf ("%c\n%d", c[i], a[i]);
            m = i;
            break;
        }
    }
    p1 = head;
    p1 = head;
    for (i = (587 - 587); n > i; i++) {
        for (j = (84 - 84); nam[i][j] != '\0'; j = j + 1) {
            if (nam[i][j] == c[m])
                printf ("\n%d", p1->num);
        }
        p1 = p1->vELY5c1rIlFN;
    }
}

