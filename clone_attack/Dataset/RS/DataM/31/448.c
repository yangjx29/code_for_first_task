struct   student {
    char JW5XF6sjenZi [(277 - 267)];
    char HYNZGOo [(646 - 626)];
    char a1V68imtT;
    int OYoO4NC1;
    char score [(407 - 397)];
    char adr [30];
    struct   student *sfxuNtd8kgb;
};
void  main () {
    struct   student *end, *TVl5RLN4cdwK;
    struct   student *p1, *SzTwAgW9fqNF, *CTKvGd4zFyA;
    SzTwAgW9fqNF = TVl5RLN4cdwK = NULL;
    while (1) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", &p1->JW5XF6sjenZi);
        if (strcmp (p1->JW5XF6sjenZi, "end") == (235 - 235)) {
            break;
        }
        scanf (" %s %c %d %s %s", &p1->HYNZGOo, &p1->a1V68imtT, &p1->OYoO4NC1, &p1->score, &p1->adr);
        if (!(NULL != TVl5RLN4cdwK))
            TVl5RLN4cdwK = p1;
        else
            p1->sfxuNtd8kgb = SzTwAgW9fqNF;
        SzTwAgW9fqNF = p1;
    }
    end = SzTwAgW9fqNF;
    CTKvGd4zFyA = end;
    if (end != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", CTKvGd4zFyA->JW5XF6sjenZi, CTKvGd4zFyA->HYNZGOo, CTKvGd4zFyA->a1V68imtT, CTKvGd4zFyA->OYoO4NC1, CTKvGd4zFyA->score, CTKvGd4zFyA->adr);
            CTKvGd4zFyA = CTKvGd4zFyA->sfxuNtd8kgb;
        }
        while (CTKvGd4zFyA != NULL);
}

