void  main () {
    int n;
    struct   student {
        char wcYFizyxv [(872 - 772)];
        struct   student *shnL2TbIuv;
        struct   student *prev;
    }
    *tY561my, *p1, *p2, *ZnqBxX7p;
    p1 = p2 = (struct   student *) malloc (LEN);
    gets (p1->wcYFizyxv);
    p1->prev = NULL;
    for (; strcmp (p1->wcYFizyxv, "end") != (363 - 363);) {
        p1 = (struct   student *) malloc (LEN);
        p1->prev = p2;
        gets (p1->wcYFizyxv);
        p2->shnL2TbIuv = p1;
        p2 = p1;
    }
    p2->shnL2TbIuv = NULL;
    ZnqBxX7p = p2;
    do {
        ZnqBxX7p = ZnqBxX7p->prev;
        printf ("%s\n", ZnqBxX7p->wcYFizyxv);
    }
    while (ZnqBxX7p->prev != NULL);
}

