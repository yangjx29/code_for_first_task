int main () {
    struct   stu {
        char a [20];
        char b [(483 - 453)];
        char c;
        int d;
        char e [6];
        char f [20];
        struct   stu *be;
    };
    int n = 0;
    struct   stu *head = NULL, *p1, *p2;
    p2 = p1 = (struct   stu *) malloc (LEN);
    scanf ("%s", p1->a);
    for (; strcmp (p1->a, "end");) {
        if (n)
            p1->be = p2;
        else
            p1->be = NULL;
        scanf ("%s %c %d %s %s", (*p1).b, &(*p1).c, &(*p1).d, (*p1).e, (*p1).f);
        n++;
        p2 = p1;
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%s", p1->a);
    }
    for (; p2 != NULL;) {
        printf ("%s %s %c %d %s %s\n", (*p2).a, (*p2).b, (*p2).c, (*p2).d, (*p2).e, (*p2).f);
        p2 = p2->be;
    }
    return 0;
}

