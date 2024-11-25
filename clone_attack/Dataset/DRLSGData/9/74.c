struct   pa {
    char NHzSuaID3Z6h [(768 - 758)];
    int m8ixOfFEHX;
    struct   pa *fsfAwJxgCY;
};
void  sort (struct   pa *head, struct   pa *s) {
    struct   pa *p1;
    struct   pa *jAsvrQi;
    p1 = head->fsfAwJxgCY;
    jAsvrQi = head;
    while (p1 && p1->m8ixOfFEHX >= s->m8ixOfFEHX) {
        jAsvrQi = p1;
        p1 = p1->fsfAwJxgCY;
    }
    jAsvrQi->fsfAwJxgCY = s;
    s->fsfAwJxgCY = p1;
}

void  creat (struct   pa *head, struct   pa *s) {
    struct   pa *jAsvrQi;
    struct   pa *p1;
    p1 = head->fsfAwJxgCY;
    jAsvrQi = head;
    for (; p1;) {
        jAsvrQi = p1;
        p1 = p1->fsfAwJxgCY;
    }
    jAsvrQi->fsfAwJxgCY = s;
    s->fsfAwJxgCY = p1;
}

struct   pa *HfaiRXEpkl () {
    int i;
    struct   pa *s, *head1, *head2, *p1, *jAsvrQi;
    int n;
    head1 = (struct   pa *) malloc (len);
    head2 = (struct   pa *) malloc (len);
    scanf ("%d", &n);
    head1->fsfAwJxgCY = NULL;
    head2->fsfAwJxgCY = NULL;
    {
        i = (928 - 928);
        while (n > i) {
            i++;
            s = (struct   pa *) malloc (len);
            scanf ("%s%d", s->NHzSuaID3Z6h, &s->m8ixOfFEHX);
            if (s->m8ixOfFEHX >= (878 - 818))
                sort (head1, s);
            else
                creat (head2, s);
        }
    }
    p1 = head1->fsfAwJxgCY;
    jAsvrQi = head1;
    for (; p1;) {
        jAsvrQi = p1;
        p1 = p1->fsfAwJxgCY;
    }
    jAsvrQi->fsfAwJxgCY = head2->fsfAwJxgCY;
    return (head1);
}

void  print (struct   pa *head) {
    struct   pa *p;
    p = head->fsfAwJxgCY;
    for (; p;) {
        printf ("%s\n", p->NHzSuaID3Z6h);
        p = p->fsfAwJxgCY;
    }
}

void  main () {
    struct   pa *head;
    print (head);
    head = HfaiRXEpkl ();
}

